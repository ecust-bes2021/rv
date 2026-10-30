# OSS ASN.1/C 12.1 试用限制：证据与验证记录

日期：2026-10-30

范围：当前工作区中的 OSS ASN.1/C 12.1 试用编译器及运行库；TTLOG 交接包作为版本对照。本记录只分析限制和已观察到的行为，不记录任何已成功绕过的结论。

## 当前状态（2026-10-30 更新）

用户已将许可证文件放到 projects/ltetool/ossinfoctrial。本机最小样本的语法检查和生成模式均成功。生成试验意外创建了 NUL.c 和 NUL.h，确认后已清理；未测试生成程序的运行期绑定。下文较早的缺失许可证记录属于历史状态，详见末尾实测更新。

## 结论

- **厂商定义的限制**：试用编译器和使用试用运行库的程序只能在试用许可有效期内运行；生成的试用程序只能在运行 ASN.1 编译器的同一台机器运行。见 [WELCOME.HTML](../ossasn1/win32.trial/12.1.0/doc/WELCOME.HTML) 第 78–81 行。实际到期日期和许可允许的功能不能只靠版本号推断。
- **许可证搬来前的本机实测**：编译器可以显示帮助；进行不生成输出的语法检查时，首先报 C0361S，因为找不到 C:\Program Files (x86)\OSS Nokalva\ossinfoctrial。尚不能从这次试验判断许可是否过期或主机是否匹配。
- **静态线索**：编译器包含许可读取、过期报错和机器相关分支；试用运行库含主机名、网卡相关标识和时间函数。现有反编译记录没有证明绕过成功。
- **交接包的版本矛盾**：厂商 osswhat 识别交接包 soeddefa.lib 为 5.4.1，而 errc_asn1.c 头部声明编译器为 7.0，生成物要求 7.0 或更高运行库。实际成品使用哪份库、如何运行尚需核对。

## 已完成的实验

下表中的编译检查使用现有 trial_test/minitest.asn 并指定 -syntaxOnly -noOutput，没有生成或修改 C/C++ 源码。

| 实验 | 结果 | 可以说明什么 |
|---|---|---|
| 对 bin/asn1.exe 执行 -help | 退出码 0，显示 OSS ASN.1 Compiler 12.1 | EXE 能启动；帮助成功不表示编译许可有效。 |
| 未临时覆盖许可路径，对最小 ASN.1 文件执行语法检查 | 退出码 1，C0361S，无法打开 C:\Program Files (x86)\OSS Nokalva\ossinfoctrial | 当前进程找不到所需许可文件；不能判断有效期或主机匹配。 |
| 在子进程将 OSSINFOTRIAL 指向 trial_test、OSSINFO_FILE 指向已有 minitest.asn，再执行相同检查 | 退出码 1，C0446S，报告文件为不支持的旧格式 | 路径覆盖生效且无关内容被许可读取流程拒绝。此文件是 ASN.1 样本，不是旧版许可证；报文的版本数字并非许可事实。 |
| 对试用版 lib/soeddefa.lib 使用 osswhat | 12.1 (Trial)，Apr 20 2026 | 确认试用版静态库身份。 |
| 对交接包 01_lib/soeddefa.lib 使用同一 osswhat | 5.4.1，May 15 2002 | 交接库的版本标识与控制表头部需求存在矛盾。 |

工作区内 5,548 个文件及常见下载、桌面、文档目录按文件名搜索，没有发现 ossinfo 或 ossinfoctrial；这不是对整台机器的穷举。trial_test/out 在实验后仍为空。

## 编译器和运行时是两个阶段

1. **编译阶段**：asn1.exe 寻找并读取 ossinfoctrial，按许可判断产品、平台、期限等条件。现有反编译 [out_asn1_lic.c](out_asn1_lic.c) 第 59–74、181–218、1239–1271 行显示配置读取、日期检查线索以及 C0274S、C0275S 报错分发；第 335–415 行涉及 OSSINFOTRIAL 和 OSSINFO_FILE 路径。
2. **生成程序运行时阶段**：厂商将跨机器运行的典型错误标为 R0257E，见[运行时错误说明](https://www.oss.com/asn1/products/documentation/asn1-runtime-errors-reference.html)。[out_ossinit.c](out_ossinit.c) 第 86–105、161–205、592–699 行显示初始化回调和失败分支；[objdump_initroo2.c](objdump_initroo2.c) 第 55–70、137–170 行显示时间和主机相关检查线索；[out_winhost.c](out_winhost.c) 第 691–737、893–914 行涉及 getMAC、GetComputerNameA 和 gethostidex。
3. **证据边界**：试用版 soeddefa.lib 内 initroo1.obj、initroo2.obj 包含 __time64、__gmtime64、oss_gethostname、gethostidex 符号；winhost.obj 包含 getMAC 和 GetComputerName 符号。这支持相关功能存在，但不能单独证明某次执行使用了哪块网卡、以何种组合匹配、是否允许容差，或当前试用许可证已过期。
4. out_asn1_lic.c 所列多处字符串地址与当前 asn1.exe 的 PE 映射和实际字符串一致；使用 objdump 交叉检查了 C0274S/C0275S 错误分支。反编译对象输出没有附原始对象哈希，且 Ghidra 输出存在拆分、不完整警告，因此其地址不是最终链接程序的补丁偏移。

## 库身份和兼容性

| 文件 | 身份 | SHA-256 |
|---|---|---|
| ossasn1/win32.trial/12.1.0/bin/asn1.exe | 试用编译器 12.1，x86 PE | dc0d9c8e81ff22d25d458151ee354b0809b450d86a8e37c7722ccd3e1edd4d0e |
| ossasn1/win32.trial/12.1.0/lib/soeddefa.lib | 试用运行库 12.1 | 959ffeacd1181b80659acb9bb9c5d8a2e3a396b8d3b8cb6b3ee6eec70e0d4a5d |
| handover_rrc_codec/01_lib/soeddefa.lib | 交接库，osswhat 标识为 5.4.1 | 741f1b73e40fa76edbdcd57866572b0187ca4e2302fcd569291fee28c9cf0849 |

厂商 [12.1 返回码文档](https://www.oss.com/asn1/products/documentation/asn1_c_12.1/asn1c-runtime-return-codes.html) 说明，8.0 及以后编译器生成物与 8.0 之前运行库不可交叉使用；试用生成物和非试用运行库混用也可能造成不匹配。不能仅凭库文件名相同就互换；ossinit 报错也不能自动归因于机器指纹。

12.1 编译器默认生成 TOED；[厂商说明](https://www.oss.com/asn1/products/documentation/asn1_c_12.1/asn1c-compiler-overview.html)和本机 -help 均支持此点。原交接链路是 SOED 控制表，将来比较时需核对生成选项和版本配套。

## 尚未验证

- 已找到许可证并成功执行最小样本生成模式，但尚未确认具体到期日或各种编译选项的授权情况。
- 没有保留 12.1 试用编译器生成的样本 C 文件或可运行的试用程序，无法完成同机/跨机、有效期内/过期后的运行时对照。
- ossvars.bat 中记录的 OSS 安装目录、OSSINFOTRIAL 目录和 VS 2019 构建工具路径在本机均不存在；但不能排除别处另有安装。
- 尚无证据证明已有可复现的绕过方法。判断任何方案是否有效需要观察能否生成并正确解码、输出可比字段，不能只观察启动或隐藏错误消息。


## 2026-10-30：生成模式与目标对象汇编复核

### 实际生成模式

以现有 minitest.asn 调用编译器，选项为 -controlfile NUL -headerfile NUL -notoed -uper。当时原意是丢弃输出；后续成功试验证明该编译器会实际创建 NUL.c 和 NUL.h，不能用这种方式避免输出文件。这次调用不使用 -syntaxOnly 或 -noOutput。

实际结果：退出码 1，C0361S，无法打开 C:\Program Files (x86)\OSS Nokalva\ossinfoctrial。这次生成模式调用在缺少许可时失败，未生成产物。前述语法检查记录不足以单独证明生成模式的行为，这次试验补上了这一点。不能据此断言所有其他调用环境都缺少许可或整台机器从未有过试用生成物。

### 对当前试用库对象的只读汇编观察

以下结论来自试用版 soeddefa.lib 中的 COFF 对象及其反编译。对象内偏移是相对于各自 section 的坐标，不是最终可执行文件的地址或文件偏移。此处均为静态分析，尚未用试用生成物触发运行路径。

- **initroo1.obj 的 __init_em**：读取主机名、获取 host ID，利用 __init_h 匹配许可中的候选项；未匹配时会继续取下一个 ID。时间分支调用 __time64 和 __gmtime64，并根据许可数据标记决定是否进行日期判断。
- **initroo2.obj 的 __init_em**：除主机名和 host ID 外，另一条条件路径还调用 ossGetUserNameR 并对用户名做哈希；主机侧组合值包含 ROL4(hostname_hash + host_id)，并非简单的两项相加。因此不能把这些路径都概括成固定且相互独立的三项检查。
- **winhost.obj 的 hostid**：以 0xFB3EE248 为初始状态，以 0x04C11DB7 为多项式，按字节从高位到低位将输入位移入状态低位，并按旧状态最高位决定是否异或多项式。仅写“CRC32(MAC, 0xFB3EE248)”没有充分定义输入位注入、反射及最终异或规则，不能保证与常见 CRC32 API 等价。
- **ossinit.obj 的 __init_dm**：对关联控制表的数据使用 ROL4 和加法计算值，按表项数量决定步长；配合 __init_em 的比较可见表数据关联检查。表项较多时有抽样，不能概括为对全部表字节计算通用校验和。
- **失败分支**：ossinit 的检查失败分支可返回 0x12（十进制 18，FATAL_ERROR）；当额外的状态标志为 E 时，才走 R0257E 打印/弹窗分支。因此不能把每个 0x12 都等同于 R0257E，且该分支中提示发生在返回之前。与跨机器、过期相关的实际触发条件仍待运行时验证。

当时已观察到的第一个阻塞点是许可文件缺失。文件搬来后，最小样本生成模式已通过；运行期行为尚未验证。


## 搬迁目录复核

用户说明整个 OSS 程序目录来自另一台电脑。重新递归检查当前 projects/ltetool/ossasn1，确认其中有 12.1 试用编译器、DLL、头文件和运行库，但没有名为 ossinfoctrial 的单独文件。

分别在子进程设置 OSSINFOTRIAL 为下面两个目录，再对已有 minitest.asn 执行 -syntaxOnly -noOutput，均返回 C0361S：

- D:\gitfiles\rv\projects\ltetool\ossasn1 → 编译器尝试打开该目录下的 ossinfoctrial。
- D:\gitfiles\rv\projects\ltetool\ossasn1\win32.trial\12.1.0 → 编译器尝试打开该目录下的 ossinfoctrial。

随目录带来的 ossvars.bat 原有配置将 OSSASN1 指向 D:\Program Files (x86)\OSS Nokalva\ossasn1\win32.trial\12.1.0，却将 OSSINFOTRIAL 指向 C:\Program Files (x86)\OSS Nokalva。这支持“只复制 ossasn1 子目录时，单独的许可文件可能没有被一起复制”的解释，但不能据此断言原机器上该文件当前仍存在。没有读取许可文件之前，仍无法判断当前机器是否满足其绑定或期限要求。


## 2026-10-30：许可证搬来后的实测更新

用户将 ossinfoctrial 放在 D:\gitfiles\rv\projects\ltetool\ossinfoctrial 后，针对该文件进行了以下本机试验。只记录授权类型，不记录许可编号或文件内容。

- 在子进程设置 OSSINFOTRIAL=D:\gitfiles\rv\projects\ltetool，并清除 OSSINFO_FILE 覆盖；-syntaxOnly -noOutput minitest.asn 返回 0，0 错误、0 警告。编译器确认读取了新文件。
- 使用 -verbose -controlfile NUL -headerfile NUL -notoed -uper 对同一输入执行生成模式，返回 0。诊断依次报告正在生成头文件和控制表。虽然指定了 NUL，编译器实际创建了 NUL.c 和 NUL.h；它们是本次试验意外生成的文件，已在确认路径后删除。
- 详细诊断中的授权项目包括 ASN.1/C 编译器以及 NODELOCKED 运行时，并列出 x86 和 x64 项目。该单一最小样本仅证明本次 x86 编译路径通过，不能证明所有目标架构和选项都已测试。
- 此次输出未确认具体到期日；没有构建或运行生成程序，尚未验证运行期指纹或跨机行为。

因此，本文前面有关找不到 ossinfoctrial 的记录描述的是文件搬来之前的状态，当前编译器的首次许可读取障碍已经解除。
