"""runs.py [-n N] [--faults]: the port's boot attempts, build/pipeline/runs.jsonl (portrun.py writes a
line per run), one row each: when, the gen's commit (+ for changes beyond it), how long it lived,
how it ended, and how many different frames it drew. --faults: each faulting function's count, the
ones a run reached most."""
import argparse, collections, json
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
ap = argparse.ArgumentParser()
ap.add_argument("-n", type=int, default=20)
ap.add_argument("--faults", action="store_true")
a = ap.parse_args()
path = ROOT / "build" / "pipeline" / "runs.jsonl"
runs = [json.loads(l) for l in path.read_text(encoding="utf-8").splitlines() if l.strip()] if path.exists() else []
if a.faults:
    c = collections.Counter((r.get("fault") or "").split(" ")[0].split("+")[0] for r in runs if r.get("fault"))
    for f, n in c.most_common(a.n):
        print(f"{n:4d}  {f}")
else:
    for r in runs[-a.n:]:
        end = "alive" if r.get("alive") else (r.get("fault") or r.get("exit") or "?")
        tag = (r.get("commit") or "?") + ("+" if r.get("dirty_gen") else " ")
        watch = f"  watch {r['watch']}" if r.get("watch") else ""
        print(f"{r['when']}  {tag:9s} {r['secs']:4d}s  frames {r.get('frames', 0):2d}  {end[:70]}{watch}")
