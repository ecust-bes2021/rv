#!/usr/bin/env python3
# 查询任务 1 状态 + 探索前沿节点
import hmac, hashlib, base64, json, time, urllib.request, urllib.error

KEY = base64.b64decode("em5XQXhyMUo3eTdYYWpwWVhuWDJWdmNDVlIyTFpKT3M=")
def b64u(b): return base64.urlsafe_b64encode(b).rstrip(b"=").decode()
now = int(time.time())
h = b64u(json.dumps({"alg":"HS256","typ":"JWT"},separators=(",",":")).encode())
p = b64u(json.dumps({"sub":"ARTEX","iat":now,"exp":now+7*86400},separators=(",",":")).encode())
s = b64u(hmac.new(KEY, f"{h}.{p}".encode(), hashlib.sha256).digest())
TOKEN = f"{h}.{p}.{s}"

def api(method, path, body=None):
    req = urllib.request.Request("http://localhost:8787"+path, method=method,
        data=json.dumps(body).encode() if body is not None else None,
        headers={"Authorization": f"Bearer {TOKEN}", "Content-Type": "application/json"})
    try:
        with urllib.request.urlopen(req, timeout=30) as r:
            return r.status, json.loads(r.read() or b"null")
    except urllib.error.HTTPError as e:
        try: return e.code, json.loads(e.read() or b"null")
        except Exception: return e.code, None

TID = "1"
st, t = api("GET", f"/api/tasks/{TID}")
print("== task ==")
print(json.dumps({k: t.get(k) for k in ("id","name","status","paused","progress") if isinstance(t, dict) and k in t}, ensure_ascii=False))

st, f = api("GET", f"/api/exploration/frontier?task={TID}")
nodes = f if isinstance(f, list) else (f or {}).get("frontier", []) if isinstance(f, dict) else []
print(f"== frontier nodes: {len(nodes) if isinstance(nodes, list) else '?'} ==")
if isinstance(nodes, list):
    for n in nodes[:12]:
        if isinstance(n, dict):
            print(" -", json.dumps({k: n.get(k) for k in ("id","title","type","url","status","summary") if k in n}, ensure_ascii=False)[:240])

st, its = api("GET", f"/api/exploration/intents?task={TID}")
intents = its if isinstance(its, list) else []
print(f"== intents: {len(intents)} ==")
for n in intents[:6]:
    if isinstance(n, dict):
        print(" -", json.dumps(n, ensure_ascii=False)[:400])

st, g = api("GET", f"/api/exploration/graph?task={TID}")
if isinstance(g, dict):
    print(f"== graph: nodes={len(g.get('nodes', []))} edges={len(g.get('edges', []))} ==")

st, fnd = api("GET", f"/api/exploration/findings?task={TID}")
fnd = fnd if isinstance(fnd, list) else []
print(f"== findings: {len(fnd)} ==")
for f in fnd[:5]:
    if isinstance(f, dict):
        print(" -", json.dumps(f, ensure_ascii=False)[:500])