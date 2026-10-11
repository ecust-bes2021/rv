#!/usr/bin/env python3
# 拉取任务1最终报告 + findings 详情 + 各意图结论
import hmac, hashlib, base64, json, time, urllib.request, urllib.error

KEY = base64.b64decode("em5XQXhyMUo3eTdYYWpwWVhuWDJWdmNDVlIyTFpKT3M=")
def b64u(b): return base64.urlsafe_b64encode(b).rstrip(b"=").decode()
now = int(time.time())
h = b64u(json.dumps({"alg":"HS256","typ":"JWT"},separators=(",",":")).encode())
p = b64u(json.dumps({"sub":"ARTEX","iat":now,"exp":now+7*86400},separators=(",",":")).encode())
s = b64u(hmac.new(KEY, f"{h}.{p}".encode(), hashlib.sha256).digest())
TOKEN = f"{h}.{p}.{s}"

def api(method, path, body=None, raw=False):
    req = urllib.request.Request("http://localhost:8787"+path, method=method,
        data=json.dumps(body).encode() if body is not None else None,
        headers={"Authorization": f"Bearer {TOKEN}", "Content-Type": "application/json"})
    try:
        with urllib.request.urlopen(req, timeout=60) as r:
            data = r.read()
            return r.status, (data if raw else (json.loads(data or b"null")))
    except urllib.error.HTTPError as e:
        try: return e.code, json.loads(e.read() or b"null")
        except Exception: return e.code, None

TID = "1"
st, t = api("GET", f"/api/tasks/{TID}")
print("== TASK ==")
print(json.dumps(t, ensure_ascii=False)[:600])

print("\n== REPORT (markdown) ==")
st, rep = api("GET", f"/api/report?task={TID}", raw=True)
text = rep.decode("utf-8", "replace") if isinstance(rep, bytes) else str(rep)
print(f"(HTTP {st}, {len(text)} chars)")
open("/mnt/d/gitfiles/rv/projects/water_elec/artex_report_task1.md", "w", encoding="utf-8").write(text)
print(text[:4000])