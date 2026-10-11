#!/bin/bash
# 从 APK 提取业务服务器地址（用户已授权，报告脱敏不管）
APK=/mnt/d/gitfiles/rv/projects/water_elec/base.apk
TMP=/tmp/apk_url_extract
rm -rf $TMP && mkdir -p $TMP
cd $TMP

echo "=== APK 内文件里的 http(s) URL（strings 扫 dex+资源） ==="
unzip -o -q $APK -d apk 2>/dev/null
# 从 dex 提取 URL 字符串
strings apk/classes.dex apk/classes2.dex 2>/dev/null | grep -oE 'https?://[a-zA-Z0-9._:/-]+' | sort | uniq -c | sort -rn | head -30
echo "=== res/values 字符串里的 URL ==="
grep -rhoE 'https?://[a-zA-Z0-9._:/-]+' apk/resources.arsc 2>/dev/null | sort -u | head -10
echo "=== assets 配置文件 ==="
ls apk/assets/ 2>/dev/null | head -20
echo "=== 全 APK 广播域名（去常见 SDK 域名） ==="
strings apk/classes.dex apk/classes2.dex 2>/dev/null | grep -oE 'https?://[a-zA-Z0-9._:/-]+' | grep -viE 'schemas.android|w3.org|xmlpull|example|ttlock|github|apache|slf4j|google|aliyun|alibaba|adapay|huifu|qq.com|wechat|weixin|umeng' | sort | uniq -c | sort -rn | head -20
echo SCRIPT_DONE