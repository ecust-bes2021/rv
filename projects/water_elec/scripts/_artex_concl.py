#!/usr/bin/env python3
# 拉取任务1所有意图完整 payload + facts（四项结论）
import hmac, hashlib, base64, json, time, urllib.request, urllib.error

KEY = base64.b64decode("em5XQXhyMUo3eTdYYWpwWVhuWDJWdmNDVlIyTFpKT3M=")
def b64u(b): return base64.urlsafe_b64encode(b).rstrip(b"=").decode()
now = int(time.time())
h = b64u(json.dumps({"alg":"HS256","typ":"JWT"},separators=(",",":")).encode())
p = b64u(json.dumps({"sub":"ARTEX","iat":now,"exp":now+7*86400},separators=(",",":")).encode())
s = b64u(hmac.new(KEY, f"{h}.{p}".encode(), hashlib.sha256).digest())
TOKEN = f"{h}.{p}.{s}"

def api(path):
    req = urllib.request.Request("http://localhost:8787"+path,
        headers={"Authorization": f"Bearer {TOKEN}"})
    try:
        with urllib.request.urlopen(req, timeout=30) as r:
            return json.loads(r.read() or b"null")
    except urllib.error.HTTPError as e:
        try: return json.loads(e.read() or b"null")
        except Exception: return None

TID = "1"
g = api(f"/api/exploration/graph?task={TID}") or {}
nodes = g.get("nodes", [])
print(f"graph nodes={len(nodes)}")
from collections import Counter
print("types:", Counter(n.get("type") for n in nodes if isinstance(n, dict)))
# 输出 fact 类节点的完整 payload（四项结论所在）
facts = []
for n in nodes:
    if not isinstance(n, dict): continue
    if n.get("type") in ("fact", "finding", "note", "conclusion", "activity"):
        pl = n.get("payload")
        if isinstance(pl, str):
            try: pl = json.loads(pl)
            except Exception: pass
        facts.append((n.get("type"), n.get("id"), pl))
for t, nid, pl in facts:
    print(f"\n===== {t} #{nid} =====")
    if isinstance(pl, dict):
        for k, v in pl.items():
            print(f"  {k}: {str(v)[:2000]}")
    else:
        print("  ", str(pl)[:2000])