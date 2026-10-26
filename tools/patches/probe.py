"""Which game patches Square Enix's CDN still serves, found by name.

    python tools/patches/probe.py [FROM] [TO] [--parts N] [--revs N] [--repo 4e9a232b] [--jobs 8]

A HEAD request for each D<yyyy.mm.dd>.<pppp>.<rrrr>.patch from FROM to TO (default the retail
disc's 2013-06-29 to the 2017-06-06 rollup), parts 0..N-1 and revisions 0..N-1 (default 6 x 4).
The CDN answers 404 for a name it does not have; a hit's size and Last-Modified are kept.
Results go to archive/patches/probe-<repo>.json, merged with an earlier run's (a re-run fills in
what a timeout skipped).
"""
import argparse, json, time, urllib.error, urllib.request
from concurrent.futures import ThreadPoolExecutor
from datetime import date, timedelta
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("start", nargs="?", default="2013-06-29")
    ap.add_argument("end", nargs="?", default="2017-06-06")
    ap.add_argument("--parts", type=int, default=6)
    ap.add_argument("--revs", type=int, default=4)
    ap.add_argument("--repo", default="4e9a232b")
    ap.add_argument("--jobs", type=int, default=8)
    a = ap.parse_args()
    base = f"http://patch-dl.ffxiv.com/game/{a.repo}/"
    out = ROOT / "archive" / "patches" / f"probe-{a.repo}.json"
    known = json.loads(out.read_text()) if out.exists() else {"hits": {}, "probed": []}
    names = []
    d, end = date.fromisoformat(a.start), date.fromisoformat(a.end)
    while d <= end:
        names += [f"D{d:%Y.%m.%d}.{p:04d}.{r:04d}.patch" for p in range(a.parts) for r in range(a.revs)]
        d += timedelta(days=1)

    def head(n):
        for _ in range(4):
            try:
                req = urllib.request.Request(base + n, method="HEAD", headers={"User-Agent": "FFXIV PATCH CLIENT"})
                with urllib.request.urlopen(req, timeout=30) as r:
                    return n, {"size": int(r.headers.get("Content-Length", 0)),
                               "last_modified": r.headers.get("Last-Modified", "")}
            except urllib.error.HTTPError as e:
                if e.code in (403, 404):
                    return n, None
            except Exception:  # noqa: BLE001
                pass
            time.sleep(3)
        return n, "error"

    t0, errors = time.time(), []
    with ThreadPoolExecutor(a.jobs) as pool:
        for i, (n, r) in enumerate(pool.map(head, names)):
            if r == "error":
                errors.append(n)
            elif r:
                known["hits"][n] = r
                print(f"{n} {r['size']:,} {r['last_modified']}", flush=True)
            if i % 2000 == 1999:
                print(f"  {i + 1}/{len(names)} in {time.time() - t0:.0f}s", flush=True)
                out.parent.mkdir(parents=True, exist_ok=True)
                out.write_text(json.dumps(known, indent=1, sort_keys=True))
    known["probed"].append({"from": a.start, "to": a.end, "parts": a.parts, "revs": a.revs,
                            "errors": errors, "at": time.strftime("%Y-%m-%d %H:%M")})
    out.write_text(json.dumps(known, indent=1, sort_keys=True))
    print(f"{len(known['hits'])} patches known; {len(errors)} names unanswered (re-run to retry) -> {out}")


if __name__ == "__main__":
    main()
