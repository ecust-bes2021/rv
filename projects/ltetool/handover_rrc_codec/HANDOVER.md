# TTLOG RRC 解码链路交接说明

> 交接日期：2026-10-29
> 来源仓库：`d:\gitdir\ttlog-tool\ttcode`（模块 `ptas\code\PtasCdc\RrcCodec`）--在另外一台电脑
> 交接目的：供后续分析/迁移使用，理解现有 LTE RRC 解码链路，评估 R14 支持方案

---

## 1. 任务背景

TTLOG 是日志分析工具，需将 LTE RRC 二进制信令解码为可读文本。当前链路基于 2013 年生成的控制表（对应旧版 3GPP 规范），现需新增 **R14（Release 14，3GPP TS 36.331）** 支持，因此需要厘清：

1. 现有解码链路的构成与依赖；
2. 可行的 R14 支持路线。

## 2. 现有解码链路

```
.asn 定义 --(OSS ASN-1Step v7.0 编译)--> errc_asn1.c 控制表
          --(与 soeddefa.lib 静态链接)--> 编入 TT 工具
```

- **解码入口**：`Decode.c` 中 `ossDecode(&g_stOssWrld, ...)` / `ossPrintPDU(...)`，使用全局 `ossGlobal` 世界结构；
- **编码规则**：非对齐 PER（编译选项 `-uper`）；
- **结构对齐**：`-Zp4`（Microsoft C 编译器 4 字节包）；
- **运行库**：SOED 空间优化编码/解码静态库（`soeddefa.lib`，/MT）；
- **生成代码编译选项**（见 `errc_asn1.c` 头部）：
  `-controlfile errc.c -headerfile errc.h -errorfile asn_error.txt -externalname errc -uper -root -autoencdec -compat nosharedtypes asn1dflt.ms.zp4 errc.asn`

## 3. 待决策路线

| 路线 | 内容 | 代价 | 优势 |
|---|---|---|---|
| **B. 迁移 ASN1C** | 改用开源 vlm/asn1c（LGPL），R14 输入从 ETSI TS 36.331 V14.x 提取；重写对接层（`ossDecode`/`ossPrintPDU` → `asn_DEF_xxx`/`aper_decode`） | 工作量（Decode.c/rrc.c 胶水层重写） | 开源工具链，链路自主可控 |
| **C. 协议栈出文本** | 协议栈侧提供解码后文本/结构化日志，TTLOG 只做展示 | 跨团队协调 | 可能完全不需要 ASN.1 工具链 |

注：团队已有 r14 的 ASN1C 生成代码，说明路线 B 已有部分基础。

**版本一致性提醒**：无论哪条路线，新 `.asn` 必须与协议栈实际使用的 R14 小版本一致，否则字段解读错位。优先向协议栈团队索取其原始 `.asn` 文件（`EUTRA-RRC-Definitions`、`EUTRA-UE-Variables` 两个模块）。

## 4. 交接材料清单（本目录）

```
handover_rrc_codec\
├── HANDOVER.md              本文档
├── 01_lib\
│   └── soeddefa.lib         OSS v7.0 SOED 运行库（630 KB）
├── 02_generated\
│   ├── errc_asn1.c          生成控制表（560 KB，头部含编译选项）
│   └── errc_asn1.h          生成头文件（896 KB）
├── 03_inc\                  OSS API 接口面（14 个头文件，共约 1.2 MB）
│   ├── asn1code.h           ossDecode/ossEncode/ossPrintPDU 原型
│   ├── ossdll.h             函数指针表 / ossGlobal 布局
│   ├── ossglobl.h           ossGlobal 世界结构
│   ├── ossber.h / ossper.h  BER/PER 编解码接口
│   ├── ossmmgmt.h           内存管理
│   ├── osstrace.h           跟踪
│   ├── iaapi.h              IAAPI（含 ossDecodeValueNotationOfPDU 等）
│   ├── leanfun.h / leandef.h / asn1hdr.h / asn1util.h / etype.h
├── 04_src\
│   ├── Decode.c             解码入口（ossDecode/ossPrintPDU 调用点 + g_stOssWrld）
│   ├── rrc.c                包含 errc_asn1.c 的聚合单元
│   └── rrccodec.c           空文件（0 KB，原仓库即如此，模块入口在别处）
└── 05_vcxproj\
    ├── errc_lte.vcxproj     LTE 解码工程（链接 soeddefa.lib、-Zp4 设置）
    └── rrc_lte.vcxproj
```

**原仓库中的其他副本**（内容相同，注意区分权威版本）：
- `ptas\code\lib_bank\soeddefa.lib`
- `ptas\code\DriverInstall\tools\tools\tools\sig_decoder\PtasCdc\RrcCodec\soeddefa.lib`（此目录下另有 `Rrc_ue\src\errc_asn1.c` 变体）

**未包含但可能需要的材料**：
- `errc.asn` 原始输入——仓库中未找到，需向协议栈团队索取 R14 版本。