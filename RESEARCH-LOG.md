# RESEARCH-LOG 外部项目研究索引

> **用途**：记录本工作区研究过的外部开源项目——是什么、为什么研究、结论、可复用资产。**每新研究一个外部项目，必须在此登记**；克隆体放 `projects\<项目名>\`。
> **与 REV-MATRIX.md 的分工**：REV-MATRIX 管"工具与能力路由"，本文件管"研究对象台账"。
> 最后更新：2026-10-12

## 索引

| 日期 | 项目 | 本地路径 | 一句话定位 | 产物 |
|---|---|---|---|---|
| 2026-10-12 | d2r-mobile | `projects\d2r-mobile-review\` | Switch 版暗黑2 → iOS 原生执行兼容层（NSO 改写 + 宿主 HLE + NVN→Metal） | `projects\d2r-mobile-review\lessons.md` |
| 2026-10-12 | cpa-workbuddy-plugin | `projects\cpa-workbuddy-plugin\` | CLIProxyAPI 的 Go 插件集：8 个 AI IDE 账号池 Provider，协议级逆向实战样本 | 见 §2 |

---

## 1. d2r-mobile（github.com/jhaizhou-ops/d2r-mobile）

- **动机**：验证"可参考它逆向 iOS app"的传言；提取可迁移的逆向方法论。
- **实际定位**：逆向对象是 **Switch 游戏二进制（NSO）**，iOS 只是移植落点。**不涉及** Mach-O/ObjC/脱壳/Frida 等 iOS app 本体逆向技术——那类需求走 REV-MATRIX §2 工具路由。
- **结论**：代码真实、技术路线成立——ARM64 原样执行 + 最小指令改写（x18/tpidr/svc/cntpct）+ 宿主 HLE（Horizon 系统调用/文件/线程/音频）+ NVN→Metal 图形层 + Unicorn 改写等价验证（带负对照）。
- **可复用经验**：18 条已按 通用/ARM64/Apple 分层整理，见 `projects\d2r-mobile-review\lessons.md`。其中「Unicorn 差分验算法理解」「计数跳板先测再用」两条可直接用于 water_elec。
- **合规**：该仓库自身合规纪律好（零游戏内容、只存接口事实记录）；参考其方法论无风险。

## 2. cpa-workbuddy-plugin（github.com/luode0320/cpa-workbuddy-plugin，fork 自 s1sunny/cpa-plugin）

- **动机**：协议级逆向 → 纯语言重实现的实战样本，与 water_elec 的 so 协议分析同类。
- **实际定位**：给 [CLIProxyAPI](https://github.com/router-for-me/CLIProxyAPI)（CPA，把 AI 账号封装成 OpenAI/Anthropic 兼容 API 的网关）写的 Go 原生插件集。8 个插件：workbuddy（腾讯 CodeBuddy CN+Global）、workbuddy-ai（国际版）、traework（字节 TRAE SOLO）、qoderwork（阿里 QoderWork CN）、qoder-ai（Qoder 国际版）、cursor（Cursor）、zcode（智谱 BigModel）、token-usage-tracker（用量看板）。公共能力：多账号池、积分生命周期、每日自动签到、429/5xx 阶梯退避与 40x 换号重试、统一调度、NDJSON 用量 feed。
- **值得后续深挖的逆向点**（文件已在本地）：
  - **阿里安全盾 UMID 设备指纹协议**纯 Go 实现：`qoder-ai\umid.go` / `umid_codec.go` / `umid_crypto.go`，多账号虚拟硬件隔离
  - **COSY 签名复刻**（RSA 包裹 AES 会话密钥 + MD5 请求签名）：`qoderwork\cosy_session.go` / `sign.go`；**QoderEncoding**（自定义 Base64 字母表 + 三段重排）：`qoderwork\encoding.go` / `body.go`
  - **TRAE SOLO 客户端复刻**：PKCE S256 + 16 位设备指纹免 IDE 浏览器授权 `traework\browserlogin.go` / `login.go`；9074 风控自动轮换设备号 `traework\checkin_retry.go`；IDE `storage.json` 凭据解析 `traework\import.go`
  - **ZCode 桌面客户端指纹模拟**：`zcode\internal\mimic\fingerprint.go`
  - **Cursor Connect-RPC 协议转译**、会话 Token 导入：`cursor\`
- **风险提示**：设备号轮换、指纹伪装、批量签到属绕过厂商风控（违反 ToS 的灰产玩法）；只做技术参考，勿直接运营。
- **本地克隆说明**：`--depth 1 --filter=blob:none` + sparse-checkout 排除 `release-assets\`（百余 MB 编译产物 zip）。补历史：`git fetch --unshallow`；要编译产物：`git sparse-checkout disable` 后 checkout（注意体积）。

---

## 附：分析型项目（非外部研究，不属本索引范畴）

- `projects\water_elec\` —— 水电租赁 APK 分析（本区自有任务；claims + ARTEX 动态验证流程的样例）。