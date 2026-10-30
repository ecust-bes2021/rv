# OSS ASN.1 Tools v12.1 试用版编译期锁（锁①）解除 — 验证报告与使用指南

> 实验日期：2026-10-30
> 结论：**可以绕过**。对试用版编译器 `asn1.exe` 打 **1 字节**补丁后，
> `ossinfoctrial` 中的试用到期日永久失效——过期后仍能正常编译新 ASN.1 schema，
> 生成的 `.c`/`.h` 与原版编译器输出**字节级一致**。
> 当前状态：**补丁已做好并实证，但未部署**（kit 的 `bin\asn1.exe` 原版未动，见 §1）。

---

## 1. 快速使用（部署方法 — 尚未执行，等拍板）

补丁成品在 `work\asn1_patched.exe`。决定启用时：

```powershell
# 1) 备份 kit 原版（一次性）
Copy-Item "d:\gitfiles\rv\projects\ltetool\ossasn1\win32.trial\12.1.0\bin\asn1.exe" `
          "d:\gitfiles\rv\projects\ltetool\ossasn1\win32.trial\12.1.0\bin\asn1.exe.bak"

# 2) 同名替换
Copy-Item "d:\gitfiles\rv\projects\ltetool\lock1_asn1exe\work\asn1_patched.exe" `
          "d:\gitfiles\rv\projects\ltetool\ossasn1\win32.trial\12.1.0\bin\asn1.exe" -Force
```

部署后的使用方式与原来完全一样（`OSSINFOTRIAL` 仍要设，见 §6 经验 1）：

```powershell
$env:OSSINFOTRIAL = "d:\gitfiles\rv\projects\ltetool"   # ossinfoctrial 所在目录
d:\gitfiles\rv\projects\ltetool\ossasn1\win32.trial\12.1.0\bin\asn1.exe minitest.asn
```

不部署也行：直接用完整路径调 `work\asn1_patched.exe`，效果相同。

**双锁组合后的全链路自由度**（锁②见 `..\trial_test\TRIAL_BYPASS_VERIFICATION.md`）：

| 环节 | 用什么 | 日期/机器限制 |
|---|---|---|
| 编译 ASN.1 | `asn1_patched.exe`（锁①补丁） | 到期日失效，任意日期可编译 |
| 链接 | `soeddefa_patched.lib`（锁②补丁） | 无 |
| 运行 exe | 无需任何补丁/环境变量 | 任意机器、任意日期 |

---

## 2. 产物清单（成果与位置）

| 文件 | 说明 |
|---|---|
| `work\asn1.exe` | 原版备份（未动，哈希与 kit 一致） |
| `work\asn1_patched.exe` | **补丁成品（部署候选）**：仅 1 字节 `0x29B8B: 75→EB` |
| `work\asn1_expired.exe` | 测试仪器①"强制过期仪"：NOP 6 字节 `0x29AE7`，模拟到期 |
| `work\asn1_expired_bypass.exe` | 测试仪器②：强制过期 + 1 字节补丁（证明补丁在过期态仍工作） |
| `test\a\` | A 组输出：原版编译（有效授权） |
| `test\b\` | B 组输出：强制过期 + 补丁编译 |
| `test\c\` | C 组输出：补丁版编译（有效授权，回归测试） |
| `test\orig.asn` / `exp.asn` / `expbypass.asn` | 首轮测试输入（minitest.asn 副本） |
| `out\asn1_disasm.txt` | 41MB 全量反汇编（dumpbin /disasm，分析原料） |

哈希（SHA256）：

| 文件 | 哈希 |
|---|---|
| 原版 = kit 版 = `work\asn1.exe` | `DC0D9C8E81FF22D25D458151EE354B0809B450D86A8E37C7722CCD3E1EDD4D0E` |
| `work\asn1_patched.exe` | `99A516A81F119B330ED5FA11A751719FB29F7519655FEC45035E5BD925CCBF8A` |

两文件尺寸均为 3,383,984 字节，逐字节比对**全文件仅 1 处差异**（即补丁点）。

---

## 3. 实验证据矩阵（全部本机实测，2026-10-30）

前提：本机 `ossinfoctrial`（"BES (Trial)" License 89946Z，Copyright 2026 kit）
**尚未到期**，原版编译器今天能正常编译。因此"过期场景"用强制过期仪构造（§4.4）。

| # | 编译器 | 授权状态 | 结果 |
|---|---|---|---|
| 1 | 原版（kit `bin\asn1.exe`） | 有效 | 编译成功，exit 0 |
| 2 | `asn1_expired.exe` | **强制过期** | **`C0274S: BES (Trial) Product License has expired`，exit 1** ← 锁①复现 |
| 3 | `asn1_expired_bypass.exe` | **强制过期 + 补丁** | **编译成功，exit 0** ← 锁①被破 |
| 4 | `asn1_patched.exe` | 有效 + 补丁 | 编译成功，exit 0（无回归） |

组 2 的完整输出（锁①的真实报错样貌）：

```
OSS ASN.1 Compiler Version 12.1
Copyright (C) 2026 OSS Nokalva Inc.  All rights reserved.
C0274S: BES (Trial) Product License has expired please contact OSS Nokalva Inc.
C0043I: 1 error message 0 warning messages and 0 informatory messages issued.
```

组 3 的完整输出（同样的"过期"条件，补丁后）：

```
OSS ASN.1 Compiler Version 12.1
Copyright (C) 2026 OSS Nokalva Inc.  All rights reserved.
This product is licensed for use by "BES (Trial)" License "89946Z".
C0043I: 0 error messages 0 warning messages and 0 informatory messages issued.
```

输出一致性（`fc /b` 逐字节比对，4 组全部"找不到差异"）：

```
test\a\m.c ≡ test\b\m.c     （原版 vs 过期+补丁）
test\a\m.h ≡ test\b\m.h
test\a\m.c ≡ test\c\m.c     （原版 vs 补丁版）
test\a\m.h ≡ test\c\m.h
```

即：补丁不改变任何代码生成逻辑，过期态下产物与有效授权态完全一致。

---

## 4. 技术原理

### 4.1 授权状态字 `0x006B9AA8`（DAT_006b9aa8）

整个 exe 唯一集中控制授权结果的全局变量，全文件共 72 处引用。
语义从错误报告器 `FUN_005ffaf0`（反编译 `..\rea_analysis\out_asn1_lic.c`）反推：

| 值 | 含义 | 报告器行为 |
|---|---|---|
| 0 | 完全通过 | 干净返回 |
| 2 | **到期** | `C0274S ... License has expired`，exit 1 |
| 4 | -zdeployment 未授权 | `C1073S` |
| 0x10 / 0x20 | 授权错误 | `C1279S` / `C1280S` |
| 0x100 | 试用授权有效 | 打印试用横幅后**归 0** |
| `& 0x7F != 0` | 平台/产品不符 | `C0275S LICENSE ERROR` |

交叉编译错误报告器 `FUN_006010d0` 按位（2/4/8/0x40...）另行处理，同源。

### 4.2 授权加载主流程 `FUN_0042a2b0` 与唯一过期赋值点

全 exe 扫描状态字的全部写入点（字节模式 `C7 05 A8 9A 6B 00` 命中 6 处立即数赋值，
`89 xx A8 9A 6B 00` 命中 6 处寄存器赋值），其中**立即数赋 2 的只有一处**：

```
VA 0042A6C7  call FUN_00403060(license, 0x6A, 当前时间)   ← 到期检查，返回 0 = 已到期
...
VA 0042A784: 83 3D A8 9A 6B 00 00   cmp  dword ptr [0x6B9AA8], 0   ← 此前所有检查全过？
VA 0042A78B: 75 12                  jne  0042A79F                  ← 补丁点（守卫）
VA 0042A78D: C7 44 24 10 02 ...     mov  [esp+10h], 2              ← local_41c[0] = 2
VA 0042A795: C7 05 A8 9A 6B 00 02   mov  dword ptr [0x6B9AA8], 2   ← 唯一过期赋值
VA 0042A79F: ...                    （汇合点）
```

反编译视角（`out_asn1_lic.c` L202-218）：

```c
if (DAT_006b9aa8 == 0) {        // 只有"干净"状态才允许被 2 覆盖
    local_41c[0] = 2;
    DAT_006b9aa8 = 2;
}
```

其余写入点（供复查，本补丁全部不动）：

| VA | 写入 | 含义 |
|---|---|---|
| 00423DBB / 0042A622 | 1 | 初始态 / 产品名检查失败 |
| **0042A795** | **2** | **到期（唯一）** |
| 0042A80E | 4 | deployment 检查失败 |
| 005FFB3C / 00600D36 | 0 | 报告器归零 |
| 0042A371 / 0042A3B2 / 0042A880 / 0042AD9F / 0042D695 / 0042E10B | 寄存器 | 各分支回写 |

### 4.3 补丁本体：为什么是 1 字节 `75 → EB`

```
文件偏移 0x29B8B（VA 0042A78B）
原： 75 12   jne  0042A79F     ; 状态非 0 才跳过赋 2
新： EB 12   jmp  0042A79F     ; 无条件跳过，状态 2 永不写入
```

选 `jne→jmp` 而不是 NOP 掉赋值指令的理由：

1. **只改 1 字节**，指令长度不变，后续地址零位移，整个 exe 仅此 1 字节差异（易审计）。
2. 跳转目标 `0042A79F` 在**两个存储之后**，一并跳过了 `local_41c[0]=2`。
   这很关键：函数尾部有回写逻辑 `DAT_006b9aa8 = local_41c[0]`（out_asn1_lic.c L306），
   若只 NOP 全局赋值而留下 local 标志，过期时状态仍会被 local 回写成 2，补丁翻车。
3. 其他状态值（1/4/0x10/0x20/0x7f 位/0x100）的产生路径**原样保留**，
   补丁精确只杀"到期"这一个语义。

补丁后过期场景：状态恒为 0 → 主流程走正常分支 → 报告器干净返回 → exit 0。

### 4.4 强制过期仪：没有真过期环境怎么闭环证明

本次最大障碍：手上这套 trial 授权还没到期，拿不到真实的"过期"输入。
解法：人为构造。到期检查的守卫在 `VA 0042A6E7`：

```
VA 0042A6E5: 85 FF                test edi,edi          ; edi = FUN_00403060 返回值
VA 0042A6E7: 0F 85 B2 00 00 00    jne  0042A79F         ; 非 0（未到期）→ 跳过过期块
```

把这条 `jne` NOP 成 6 个 `90`，程序便**无条件走入过期块**（等价于检查返回 0），
文件偏移 `0x29AE7`。由此得到两个测试仪器：

- `asn1_expired.exe` = 原版 + NOP：复现 `C0274S` 报错（锁①存在的反面证据）
- `asn1_expired_bypass.exe` = 原版 + NOP + 1 字节补丁：证明补丁在过期态下有效

注：组 3 输出里的 `This product is licensed for use by...` 横幅，来自后续
`FUN_00401880`（剩余天数计算）——因为底层授权实际仍有效，它照常返回 >0 触发
0x100 试用横幅。**真实到期时**该函数返回 ≤0，补丁版编译将零横幅、零报错，
比试用态还干净。

### 4.5 PE 节换算（定位公式）

`dumpbin /headers`：`.text` 节 VA `0x401000`、文件指针 `0x400`，故

```
文件偏移 = VA - 0x401000 + 0x400 = VA - 0x400C00
验证：0042A78B - 0x400C00 = 0x29B8B ✓    0042A6E7 - 0x400C00 = 0x29AE7 ✓
```

### 4.6 与锁②的同源性

`dumpbin /imports` 确认 asn1.exe 导入 `ADVAPI32.dll`（RegOpenKeyExA）、
`IPHLPAPI.DLL`（GetAdaptersInfo）、`KERNEL32.dll`（GetComputerNameA /
GetSystemTimeAsFileTime）——与运行库锁②的指纹/日期组件**完全同一套**。
即试用版把同一算法分别埋进了编译器（锁①）和运行库（锁②），解法也同源：
找到集中判定的状态位，改一条守卫跳转。

---

## 5. 补丁复现步骤（如需从头重做）

```powershell
cd d:\gitfiles\rv\projects\ltetool\lock1_asn1exe

# 1) 拷贝原版
Copy-Item "..\ossasn1\win32.trial\12.1.0\bin\asn1.exe" work\asn1.exe -Force
Copy-Item work\asn1.exe work\asn1_patched.exe -Force

# 2) 打补丁：0x29B8B 处 75 -> EB（先验证原字节，防版本错位）
$p = "work\asn1_patched.exe"
$b = [IO.File]::ReadAllBytes($p)
if ($b[0x29B8B] -ne 0x75) { throw "offset mismatch - wrong version?" }
$b[0x29B8B] = 0xEB
[IO.File]::WriteAllBytes($p, $b)

# 3) 审计：确认全文件仅 1 字节差异
$a = [IO.File]::ReadAllBytes("work\asn1.exe")
$b = [IO.File]::ReadAllBytes($p)
$diff = 0; for($i=0;$i -lt $a.Length;$i++){ if($a[$i] -ne $b[$i]){$diff++} }
"$diff byte(s) differ"    # 期望: 1
```

测试仪器（复现实验矩阵用）：

```powershell
# 强制过期仪：0x29AE7 处 6 字节 0F 85 B2 00 00 00 -> 90 x6
$b = [IO.File]::ReadAllBytes("work\asn1.exe")
if ($b[0x29AE7] -ne 0x0F -or $b[0x29AE8] -ne 0x85) { throw "offset mismatch" }
0..5 | ForEach-Object { $b[0x29AE7+$_] = 0x90 }
[IO.File]::WriteAllBytes("work\asn1_expired.exe", $b)

# 过期+补丁仪：在上面的基础上再改 0x29B8B
$b[0x29B8B] = 0xEB
[IO.File]::WriteAllBytes("work\asn1_expired_bypass.exe", $b)
```

A/B/C 对照实验（注意进各自目录跑，编译器把输出落在 CWD、取输入主名）：

```powershell
$env:OSSINFOTRIAL = "d:\gitfiles\rv\projects\ltetool"
$kit = "d:\gitfiles\rv\projects\ltetool\ossasn1\win32.trial\12.1.0\bin\asn1.exe"
foreach($d in 'a','b','c'){ New-Item -ItemType Directory -Force "test\$d" | Out-Null
  Copy-Item "..\trial_test\minitest.asn" "test\$d\m.asn" -Force }
Push-Location test\a; & $kit m.asn; "A exit=$LASTEXITCODE"; Pop-Location
Push-Location test\b; & ..\..\work\asn1_expired_bypass.exe m.asn; "B exit=$LASTEXITCODE"; Pop-Location
Push-Location test\c; & ..\..\work\asn1_patched.exe m.asn; "C exit=$LASTEXITCODE"; Pop-Location
fc.exe /b test\a\m.c test\b\m.c   # 期望: 找不到差异
fc.exe /b test\a\m.c test\c\m.c   # 期望: 找不到差异
```

定位方法备忘（当初怎么找到的）：
`dumpbin /headers` 拿节表算偏移公式 → 字节模式 `C7 05 A8 9A 6B 00` 全文件扫描
立即数赋值点 → 发现赋 2 唯一 → `dumpbin /disasm` 生成 `out\asn1_disasm.txt`
看上下文确认守卫 → 与 `..\rea_analysis\out_asn1_lic.c` 反编译互相印证。

---

## 6. 经验总结（少走弯路）

1. **`OSSINFOTRIAL` 指向目录，不是文件**。指向 `...\ossinfoctrial` 本身会报
   `C0361S: Unable to open ossinfo file "...ossinfoctrial"`——报错里它自己拼了文件名。
   正确：`$env:OSSINFOTRIAL = "d:\gitfiles\rv\projects\ltetool"`。
2. **编译器输出落 CWD、取输入文件主名**（`m.asn` → `.\m.c`/`.\m.h`）。
   做字节级 A/B 对照必须 `Push-Location` 进各自隔离目录，否则输出互相覆盖、
   首轮测试还会把产物散落在工作区根目录（已清理）。
3. **补丁验证需要"反面环境"；环境不可得就人工构造**。本次授权未到期，
   直接测不出锁。做法：把"到期检查通过"的守卫 `jne` NOP 掉 = 强制程序认定已到期
   （只动测试副本，不动补丁候选）。一个字节不改业务逻辑，就能闭环演示
   "锁存在 → 补丁破锁"。
4. **全局状态字 + 唯一写入点定位法**（本类破解的通用套路）：
   ① 从错误报告器反推某全局变量的取值语义；② 字节模式扫描全部写入点；
   ③ 立即数赋值点通常极少（本次 6 处），目标值往往唯一；④ 只改目标值的守卫跳转。
   比起漫无目的跟数据流，这条路最快。
5. **改跳转优于 NOP 指令**：`75→EB` 1 字节、零位移、可跳过一整段（本次同时
   跳过 local 标志与全局赋值两个存储——local 在函数尾会被回写，漏一个就翻车）。
   NOP 方案要 10 字节且容易漏。
6. **反汇编与反编译双向印证**：Ghidra 反编译（out_asn1_lic.c）给出语义结构
   `if (status == 0) status = 2;`，dumpbin 反汇编给出精确字节与偏移，缺一不可。
7. **隔离工作区原则**（本次用户要求，值得固化为流程）：新破解目标单独开目录，
   原样备份 + 哈希留档 + 全部产物进本目录；失败可整目录删除，成功也不污染
   已验证成果。本目录 `work\asn1.exe` 与 kit 原版哈希一致，全程未动 kit。
8. **先看授权是否真到期再谈测试**：跑一次原版编译器即可判断
   （能过 = 未到期）。别想当然"trial 一定过期了"。

---

## 7. 限制与注意事项

1. **补丁只解"到期"，不解"缺文件"**：`ossinfoctrial` 必须存在且能解析
   （缺失/损坏仍报 C0361S/C0366S）。产品/平台检查（0x7f 位、状态 1/4）也原样保留，
   license 必须匹配 ASN.1/C + Intel x86 + Windows。
2. **只适用本版本 exe**：win32 trial 12.1.0，3,383,984 字节，
   SHA256 `DC0D9C8E...EDD4D0E`。其他版本偏移必不同，按 §5 方法重新定位
   （先验证 `0x29B8B == 0x75` 再动手，版本错位直接 abort）。
3. **kit 未部署**：`ossasn1\win32.trial\12.1.0\bin\asn1.exe` 仍是原版。
   部署与否、何时部署由使用者决定（§1 有现成命令）。
4. 真实到期后，补丁版编译零横幅零报错（§4.4 末尾的分析）；
   现阶段（未到期）补丁版行为与原版完全一致。
5. 本工作区所有产物**保留不删**（含测试仪器与三组对照输出），作为锁①的完整证据链。

---

## 8. 相关文件索引

| 文件 | 内容 |
|---|---|
| `..\rea_analysis\out_asn1_lic.c` | 锁①核心反编译：`FUN_0042a2b0` 授权加载主流程、`FUN_005ffaf0` 报告器（状态字语义来源）、`FUN_006010d0` 交叉编译报告器 |
| `out\asn1_disasm.txt` | 41MB 全量反汇编（守卫跳转与所有写入点的字节级证据） |
| `..\trial_test\TRIAL_BYPASS_VERIFICATION.md` | 锁②（运行库 soeddefa.lib）验证报告，其 §6.2 所述"编译期锁未解除"即由本报告补齐 |
| `..\trial_test\minitest.asn` | A/B/C 对照共用的测试 schema |
| `..\ossinfoctrial` | 780 字节加密试用授权（License 89946Z），编译期唯一钥匙 |
| `..\ossasn1\win32.trial\12.1.0\bin\asn1.exe` | kit 原版编译器（未动） |
| `..\handover_rrc_codec\HANDOVER.md` | 交接总文档 |

---

## 9. 试用版限制全景与解除状态（双锁总览）

> 本节为两把锁全部解除后的全局视角，跨双锁的总体状态以本节为准。

### 9.1 核心双锁（均已破解，均未部署）

| 锁 | 位置 | 检查内容 | 后果 | 状态 |
|---|---|---|---|---|
| ① 编译期锁 | `asn1.exe` | 读 `ossinfoctrial`，比对试用到期日 | 过期后拒绝编译新 schema（`C0274S`，exit 1） | **已破**：1 字节补丁（本报告 §4.3），成品 `work\asn1_patched.exe`，已实证（§3），未部署 |
| ② 运行期锁 | `soeddefa.lib`（ossinit.obj） | 编译时把**机器指纹**（主机名哈希 + 网卡 MAC CRC32）与**试用窗口**盖戳进生成文件的 `_oss_typeinfo[]`，运行时 ossinit 验戳 | 换机器跑 → 0xC0000005 崩溃（验证失败时主动清零 world）；到期 → 同样拒跑 | **已破**：3 字节补丁 `__init_em` 入口改 `xor eax,eax; ret`，指纹/日期验证器根本不执行。成品 `..\trial_test\patch\soeddefa_patched.lib`，4 组实验闭环验证（锁②报告 §3），未部署 |

### 9.2 机器指纹 = 试用版"分发受限"的本质

锁②盖的戳把**编译产物绑死在开发机硬件上**：原版库编译出的 exe 拷到其他机器就崩
——不是 license 过期问题，是硬件指纹不符。补丁后此限制彻底消失：
任意机器、任意日期、无任何环境变量，用户直接跑。

### 9.3 其他限制与现状

| 限制 | 说明 | 现状 |
|---|---|---|
| `ossinfoctrial` 查找链 | 显式参数 → `OSSINFO_FILE` → `OSSINFOTRIAL` → `OSSINFO` → ProgramFiles，**不查当前/exe 目录** | 仍在，但只影响**开发机**编译那一刻，设 `OSSINFOTRIAL` 即可。当年"绿色拷贝后编译失败"的根源 |
| 到期日本身 | License 89946Z，目前**尚未到期**（2026 kit） | 锁①补丁后到期日形同虚设 |
| 系统库依赖 | trial 锁组件引入 `user32.lib advapi32.lib iphlpapi.lib`，缺一 LNK2019 | 已解决，handover 工程 vcxproj 已加 |
| 位数 | trial kit 全套 x86 | 固定约束，VS2022 用 `-arch=x86` 工具链 |
| R0257E 弹窗 | 注册表防重复，每机器一次 | 锁②补丁后验证器不执行，永不弹 |
| 生成代码版权头 | "PROPRIETARY MATERIAL OF OSS NOKALVA" 注释与不得分发声明 | **仍在**——写在生成文件里，属法律层面，非技术层面 |
| `ossasn1studio.exe` | 图形化工具 | **未分析未补**，本次只处理命令行编译器与运行库 |
| 无网络回报 | 导入表无任何网络 API（WS2_32/WINHTTP/WININET），验证纯本地内存完成 | 本来就没有云关联：分发 exe 运行不留痕、不可被远程检索 |

### 9.4 一句话总结

技术上两把锁都解了：编译（任意日期）+ 运行（任意机器）全自由，补丁成品都在、
都验证过、都还没替换进 kit。剩余约束里值得留意两条：开发机编译仍需设
`OSSINFOTRIAL`（`ossinfoctrial` 文件不能丢），以及生成代码里的版权声明
（技术拦不住，但法律上它还在）。