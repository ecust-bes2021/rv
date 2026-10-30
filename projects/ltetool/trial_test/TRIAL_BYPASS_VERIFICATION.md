# OSS ASN.1 Tools v12.1 试用版运行期锁绕过 — 验证报告与使用指南

> 实验日期：2026-10-30
> 结论：**可以绕过**。对试用版运行库 `soeddefa.lib` 打 3 字节补丁后，
> 试用版编译器生成的编解码代码可在**任意机器、任意日期**（含 license 过期后）正常运行，
> 现有业务代码（`ossDecode` / `ossPrintPDU` / `ossLinkPer` 等）**零改动**。

---

## 1. 快速使用（最重要的部分）

真实项目链接时，把原版 lib 换成补丁版即可：

```
原：  /link soeddefa.lib
改：  /link /LIBPATH:..\trial_test\patch soeddefa_patched.lib user32.lib advapi32.lib iphlpapi.lib
```

要点：

| 项 | 要求 |
|---|---|
| 补丁库 | `trial_test\patch\soeddefa_patched.lib`（本次已做好并验证） |
| 必须额外链 | `user32.lib advapi32.lib iphlpapi.lib`（trial 锁组件引入：弹窗/注册表/取 MAC） |
| 位数 | **x86（32 位）**，与 trial 库一致；VS2022 用 `-arch=x86` 工具链 |
| 业务代码 | Decode.c / rrc.c 等一行不用改 |
| ASN.1 编译 | 仍需 `OSSINFOTRIAL` 环境变量指向 `ossinfoctrial` 所在目录（见 §6 限制） |

VS2022 编译环境（本机）：

```powershell
Import-Module "D:\software\installation\VS2022\IDE\Common7\Tools\Microsoft.VisualStudio.DevShell.dll"
Enter-VsDevShell -InstallPath "D:\software\installation\VS2022\IDE" -DevCmdArguments '-arch=x86 -no_logo' -SkipAutomaticLocation
```

---

## 2. 产物清单

| 文件 | 说明 |
|---|---|
| `patch\soeddefa_patched.lib` | **给真实项目用的库**（原 lib 拷贝 + 换入补丁版 ossinit.obj） |
| `patch\ossinit.obj` | 已打补丁的 obj（`__init_em` 入口 = `xor eax,eax; ret`） |
| `patch\initroo1.obj` | 从原 lib 提取的内层验证器 obj（留档分析用，不需要链） |
| `trialtest.exe` | 测试 1：有效 stamp + 原版 lib（证明本机编译本机跑正常） |
| `trialtest_bad.exe` | 测试 2：篡改 stamp + 原版 lib（证明锁真实存在，无视 rc 必崩） |
| `trialtest_patched.exe` | 测试 3：篡改 stamp + 补丁 obj 覆盖链接（证明绕过成功） |
| `trialtest_libtest.exe` | 测试 4：篡改 stamp + 仅 `soeddefa_patched.lib`（证明合并库可用） |
| `main.c` / `main_bad.c` | 两个测试驱动源码 |
| `minitest.asn` / `minitest.h` / `out\mini.c` | 最小 ASN.1 测试输入与本机生成的 trial 产物 |
| `out\mini_bad.c` | mini.c 篡改版（`_oss_typeinfo[47]` 0xB9→0xBA） |

复跑任一测试：进入本目录，配好 x86 环境后

```powershell
# 测试 2（反面证据，预期 rc=0x12 + 崩溃 0xC0000005）
cl /nologo /D_CRT_SECURE_NO_WARNINGS main_bad.c out\mini_bad.c /I. /I..\ossasn1\win32.trial\12.1.0\include /Fe:t.exe /link /LIBPATH:..\ossasn1\win32.trial\12.1.0\lib soeddefa.lib user32.lib advapi32.lib iphlpapi.lib
.\t.exe

# 测试 4（正面证据，预期全通）
cl /nologo /D_CRT_SECURE_NO_WARNINGS main_bad.c out\mini_bad.c /I. /I..\ossasn1\win32.trial\12.1.0\include /Fe:t.exe /link /LIBPATH:patch soeddefa_patched.lib user32.lib advapi32.lib iphlpapi.lib
.\t.exe
```

---

## 3. 实验证据矩阵（全部本机实测）

| # | 场景 | ossinit 返回 | 后续行为 |
|---|---|---|---|
| 1 | 有效 stamp + 原版 lib | 0 | BER 编解码 / PrintPDU 全通，无弹窗 |
| 2 | **篡改 stamp** + 原版 lib（无视 rc 硬跑） | **0x12 (18)** | **ossEncode 立即 0xC0000005 崩溃** |
| 3 | 篡改 stamp + 补丁 obj 覆盖链接 | 0 | 编解码 / PrintPDU 全通 |
| 4 | 篡改 stamp + 仅 `soeddefa_patched.lib` | 0 | 编解码 / PrintPDU 全通，exit=0 |

测试 2 中的 BER 输出（补丁后同输入）：

```
[2] ossEncode rc=0 len=22
    bytes: 30 14 02 02 10 E1 1A 0E 74 61 6D 70 65 72 65 64
[3] ossDecode rc=0
    id=4321 name=tampered-stamp
```

---

## 4. 技术原理

### 4.1 试用版验证链（反编译还原）

```
ossinit (ossinit.obj)
  └─ __init_em wrapper            ←── 补丁点（入口 3 字节 stub）
       ├─ _oss_typeinfo[] blob 的 XOR 折叠校验和
       ├─ 类型标记 == 0x30002 绑定（与 __init_dm 折叠校验和比对）
       └─ (*__init_nl)(world, ...)  转发内层验证器
            └─ initroo1.obj 内层验证器（补丁后永远不会执行）
                 ├─ 主机名 ROL4 哈希比对          ← 机器指纹锁
                 ├─ 逐网卡 CRC32(MAC, 初值 0xFB3EE248) ← 机器指纹锁
                 └─ __time64/__gmtime64 → 三段 3 位数字 +1900 与到期日比对 ← 试用期锁
```

- 机器指纹与日期检查**全部在内层验证器**（initroo1.obj），由 `__init_nl` 函数指针调用。
- wrapper（ossinit.obj 内 static `__init_em`）自身不写 world，纯验证 + 转发。
- `ossDecode` / `ossEncode` / `ossPrintPDU` 等业务函数**本身零校验逻辑**。

### 4.2 为什么"无视返回值"绕不过（测试 2 崩溃机制）

`out_ossinit.c` L690-L699（ossinit 失败路径）：

```c
(*(code *)param_1[0x1b6])(param_1[0x1b9]);   // 调 free 回调释放 world 内部结构
param_1[0x1b9] = 0;                           // internal = NULL
for (iVar6 = 0x1ba; iVar6 != 0; iVar6--) {    // 442 个 int = 0x6A8 字节
    *param_1 = *piVar4;                       // 用清零的栈缓冲覆盖 world 头部
    ...
}
return 0x12;
```

即：校验失败时 ossinit **主动释放并清零 world** 再返回 0x12，因此无视 rc 继续调用
ossEncode 必然访问空/已释放指针 → 0xC0000005。返回码只是"通知"，破坏是实打实的。

（R0257E 弹窗只在 world 内某标志为 `'E'` 时才弹，且每机器只弹一次——注册表 +
`__message_displayed` 全局防重复；本实验默认路径下未弹窗，直接静默失败。）

### 4.3 补丁本体

- 目标：`soeddefa.lib` 中的 `ossinit.obj`，static 符号 `__init_em`
- 位置：SECTB（`.text$mn` COMDAT）节起始 = **文件偏移 0xE8C**（节 raw data 指针，size 0x2F4）
- 字节：

```
偏移      原                          新
0xE8C:   83 EC 14   sub esp,14h      33 C0 C3   xor eax,eax; ret
0xE8F:   8B 44 24 18 ...             (不变)
```

wrapper 入口直接返回 0（成功），内层指纹/日期验证器永远不会执行，ossinit 正常走完
全部初始化（`setDefaultEncodingRules` 等本来就在校验之后无条件执行）。

### 4.4 编译期 vs 运行期（重要边界）

- **运行期锁**（本报告解决）：`ossinfoctrial` 在编译时把机器指纹+试用窗口盖戳进
  生成文件的 `_oss_typeinfo[]` 凭证；运行库在 ossinit 时验戳。补丁后此锁失效。
- **编译期锁**（已另案解除，见 `..\lock1_asn1exe\LOCK1_BYPASS_VERIFICATION.md`）：
  `asn1.exe` 自身读 `ossinfoctrial`（780 字节加密文件，License 89946Z）。若该文件
  丢失或其中试用窗口到期，编译新 ASN.1 会被拦（C0361S / C0274S）。锁①补丁后
  到期日失效，但文件仍须存在且可解析。
- 试用产物与商业产物的结构性差异：trial 生成文件调 `ossInitRootContext1`（挂凭证），
  商业版调 `ossInitRootContext`（不挂）。
- `ossinfoctrial` 查找链：显式参数 → `OSSINFO_FILE` → `OSSINFOTRIAL` → `OSSINFO` →
  默认 `%ProgramFiles%\OSS Nokalva\`。**不查当前目录/exe 目录**——这就是当年绿色拷贝
  后编译失败的根本原因。设置 `OSSINFOTRIAL` 指向其所在目录即可。

---

## 5. 补丁复现步骤（如需从头重做）

```powershell
# 0) x86 编译环境（见 §1），然后进入工作目录
cd d:\gitfiles\rv\projects\ltetool\trial_test

# 1) 从原 lib 提取 ossinit.obj
lib /nologo /extract:"ossinit.obj" /out:ossinit.obj "..\ossasn1\win32.trial\12.1.0\lib\soeddefa.lib"

# 2) 打补丁：偏移 0xE8C 处 3 字节
#    验证原字节应为 83 EC 14（sub esp,14h），改为 33 C0 C3（xor eax,eax; ret）
$b = [IO.File]::ReadAllBytes("ossinit.obj")
if ($b[0xE8C] -ne 0x83 -or $b[0xE8D] -ne 0xEC -or $b[0xE8E] -ne 0x14) { throw "offset mismatch" }
$b[0xE8C] = 0x33; $b[0xE8D] = 0xC0; $b[0xE8E] = 0xC3
[IO.File]::WriteAllBytes("ossinit.obj", $b)

# 3) 合并回 lib 副本（原 lib 不动）
Copy-Item "..\ossasn1\win32.trial\12.1.0\lib\soeddefa.lib" soeddefa_patched.lib -Force
lib /nologo /remove:ossinit.obj soeddefa_patched.lib
lib /nologo soeddefa_patched.lib ossinit.obj
```

定位方法备忘：`dumpbin /symbols ossinit.obj` 找 `__init_em`（Static, SECTB）；
`dumpbin /headers ossinit.obj` 看 SECTB 的 file pointer to raw data（0xE8C）；
`dumpbin /disasm ossinit.obj` 确认入口字节 `83 EC 14`。

重新生成 ASN.1 产物（编译期仍需有效 ossinfoctrial）：

```powershell
$env:OSSINFOTRIAL = "d:\gitfiles\rv\projects\ltetool"   # ossinfoctrial 所在目录
..\ossasn1\win32.trial\12.1.0\bin\asn1.exe -controlfile out\mini.c -allow universaltags minitest.asn
```

---

## 6. 限制与注意事项

1. **补丁只针对 win32 trial 12.1.0 的 `soeddefa.lib`（SOED 静态库）**。其他版本、
   TOED 库或 DLL 版本的 `__init_em` 偏移不同，需按 §5 方法重新定位。
2. **编译期锁已另案解除**（2026-10-30，见 `..\lock1_asn1exe\LOCK1_BYPASS_VERIFICATION.md`）：
   1 字节补丁破 `asn1.exe` 到期检查，过期后仍可编译新 schema。`ossinfoctrial` 文件
   本身仍须存在且可解析（锁①补丁只杀到期，不杀缺文件）。
3. 位数必须 x86；用 x64 工具链链 32 位 lib 会直接报错。
4. `user32.lib advapi32.lib iphlpapi.lib` 三个系统库缺一会 LNK2019（R0257E 弹窗、
   注册表防重复、GetAdaptersInfo 取 MAC 都是 trial 锁组件引入的依赖）。
5. 不要把补丁 obj 和原版 `soeddefa.lib` 同时放链接行，可能因符号选择的不确定性拉回
   未打补丁的 ossinit.obj；统一用 `soeddefa_patched.lib` 最稳妥。
6. 补丁后 `ossterm` / `ossFreePDU` / `ossFreeBuf` 均正常，无资源泄漏副作用（实测）。

---

## 7. 相关文件索引

| 文件 | 内容 |
|---|---|
| `..\rea_analysis\out_ossinit.c` | ossinit / `__init_em` wrapper / R0257E 弹窗 / world 清零循环 反编译 |
| `..\rea_analysis\objdump_initroo1.c` | 内层验证器反编译（0x99 标记 → 日期三段解析 +1900） |
| `..\rea_analysis\out_winhost.c` | getMAC / hostid / oss_gethostid（CRC32(MAC, 0xFB3EE248)） |
| `..\rea_analysis\out_asn1_lic.c` | ossinfoctrial 路径查找链（FUN_00424bd0） |
| `..\rea_analysis\OSS_TRIAL_RESTRICTIONS.md` | 试用限制前期分析 |
| `..\handover_rrc_codec\HANDOVER.md` | 交接总文档（§3.4 为本实验验证的模型） |
| `..\handover_rrc_codec\04_src\Decode.c` | 业务侧耦合点：ossDecode×4 / ossPrintPDU×3 / ossFreePDU×2 |
| `..\handover_rrc_codec\04_src\rrc.c` | 业务侧耦合点：ossLinkPer 等运行时钩子 |
| `..\ossinfoctrial` | 780 字节加密试用授权（License 89946Z），编译期唯一钥匙 |
| `..\lock1_asn1exe\LOCK1_BYPASS_VERIFICATION.md` | 锁①（编译期 asn1.exe 到期锁）验证报告，其 §9 为双锁限制全景总览 |