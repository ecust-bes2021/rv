#!/usr/bin/env python3
"""提取 REA function JSON 里的反编译结果"""
import json, sys

path = sys.argv[1]
d = json.load(open(path))

def find_keys(o, keys, out):
    if isinstance(o, dict):
        for k, v in o.items():
            if k in keys:
                out.append((k, v))
            else:
                find_keys(v, keys, out)
    elif isinstance(o, list):
        for i in o:
            find_keys(i, keys, out)

out = []
find_keys(d, {'decompiled', 'pseudocode', 'decompilation', 'signature', 'prototype',
              'summary', 'name', 'display_name', 'calling_convention', 'entry'}, out)
for k, v in out:
    s = v if isinstance(v, str) else json.dumps(v, ensure_ascii=False, indent=1)
    if len(s) > 4000:
        s = s[:4000] + '\n...[truncated]'
    print(f'--- {k} ---')
    print(s)

# 也看看顶层结构键
print('\n=== TOP KEYS ===')
if isinstance(d, dict):
    print(list(d.keys()))
    for key in d:
        v = d[key]
        if isinstance(v, dict):
            print(f'{key}: {list(v.keys())[:15]}')