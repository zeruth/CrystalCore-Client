"""Check that every SqPack index entry points at a well-formed file entry in its .dat.

    python tools/sqpack_verify.py <game dir>

For each sqpack/*/*.win32.index, reads the index's file entries (16 bytes: hash, packed
location) and checks the entry header each one points at: header size a multiple of 128,
type 1 (empty file), 2 (standard), 3 (model) or 4 (texture). Prints per-archive counts and the bad ones.
"""
import glob, os, struct, sys

root = sys.argv[1]
total_bad = 0
for idx in sorted(glob.glob(os.path.join(root, "sqpack", "*", "*.win32.index"))):
    data = open(idx, "rb").read()
    sq_size = struct.unpack_from("<I", data, 0x0C)[0]
    ih = sq_size
    files_off, files_size = struct.unpack_from("<II", data, ih + 8)
    base = idx[: -len(".index")]
    dats = {}
    good = bad = 0
    samples = []
    for p in range(files_off, files_off + files_size, 16):
        loc = struct.unpack_from("<I", data, p + 8)[0]
        dat_id = (loc >> 1) & 7
        offset = (loc & ~0xF) * 8
        f = dats.get(dat_id)
        if f is None:
            path = f"{base}.dat{dat_id}"
            f = dats[dat_id] = open(path, "rb") if os.path.exists(path) else False
        ok = False
        if f:
            f.seek(offset)
            h = f.read(8)
            if len(h) == 8:
                hsize, typ = struct.unpack("<II", h)
                ok = hsize % 128 == 0 and 0 < hsize <= 0x100000 and typ in (1, 2, 3, 4)
        if ok:
            good += 1
        else:
            bad += 1
            if len(samples) < 3:
                samples.append(f"dat{dat_id}@{offset:#x}")
    for f in dats.values():
        if f:
            f.close()
    total_bad += bad
    print(f"{os.path.basename(idx):<24} {good:>8} ok {bad:>6} bad {' '.join(samples)}")
print("ALL OK" if total_bad == 0 else f"{total_bad} bad entries")
