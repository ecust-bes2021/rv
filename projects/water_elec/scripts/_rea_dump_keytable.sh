#!/bin/bash
# dump libLockCore.so 的 XOR key 表（Ghidra 0x100738 - imagebase 0x100000 = 文件偏移 0x738）
python3 - <<'PY'
data = open('/mnt/d/gitfiles/rv/projects/water_elec/extracted/lib/arm64-v8a/libLockCore.so','rb').read()
foff = 0x738
table = data[foff:foff+256]
print(f'key table @ file offset 0x{foff:x}, 256 bytes:')
for r in range(0, 256, 16):
    row = table[r:r+16]
    print(f'{r:3d}: ' + ' '.join(f'{b:02x}' for b in row))
PY