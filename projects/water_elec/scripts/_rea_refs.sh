#!/bin/bash
# 追踪 CodecUtils 的调用方（开锁流程类）
export REA_JADX_MCP_JAR=/home/jerry_hu/tools/jadx-headless-mcp-0.7.1-all.jar
cd /mnt/d/gitfiles/rv/projects/water_elec

rea trace-android-references base.apk com.scaf.android.client.CodecUtils --format json > /tmp/rea_refs.json 2>/tmp/rea_refs_err.log
echo "exit=$? size=$(wc -c < /tmp/rea_refs.json)"
python3 - <<'PY'
import json
d = json.load(open('/tmp/rea_refs.json'))
nr = d.get('normalized_result', d)
if isinstance(nr, dict):
    print('keys:', list(nr.keys()))
    print(json.dumps(nr, ensure_ascii=False, indent=1)[:3000])
PY