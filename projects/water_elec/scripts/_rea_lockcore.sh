#!/bin/bash
# 反编译 libLockCore.so 的核心函数
export GHIDRA_INSTALL_DIR=/home/jerry_hu/tools/ghidra_12.1.4_PUBLIC
cd /mnt/d/gitfiles/rv/projects/water_elec/extracted

FNS=(
  "Java_com_scaf_android_client_CodecUtils_encodeWithEncrypt"
  "Java_com_scaf_android_client_CodecUtils_decodeWithEncrypt"
  "Java_com_scaf_android_client_CodecUtils_crccompute"
)

for FN in "${FNS[@]}"; do
  OUT="/tmp/rea_lock_${FN}.json"
  if [ -s "$OUT" ]; then echo "SKIP $FN"; continue; fi
  rea decompile lib/arm64-v8a/libLockCore.so "$FN" --format json > "$OUT" 2>>/tmp/rea_lock_err.log
  echo "DONE $FN size=$(wc -c < "$OUT")"
done
echo ALL_DONE