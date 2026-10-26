"""calls_of.py TRACE ADDR [--first N] [--last N] [--distinct K]: a function's calls in a trace (24-byte
records: thread, address, four argument words), the first or last N, or the distinct values of
argument word K with their counts."""
import collections, struct, sys
from pathlib import Path

raw = Path(sys.argv[1]).read_bytes()
want = int(sys.argv[2], 16)
opt = lambda k, d: int(sys.argv[sys.argv.index(k) + 1]) if k in sys.argv else d
hits = []
for i in range(len(raw) // 24):
    tid, addr, *a = struct.unpack_from("<6I", raw, i * 24)
    if addr == want:
        hits.append((i, tid, a))
print(f"{len(hits)} calls of {want:x} in {len(raw) // 24} records")
if "--distinct" in sys.argv:
    k = opt("--distinct", 0)
    for v, n in collections.Counter(h[2][k] for h in hits).most_common(20):
        print(f"  a{k} {v:x}: {n}")
for i, tid, a in hits[:opt("--first", 0)]:
    print(f"  #{i} tid {tid} " + " ".join(f"{x:x}" for x in a))
for i, tid, a in hits[len(hits) - opt("--last", 0):] if opt("--last", 0) else []:
    print(f"  #{i} tid {tid} " + " ".join(f"{x:x}" for x in a))
