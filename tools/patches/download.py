"""Download every patch in patches/game.json into archive/patches/game, in version order.

    python tools/patches/download.py [--rollups] [--only VERSION...]

Each file from its first URL that answers (Square Enix's CDN first, archive.org next), resumed
where a partial download stopped (HTTP Range), then checked: its size, its SHA-1 against the
list's where the list has one, and every ZiPatch chunk's CRC32. The SHA-1 is written beside it
(<file>.sha1) for tools/patches/patchlist.py; a file that fails a check is kept as <file>.bad.
A file every URL answers 404 for is taken off the list and recorded in patches/missing.json.
--rollups also fetches the H rollup parts (the 2017 and 2024 full installs).
"""
import argparse, hashlib, json, os, struct, sys, time, urllib.error, urllib.request, zlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
DEST = ROOT / "archive" / "patches" / "game"
UA = {"User-Agent": "FFXIV PATCH CLIENT"}


def fetch(url, path, size):
    """resume or start; returns True once the file is size bytes"""
    have = path.stat().st_size if path.exists() else 0
    if have == size:
        return True
    if have > size:
        path.unlink()
        have = 0
    hdr = dict(UA, **({"Range": f"bytes={have}-"} if have else {}))
    req = urllib.request.Request(url, headers=hdr)
    with urllib.request.urlopen(req, timeout=60) as r:
        if have and r.status != 206:
            have = 0                              # (no range support: from the start)
        t0, got = time.time(), 0
        with open(path, "ab" if have else "wb") as f:
            while True:
                buf = r.read(1 << 20)
                if not buf:
                    break
                f.write(buf)
                got += len(buf)
                if time.time() - t0 > 1:
                    done = have + got
                    sys.stdout.write(f"\r  {path.name} {done / 1e6:,.0f}/{size / 1e6:,.0f} MB "
                                     f"{got / (time.time() - t0) / 1e6:5.1f} MB/s   ")
                    sys.stdout.flush()
    print()
    return path.stat().st_size == size


def zipatch_ok(path):
    """every chunk's CRC32 (over its type and data) as the file says"""
    with open(path, "rb") as f:
        if f.read(12)[1:4] != b"ZIP":
            return "not a ZiPatch file"
        while True:
            head = f.read(8)
            if len(head) < 8:
                return "ends without EOF_"
            size, kind = struct.unpack(">I4s", head)
            crc = zlib.crc32(kind)
            left = size
            while left:
                buf = f.read(min(left, 1 << 20))
                if not buf:
                    return f"chunk {kind!r} cut short"
                crc = zlib.crc32(buf, crc)
                left -= len(buf)
            want = struct.unpack(">I", f.read(4))[0]
            if crc != want:
                return f"chunk {kind!r} CRC32 {crc:08x}, file says {want:08x}"
            if kind == b"EOF_":
                return None


def sha1_of(path):
    h = hashlib.sha1()
    with open(path, "rb") as f:
        for buf in iter(lambda: f.read(1 << 22), b""):
            h.update(buf)
    return h.hexdigest()


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rollups", action="store_true")
    ap.add_argument("--only", nargs="*")
    a = ap.parse_args()
    lst = json.loads((ROOT / "patches" / "game.json").read_text())
    todo = lst["patches"] + (lst["rollups"] if a.rollups else [])
    if a.only:
        todo = [e for e in todo if e["version"] in a.only or e["file"] in a.only]
    DEST.mkdir(parents=True, exist_ok=True)
    total = sum(e.get("size", 0) for e in todo)
    print(f"{len(todo)} files, {total / 1e9:.1f} GB -> {DEST}")
    failed, missing = [], []
    for i, e in enumerate(todo, 1):
        path = DEST / e["file"]
        mark = DEST / (e["file"] + ".sha1")
        if mark.exists() and path.exists() and path.stat().st_size == e.get("size"):
            continue
        print(f"[{i}/{len(todo)}] {e['file']} ({e.get('size', 0) / 1e6:,.0f} MB)")
        ok, gone = False, 0
        for url in e["urls"]:
            for attempt in range(5):
                try:
                    ok = fetch(url, path, e["size"])
                    break
                except urllib.error.HTTPError as ex:
                    if ex.code != 404:
                        raise
                    print(f"  {url}: not there")
                    gone += 1
                    break
                except (urllib.error.URLError, OSError, TimeoutError) as ex:
                    print(f"\n  {url}: {ex}; retrying")
                    time.sleep(5 * (attempt + 1))
            if ok:
                break
        if not ok and gone == len(e["urls"]):
            missing.append(e["file"])
            continue
        if not ok:
            failed.append(e["file"])
            continue
        why = zipatch_ok(path)
        digest = sha1_of(path)
        if why is None and e.get("sha1") and e["sha1"] != digest:
            why = f"SHA-1 {digest}, the list says {e['sha1']}"
        if why:
            print(f"  BAD: {why}")
            os.replace(path, str(path) + ".bad")
            failed.append(e["file"])
            continue
        mark.write_text(f"{digest}  {e['file']}\n")
        print(f"  ok {digest}")
    if missing:
        # (on no source any more: off the list, and kept off it in patches/missing.json, which
        # tools/patches/patchlist.py reads)
        gone_path = ROOT / "patches" / "missing.json"
        known = json.loads(gone_path.read_text()) if gone_path.exists() else []
        gone_path.write_text(json.dumps(sorted(set(known) | set(missing)), indent=1) + "\n")
        drop = set(missing)
        lst["patches"] = [e for e in lst["patches"] if e["file"] not in drop]
        lst["rollups"] = [e for e in lst["rollups"] if e["file"] not in drop]
        (ROOT / "patches" / "game.json").write_text(json.dumps(lst, indent=1))
        print(f"{len(missing)} on no source, taken off the list: {missing}")
    print(f"done; {len(failed)} failed: {failed}" if failed else "done, all verified")


if __name__ == "__main__":
    main()
