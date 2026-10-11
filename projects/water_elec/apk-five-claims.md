本地 APK 五项疑似问题的静态审查

审查对象：[base.apk](D:/gitfiles/rv/projects/water_elec/base.apk)，包名 `com.hetfield.william.hetfield`，版本 6.0.2。APK SHA-256：`8ac00460259abb7a619f0bb3acdfa00ac621273854011ed03501064fc8e9cc6c`。

本轮检查本地 APK、与该 APK 哈希一致的既有 REA 分析产物，以及新生成的客户端类/方法静态结果。仅审查用户给出的五项疑似问题。未执行 APK、联系业务接口、提交支付通知、修改账户/费率或操作电表。没有服务端、管理后台或隔离测试设备，因此不属于运行时验证或完整安全扫描。密钥值、业务地址和编解码表内容均未保留在报告中。

当前 REA MCP 进程未配置 JADX JAR；新静态方法分析通过已安装的 WSL REA CLI 执行，仅为分析进程设置 REA_JADX_MCP_JAR，没有修改 MCP 配置或工作区代码。没有 Git 修订可记录；已用 APK 哈希固定审查输入。安全策略解析器未返回适用 SECURITY.md，此项作为证据缺口保留。

| 输入项 | 静态结果 | 当前判定 | 待审优先级 |
|---|---|---|---|
| 1. 客户端凭据 | Manifest 存在明文 appkey/appsecret；用途与移动推送一致。已检查的 Adapay 资产是字典。 | needs_review：业务鉴权绕过未证实 | 1 |
| 2. 改价接口鉴权 | 客户端 MeterInfo 有 Price、PriceID、PriceName 字段及访问器。 | needs_review：服务端角色与对象授权未知 | 3 |
| 3. 支付金额与回调 | 支付页面由 WebView 加载，SDK 回调设置客户端成功状态。 | needs_review：服务端金额权威来源与验签未知 | 2 |
| 4. 电表余额与管理员密钥 | 匹配 native 分析中有 XOR 和全局表引用。 | needs_review：密钥泄露和未授权余额写入未证实 | 4 |
| 5. 管理后台 | 未提供后台代码、配置或授权测试环境。 | needs_review：缺少证据 | 5 |

五项均未形成完整的“输入 → 控制失效 → 越过权限边界 → 实际影响”静态证据链。对具体已观察事实的信心高；对漏洞成立的信心低。待审优先级依据当前证据质量排列，不能用作已验证漏洞严重程度。没有足够正面反证将任何一项认定为安全。

**1. 客户端凭据**

匹配 APK 的完整解码 Manifest 中，`com.alibaba.app.appkey` 为 8 字符、`com.alibaba.app.appsecret` 为 32 字符的非空字面量。能确认它们可由 APK 读取。客户端 `MyApplication.registerPush` 调用 `CloudPushService.register`，与阿里移动推送用途一致。

[阿里移动推送官方配置文档](https://help.aliyun.com/zh/document_detail/434660.html)描述了这两个 Manifest 字段，并提醒反编译获取配置的风险。因此，名称为 appsecret 及其可读取性，尚不足以证明它能授权业务 API、改价或支付操作。还缺少 EMAS 权限配置、密钥有效性、是否复用到业务鉴权的证据。

`assets/adapay_addr.json` 是 34 项地区结构，包含 value/title/cities 字段。`assets/adapay_bank.json` 是 5260 项银行代码到字符串的映射。这两份文件没有证明商户私钥泄露。选定 DEX/文本资产的 PEM 私钥标记检查没有命中，不能据此排除其他编码、存储位置或运行时下发的私钥。

最小补充证据：维护方核对 EMAS 凭据权限，以及业务 API 的身份认证是否独立于 SDK 配置；核对 Adapay 配置来源和服务端私钥保管方式。

**2. 改价接口鉴权**

`com.hetfield.william.entity.MeterInfo` 中观察到 Price、PriceID、PriceName、UserID 等字段。客户端模型可以读取/设置价格，不能说明服务端接受任意值或缺少授权检查。服务端写入路径尚不可见。

最小补充证据：改价处理器、认证中间件、管理员角色及租户/房间授权代码。应确认每次敏感写入都在服务端约束操作者和目标资源。

**3. 支付金额与回调**

`RechargeRmbActivity.initView` 启用 WebView JavaScript，从 Intent 获取 URL 并加载；远端支付页面未包含在当前可检查实现中。`onActivityResult` 接收成功结果后返回并结束页面。`WXPayEntryActivity.onResp` 在 SDK 成功响应时设置客户端成功状态并结束页面。

这些是客户端流程证据，不能确定最终余额由客户端状态、服务端查单还是支付平台通知驱动。支付 SDK 到 App 的回调，也不能替代支付平台到服务端通知的验签证据。客户端成功状态的全部后续消费者未完整追踪。

最小补充证据：订单创建、费率与金额/币种计算、服务端支付回调验签、订单绑定、幂等入账及对账代码。当前没有证据支持“伪造回调即可入账”的结论。

**4. 电表余额与管理员密钥**

已验证既有 native 分析的目标 SHA-256 与 APK 内 arm64-v8a/libLockCore.so 成员一致。JNI encodeWithEncrypt 的反编译结果中观察到 XOR 运算和固定全局表引用。这只说明该函数的编解码行为，不能覆盖整条通信路径或设备授权步骤。

Manifest 声明 usesCleartextTraffic=true，并引用 network_security_config；本轮没有解析对应配置或验证实际网络连接，不能据此认定管理员密钥经明文传输。

最小补充证据：管理员密钥的来源、分发和存储；余额命令的调用链；设备端命令认证与重放防护。固定编解码表、设备管理员密钥和服务端授权是不同证据点。目前未证明管理员密钥已泄露或余额写入权限可被绕过。

**5. 管理后台**

APK 无法提供后台用户密码、身份系统配置、多因素认证策略或会话生命周期。当前没有后台测试入口和测试账号证据，不能确认弱口令、缺少多因素认证或会话不过期。

最小补充证据：后台认证配置、会话有效期与撤销实现，以及隔离测试环境中的测试管理员账号。

**证据索引**

- 完整解码 Manifest：ev_bc834d9e0188747650a9e03c951094841577139df93772ced784c592f944fe42。
- MeterInfo：ev_99879fb9686b27a205514845e1766c80922db42347073c8abcedcb62beaac028。
- registerPush：ev_ef283d86a800fd05a1af5f723f2f91f85baee8e54301654849a6fe17796b01ff。
- RechargeRmbActivity.initView：ev_15f9c779a346bf367450500a67a1ace698d9a52cb4e9bd7a93be5f1becf76433。
- RechargeRmbActivity.onActivityResult：ev_deddd81856faae5cdcc96665fde326d0218e64c6a7c511016832c922da60702d。
- WXPayEntryActivity.onResp：ev_9a82a91c27667b342f35007bdda1281b178090d72f3e5e51b3488abb81d4db59。
- Native encodeWithEncrypt：ev_69c6d985e962acf2dd796fe043394e9c3a9f6f6983404ef64429691310975101。

客户端反编译方法的源码行号和精确 DEX 指令位置由当前 provider 标记为未知；这些证据 ID 及 APK 摘要用于溯源，不应解释为服务端运行时验证结果。