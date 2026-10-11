#!/usr/bin/env python3
"""提取 REA function JSON 的 normalized_result 概览"""
import json, sys

d = json.load(open(sys.argv[1]))
nr = d.get('normalized_result') or {}

print('=== procedure ===')
print(json.dumps(nr.get('procedure'), ensure_ascii=False, indent=1)[:600])

for key in ('callers', 'callees', 'referenced_strings', 'referenced_names', 'comments', 'native_api'):
    v = nr.get(key)
    if v:
        print(f'\n=== {key} ===')
        print(json.dumps(v, ensure_ascii=False, indent=1)[:1500])

pc = nr.get('pseudocode')
if isinstance(pc, dict):
    pc = pc.get('text') or pc.get('value') or json.dumps(pc)
print('\n=== pseudocode ===')
print(str(pc)[:5000])