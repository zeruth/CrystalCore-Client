"""tail.py TRACE [N] [--thread K]: the last N calls (default 60) of a trace's thread K (default the
first, the main thread), named from build/facts/functions.json: what a run did last, before a crash
or an error box."""
import json, struct, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
names = {int(f["entry"], 16): f.get("name", "") for f in
         json.loads((ROOT / "build" / "facts" / "functions.json").read_text())["functions"]}
raw = Path(sys.argv[1]).read_bytes()
n = int(sys.argv[2]) if len(sys.argv) > 2 and sys.argv[2].isdigit() else 60
k = int(sys.argv[sys.argv.index("--thread") + 1]) if "--thread" in sys.argv else 0
order, rows = [], []
for i in range(len(raw) // 24):
    tid, addr, *a = struct.unpack_from("<6I", raw, i * 24)
    if tid not in order:
        order.append(tid)
    if order.index(tid) == k:
        rows.append((i, addr, a))
for i, addr, a in rows[-n:]:
    print(f"#{i:>9} {addr:7x} {names.get(addr, '?')[:44]:44} " + " ".join(f"{x:8x}" for x in a))
