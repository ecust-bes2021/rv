#!/bin/bash
# 配置 jadx provider 后跑 dex 管线：包检查 + 搜 SCAF 锁 SDK 类
export REA_JADX_MCP_JAR=/home/jerry_hu/tools/jadx-headless-mcp-0.7.1-all.jar
cd /mnt/d/gitfiles/rv/projects/water_elec

echo "=== inspect-android-package ==="
rea inspect-android-package base.apk --format json > /tmp/rea_pkg.json 2>/tmp/rea_pkg_err.log
echo "exit=$? size=$(wc -c < /tmp/rea_pkg.json)"
tail -3 /tmp/rea_pkg_err.log

echo "=== search scaf ==="
rea search-android-classes water_elec/base.apk scaf --format json > /tmp/rea_scaf.json 2>/tmp/rea_scaf_err.log
echo "exit=$? size=$(wc -c < /tmp/rea_scaf.json)"
tail -3 /tmp/rea_scaf_err.log
echo SCRIPT_DONE