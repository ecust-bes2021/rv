# REV-MATRIX 逆向工程工具矩阵（AI 交接手册）

> **文档用途**：本文件是本工作区逆向/安全评估能力的唯一权威索引。任何 AI 助手或人类接手时，应先读此文件，再动手。所有路径、版本、命令均已在 2026-10-12 实机安装并冒烟验证。
>
> **维护约定**：新装/升级工具后必须同步更新本文档对应条目；删除工具亦然。工具卡片里的"验证"字段标注了最后一次验证日期。

---

## 0. 环境基座（所有操作的前提）

| 项 | 值 |
|---|---|
| 操作系统 | Windows 11 + WSL2 Ubuntu-24.04（用户 `jerry_hu`，免密 sudo **不可用**，sudo 需密码） |
| Shell | PowerShell 7（Windows 侧）；bash（WSL 侧） |
| 终端权限 | **非管理员**。因此 Windows 侧全部采用便携版（portable）工具，不写注册表、不需要装运行时 |
| 本地代理 | `http://127.0.0.1:7897`（**必须走代理才能访问 GitHub/PyPI/Docker Hub**） |
| Windows Python | 3.12.6（`pip` 可用，装了 mitmproxy/frida 等，见 §2.3） |
| WSL Docker | Docker 29.1.3，dockerd 全局代理已配（`/etc/systemd/system/docker.service.d/proxy.conf`） |

**代理速记**：
- PowerShell 下载：`Invoke-WebRequest -Proxy http://127.0.0.1:7897 ...`
- pip：`$env:HTTPS_PROXY='http://127.0.0.1:7897'`
- git：`export https_proxy=http://127.0.0.1:7897`
- WSL 内直连 GitHub 前先 `export https_proxy=http://127.0.0.1:7897`（WSL2 的 localhost 指向宿主机，7897 可直达）

---

## 1. 目录布局

> 2026-10-12 已整理为「通用脚本 + 项目隔离」结构。**新项目一律从 `projects\_template\` 复制起步**；跨项目复用脚本放 `scripts\`，绑项目的脚本放各自 `projects\<项目名>\scripts\`。

```
d:\gitfiles\rv\                       # 工作区根
├── REV-MATRIX.md                     # 本文档
├── tools\                            # 全部便携工具（不进系统 PATH，按需引用）
│   ├── x64dbg\release\x64\x64dbg.exe # Windows 原生动态调试器
│   ├── dnSpy\dnSpy.exe               # .NET 反编译+调试器（netframework 版）
│   ├── die\die\die.exe|diec.exe|diel.exe   # 查壳/编译器识别（GUI/CLI/低内存）
│   ├── zap\ZAP_2.17.0\               # OWASP ZAP 跨平台版
│   ├── zap-launcher.bat              # ZAP 启动器（内置便携 JRE 注入，必用它启动）
│   └── java\                         # Temurin JRE 17.0.20.1（仅供 ZAP 用）
├── scripts\                          # 跨项目通用脚本（吃参数，不绑项目）
│   ├── rea\                          #   _rea_extract.py / _rea_extract2.py（rea JSON 结果提取器）
│   └── artex\                        #   _artex_status.py（任务状态/frontier/findings 查询，改 TID 换任务）
└── projects\                         # ★ 一项目一文件夹，产物互不混杂
    ├── _template\                    #   新项目脚手架：README.md 项目卡 + claims-template.md 疑点模板
    └── water_elec\                   #   案例：水电租赁 APK
        ├── base.apk / extracted\     #     目标 APK 与解包产物
        ├── apk-five-claims.md / .json #     静态五项疑点报告
        ├── artex_report_task1.md     #     ARTEX 动态验证报告（两漏洞实锤证据链）
        ├── artex_concl_task1.txt     #     四项验证逐项结论
        └── scripts\                  #     项目专属管线：_rea_dex / _rea_refs / _rea_lockcore /
                                      #       _rea_dump_keytable / _apk_urls + ARTEX task1 导出器
                                      #       _artex_report.py / _artex_concl.py + 任务创建器
                                      #       _artex_create_task.py（新项目建任务参照它改 DOMAINS/GOAL）
```

WSL 侧既有工具（历史安装，非本次）：
- `rea`：命令行逆向套件（PATH 上直接可用）
- Ghidra：`/home/jerry_hu/tools/ghidra_12.1.4_PUBLIC`（`GHIDRA_INSTALL_DIR` 指向它）
- jadx headless MCP：`/home/jerry_hu/tools/jadx-headless-mcp-0.7.1-all.jar`
- binwalk v3：`/home/jerry_hu/.cargo/bin/binwalk`（注意是 cargo 装的 v3，语法与 apt 版 v2 略不同）
- ARTEX：`/home/jerry_hu/artex`（Docker Compose 部署，Web UI `http://localhost:8787`）

---

## 2. 能力矩阵总表（目标类型 → 工具路由）

| 目标类型 | 第一步（拆开/识别） | 深挖（静态/动态） | 网络验证（ARTEX 衔接点） |
|---|---|---|---|
| **Windows 原生 exe/dll** | `diec.exe <file>` 查壳/编译器 | Ghidra（静态）+ x64dbg（动态） | 若目标有网络行为 → mitmproxy 抓 |
| **.NET exe/dll** | `diec.exe`（显示 .NET 版本） | dnSpy 直接反编译成 C#，可附加调试 | 同上 |
| **Android APK** | MobSF 快筛（§2.4） | rea + jadx（Java 层）+ Ghidra（.so 层）+ Frida（运行时 hook） | mitmproxy 抓真实流量 → 样本喂 ARTEX |
| **网站/Web API** | 浏览器/ZAP 代理初步观察 | ZAP 手动测试；mitmproxy 脚本化 | 直接进 ARTEX（资产+任务） |
| **BLE 蓝牙设备** | Android 开发者选项 HCI snoop log | Wireshark 分析 pcap | 若 BLE 网关对接云端 → 接口进 ARTEX |
| **固件镜像** | `binwalk -e <img>` 解文件系统 | 解出的二进制走 Ghidra/x64dbg 管线 | 解出的 Web 服务可直接进 ARTEX |

---

## 3. 工具卡片（已安装并验证）

### 3.1 x64dbg —— Windows 原生动态调试

- **路径**：`d:\gitfiles\rv\tools\x64dbg\release\x64\x64dbg.exe`（32 位目标用 `...\x32\x32dbg.exe`）
- **版本**：snapshot 2026-05-27｜**验证**：2026-10-12（文件存在性）
- **用法**：GUI 程序。目标 exe 拖进去；`F9` 运行、`F2` 断点、`F8` 单步；命令栏支持 `bp <addr>`、条件断点、内存窗口、Scylla 插件可 dump 内存。
- **典型工作流**：DIE 识别无壳 → Ghidra 找到关键函数地址 → x64dbg 下断点跟实际执行流（对抗静态混淆/反编译不准）。
- **注意**：免安装，配置存在自身目录，可直接拷贝到别的机器。

### 3.2 dnSpyEx —— .NET exe/dll 反编译与调试

- **路径**：`d:\gitfiles\rv\tools\dnSpy\dnSpy.exe`（CLI 反编译：`dnSpy.Console.exe`）
- **版本**：v6.6.0 netframework 版（依赖 .NET Framework 4.8，Win11 自带，零安装）｜**验证**：2026-10-12
- **用法**：GUI。拖入 .NET 程序集直接看到 C# 源码；可"编辑二进制"改 IL 后保存；可附加到运行中的 .NET 进程断点调试。
- **典型工作流**：中小厂商 Windows 软件大量是 .NET 写的——先用 DIE 确认是 .NET（或直接拖 dnSpy 试试），是的话**不要**进 Ghidra 啃汇编，直接拿"准源码"。
- **CLI 示例**：`& d:\gitfiles\rv\tools\dnSpy\dnSpy.Console.exe -p <outdir> <Assembly.dll>`（批量导出源码）

### 3.3 Detect It Easy (DIE) —— 查壳与编译器指纹

- **路径**：`d:\gitfiles\rv\tools\die\die\die.exe`（GUI）、`diec.exe`（CLI，管道友好）、`diel.exe`（大文件低内存）
- **版本**：3.21｜**验证**：2026-10-12（实测识别 PE64/MSVC 2022/LTCG；当时样本 BES dll 已随项目清理）
- **CLI 示例**：`& d:\gitfiles\rv\tools\die\die\diec.exe <file>` —— 输出壳/编译器/链接器/签名状态
- **定位**：逆向第一步永远先跑它。有壳先脱壳再进 Ghidra，否则白逆。结果也能判断走 Ghidra 还是 dnSpy。

### 3.4 mitmproxy —— HTTP(S) 抓包与脚本化中间人

- **安装方式**：Windows 全局 pip（Python 3.12.6）
- **版本**：12.2.3｜**验证**：2026-10-12（`mitmdump --version` 通过）
- **三个入口**：
  - `mitmproxy` —— 终端 UI 交互式抓包
  - `mitmweb` —— 浏览器 UI（`http://127.0.0.1:8081`）
  - `mitmdump` —— 无界面，配合 `--set` 和 `-s script.py` 脚本化
- **标准抓包流程**：`mitmweb` 起 8080 代理 → 目标设备/浏览器设代理 → 首次访问 `http://mitm.it` 装根证书（CA 证书存于 `~\.mitmproxy\`）→ 看流量。
- **抓 App 流量的前置**：SSL pinning 会挡 mitmproxy → 用 §3.5 objection/Frida 绕过。
- **与 ARTEX 衔接（核心价值）**：抓到的真实请求（Method 名、参数、签名格式）作为 ground truth 写进 ARTEX 任务的上下文，省掉盲枚举（盲枚举曾触发目标 WAF 封禁）。
- **常用脚本钩子**：`mitmdump -s add_header.py`，脚本里实现 `def request(flow)` / `def response(flow)`。

### 3.5 Frida + frida-tools + objection —— 运行时 hook

- **安装方式**：Windows 全局 pip｜**版本**：frida 17.23.3 / frida-tools 14.11.0 / objection 1.12.5｜**验证**：2026-10-12（`frida --version` 通过）
- **CLI**：
  - `frida-ps -U` —— 列 USB Android 设备进程
  - `frida -U -f com.xx.yy -l hook.js` —— spawn 并注入
  - `frida-trace -U -i "*encrypt*" -f com.xx.yy` —— 自动追踪加密函数调用
- **objection（免写脚本）**：
  - `objection -g com.xx.yy explore` 进入交互式会话
  - 常用命令：`android sslpinning disable`（绕证书锁定）、`android root disable`（绕 root 检测）、`memory list modules`、`android hooking watch class-method <类.方法>`
- **前置条件**：需要一台 root/越狱的测试机或可重打包的模拟器；frida-server 版本须与 pip 的 frida 主版本一致（17.x）。
- **典型工作流**：静态在 `libLockCore.so` 里逆 XOR 算法要一天 → Frida hook `encodeWithEncrypt` 入参出参直接看明文，几分钟。

### 3.6 OWASP ZAP —— Web 手动测试 GUI

- **路径**：`d:\gitfiles\rv\tools\zap\ZAP_2.17.0\`
- **启动（唯一正确方式）**：`& d:\gitfiles\rv\tools\zap-launcher.bat`（启动器注入便携 JRE，系统无需装 Java）
- **版本**：ZAP 2.17.0 + Temurin JRE 17.0.20.1｜**验证**：2026-10-12（`-cmd -version` 输出 2.17.0）
- **无头模式**（AI 友好）：`& d:\gitfiles\rv\tools\zap-launcher.bat -cmd -quickurl http://target/ -quickout out.html`；完整 API 见 `zap.bat -cmd -help`。ZAP 有 REST API（`-config api.key=...`），可被程序驱动。
- **定位**：mitmproxy 是管道和脚本，ZAP 是工作台（主动扫描、fuzz、会话管理、认证配置）。Burp 的开源平替。
- **注意**：ZAP 用户数据落在 `%USERPROFILE%\ZAP\`；JVM 内存默认 512m（`%USERPROFILE%\ZAP\.ZAP_JVM.properties` 可调）。

### 3.7 MobSF —— APK/IPA 自动化静态体检

- **运行方式**：WSL Docker 镜像 `opensecurity/mobile-security-framework-mobsf:latest`（约 2.4GB，已拉取）
- **启动命令**（持久化数据卷版）：
  ```bash
  wsl -d Ubuntu-24.04 -e bash -lc 'docker rm -f mobsf 2>/dev/null; docker run -d --name mobsf -p 8000:8000 -v mobsf_data:/home/mobsf/.MobSF opensecurity/mobile-security-framework-mobsf:latest'
  ```
  启动约 60-70 秒，就绪后 `http://localhost:8000` 打开（首启自动生成 API KEY，见容器日志 `docker logs mobsf`）。用完 `docker stop mobsf`。
- **验证**：2026-10-12（冒烟测试：容器 70 秒内 HTTP 302 响应）
- **用法**：Web UI 上传 APK → 自动出报告（组件导出、硬编码密钥、权限、证书信息），另有 REST API：`POST /api/v1/upload` + `POST /api/v1/scan`（带 `X-Mobsf-Api-Key` 头），适合被 AI 脚本化调用。
- **定位**：批量快筛。产出疑点清单后，值得深挖的再走 rea/Ghidra 精读。

### 3.8 Wireshark —— 协议分析 / 抓包

- **路径**：`C:\Program Files\Wireshark\`（Wireshark.exe GUI；**tshark.exe** 命令行、dumpcap.exe 抓包引擎——AI 优先用 tshark）
- **版本**：4.6.8 + Npcap 1.89｜**验证**：2026-10-12（`tshark --version` + `dumpcap -D` 实测列出 8 个网卡，含 WLAN/以太网/loopback）
- **tshark 常用**（AI 友好，无 GUI）：
  - `tshark -r file.pcap` —— 读包
  - `tshark -r file.pcap -Y "http.request" -T fields -e url` —— 过滤+提字段
  - `tshark -r file.btsnoop -Y "bthci_cmd"` —— BLE HCI 日志分析（Android 导出的蓝牙 snoop log）
  - 实时抓包（Npcap 装好后）：`tshark -i <iface> -w out.pcap`
- **BLE 工作流**：Android 开发者选项 → 开发者选项 → 打开"蓝牙 HCI 信息收集日志" → 复现配对/通信 → `adb bugreport` 导出里的 `btsnoop_hci.log` → tshark/Wireshark 分析 GATT 协议。

### 3.9 binwalk v3 —— 固件/镜像解包

- **路径**：WSL `/home/jerry_hu/.cargo/bin/binwalk`（历史已装，v3）
- **用法**：`wsl -d Ubuntu-24.04 -e bash -lc 'binwalk --run-as=root ... ` 不行——sudo 需密码；**v3 默认不支持 `-e` 自动提取**，用 `binwalk -B <file>` 列签名、`binwalk --dd` 提取。若需 v2 语法（`-e`），`pip install --user binwalk` 另装 v2（需 sudo 提取时人工配合密码）。
- **典型工作流**：`binwalk -B firmware.bin` 列出嵌入的文件系统 → 提取 squashfs/cramfs → 解出的 busybox/服务端二进制走 Ghidra。

### 3.10 已有 rea 管线（历史资产，勿重复造轮子）

成型的静态分析管线，全部在 WSL 内运行。2026-10-12 整理后分两层（原 BES DLL 专属 4 个脚本已随项目废弃删除）：

**通用（`scripts\rea\`，吃 argv 参数，任何项目可用）**：

| 脚本 | 用途 |
|---|---|
| `_rea_extract.py` | 提取 rea function JSON 里的反编译结果/pseudocode/签名 |
| `_rea_extract2.py` | 提取 rea function JSON 的 normalized_result 概览（callers/callees/pseudocode） |

**项目专属（`projects\water_elec\scripts\`，内部路径已指向项目目录）**：

| 脚本 | 用途 |
|---|---|
| `_rea_dex.sh` | jadx provider 配好后：APK 包检查 + 按 SCAF 搜锁 SDK 类 |
| `_rea_lockcore.sh` | 反编译 `libLockCore.so` 核心 JNI 函数（设 `GHIDRA_INSTALL_DIR`） |
| `_rea_dump_keytable.sh` | dump XOR 密钥表 |
| `_rea_refs.sh` | CodecUtils 引用追踪 |
| `_apk_urls.sh` | 从 APK strings 提取业务服务器 URL（自带常见 SDK 域名排除） |

### 3.11 ARTEX —— 服务端动态验证（历史资产）

- **部署**：WSL `/home/jerry_hu/artex`，Docker Compose 起（`artex-artex-1` + `artex-postgres-1` 容器），Web UI `http://localhost:8787`
- **LLM**：DeepSeek（用户已在 UI 配置 API key）
- **API 直通脚本**（绕过 UI，AI 可直接调用，均在 WSL 内 `python3 /mnt/d/gitfiles/rv/...` 执行）：
  - `scripts\artex\_artex_status.py` —— **通用**：任务状态/frontier/intents/findings 查询（改脚本内 `TID` 切换任务）
  - `projects\water_elec\scripts\_artex_create_task.py` —— **water_elec 专属**（cnyiot 三域 + 四项验证 GOAL 写死）；新项目建任务时复制它，改 `DOMAINS`/`NAME`/`GOAL` 三处
  - `projects\water_elec\scripts\_artex_report.py` / `_artex_concl.py` —— task1 报告/结论导出器（输出路径已指向项目目录）
- **鉴权**：JWT HS256，签名密钥在容器 `/app/jwt.key`（脚本已内置读取逻辑）
- **已产出**：`projects\water_elec\artex_report_task1.md`（水电系统四项验证 + 2 个实锤漏洞：`Method=ss` 短信验证码绕过、`imgyzm` 图形验证码绕过）、`projects\water_elec\artex_concl_task1.txt`

---

## 4. 标准工作流（端到端）

```
新目标进入（先复制 projects\_template\ 建项目文件夹，所有产物放里面）
  │
  ├─ 是 Windows 程序？ → diec.exe 查壳 ──┬─ .NET → dnSpy 反编译 → 疑点
  │                                     └─ 原生 → Ghidra 静态 + x64dbg 动态 → 疑点
  ├─ 是 APK？ → MobSF 快筛 → rea/jadx/Ghidra 精读 → Frida hook 运行时 → 疑点
  ├─ 是网站？ → ZAP/mitmproxy 观察接口 → 疑点
  ├─ 是 BLE 设备？ → HCI snoop log → Wireshark 解协议 → 疑点
  └─ 是固件？ → binwalk 解包 → 走 exe/dll 分支
        │
        ▼
     疑点清单（复制 projects\_template\claims-template.md 起步；
                 完整样例：projects\water_elec\apk-five-claims.md）
        │
        ▼
  有网络接口的疑点 → ARTEX 验证（参照 projects\water_elec\scripts\_artex_create_task.py
  改 DOMAINS/GOAL，任务描述里引用静态证据
  和 mitmproxy 抓到的真实请求样本，硬约束：测试账号、禁写生产、限授权域）
        │
        ▼
  实锤漏洞 → artex_report → nuclei 模板固化（待办，见 §6）→ 修复复验
```

---

## 5. 已知坑（下个 AI 少踩）

1. **Invoke-WebRequest 走代理下大文件会静默卡死**（本次 ZAP 350MB 卡在 12MB 和 160MB 各一次，无报错无超时）。**大文件一律用 `curl.exe -x http://127.0.0.1:7897 -L -C -`**（-C - 断点续传），并配 `--retry 5`。
2. **PowerShell 调 WSL bash 传参**：bash 脚本里的 `$var` 会被 PowerShell 预解析报错。**外层一律用单引号**包裹整条 bash -lc 命令（单引号内 $ 原样传递给 bash）。
3. **WSL sudo 需要密码** → 别用 apt 装东西，改用 pip --user / cargo / docker。
4. **GitHub API**（`api.github.com/repos/<o>/<r>/releases/latest`）查最新版下载地址很方便，无 token 限 60 次/时，走代理可用。
5. **MobSF 首次启动要 60-70 秒**（初始化数据库），冒烟别用 25 秒的等待窗口；健康判据是任意 HTTP 状态码（302 也算活）。
6. **ZAP 必须用 `zap-launcher.bat` 启动**：跨平台版 zap.bat 以 CWD 找 jar，直接用绝对路径调用会报 "Unable to access jarfile"。
7. **binwalk 是 cargo 版 v3**，没有 v2 的 `-e`；别照网上 v2 教程抄命令。
8. **同一文件的多处修改严禁并行 Edit**：并发写会互相覆盖（后写入的旧快照会吃掉先完成的编辑，本次 §1/§3.3/§3.10/§4/§7 五处曾因此被回滚重修）。同一文件的多处修改必须逐条串行执行。

---

## 6. 未装项与原因（诚实清单）

| 工具 | 状态 | 原因 / 补装方式 |
|---|---|---|
| **Bettercap / GATTacker** | ⛔ 未装 | WSL 无蓝牙硬件直通；需要真 Linux（树莓派等）环境才有意义。需要时：树莓派上 `apt install bettercap` 或源码装 |
| **nRF Sniffer** | ⛔ 未装 | 需要硬件（约 ¥300 的 nRF54/Sniffer dongle）。软件（Wireshark 插件）开源，有硬件后见 Nordic 官方仓库 |
| **nuclei** | ⛔ 未装 | 漏洞固化用。补装很简单：Windows 二进制从 `projectdiscovery/nuclei` releases 下载解压即用，或 `go install`。**建议在拿到漏洞修复复验需求时装** |
| **DefectDojo** | ⛔ 未装 | 漏洞生命周期管理，两个漏洞的量级用不上，多项目后再说 |

---

## 7. 约束红线（每次操作前自查）

1. **只对授权资产操作**。新目标进入工作区前，先确认授权范围并写进疑点清单头部。
2. **ARTEX 任务必带硬约束**：不动真实账号、不写生产数据、限目标域清单（参考 `projects\water_elec\artex_report_task1.md` 任务描述的写法）。
3. 第三方域（支付/推送/锁云等）默认**禁区**，除非单独授权。
4. 抓包只抓**自己持有凭证**的会话；不碰他人流量。
5. 发现高危漏洞后的处置顺序：证据固化 → 通知责任方（参考 `projects\water_elec\artex_report_task1.md` 的厂商整改建议）→ 授权窗口内复验。不做无授权的"最后一环"验证。