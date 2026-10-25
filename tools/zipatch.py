"""Apply FFXIV ZiPatch files to a game folder, the way the launcher does.

    python tools/zipatch.py <game dir> <patch>... [--dry-run]

<game dir> is the install's `game` folder (the one holding ffxivgame.ver and sqpack/).
Patches are applied in the order given. After each one the version file is set to the
patch's name (D2013.08.09.0001.0000.patch -> 2013.08.09.0001.0000): the patch files carry
no version of their own, the launcher writes it from the patch list.

Chunks: FHDR, APLY, ADIR, DELD, SQPK, EOF_. SQPK commands: A (add data), D (delete data),
E (expand data), H (header), F (file: A add, R remove all, D delete, M make dir); T, X and
I carry only bookkeeping and are skipped.
"""
import os, struct, sys, zlib

BLOCK = 128


class Game:
    def __init__(self, root, dry):
        self.root = root
        self.dry = dry
        self.handles = {}
        self.stats = {}

    def _open(self, rel):
        f = self.handles.get(rel)
        if f is None:
            path = os.path.join(self.root, rel)
            os.makedirs(os.path.dirname(path), exist_ok=True)
            f = open(path, "r+b" if os.path.exists(path) else "w+b")
            self.handles[rel] = f
        return f

    def write(self, rel, offset, data):
        if self.dry:
            return
        f = self._open(rel)
        f.seek(offset)
        f.write(data)

    def wipe(self, rel, offset, length):
        while length > 0:
            n = min(length, 1 << 20)
            self.write(rel, offset, bytes(n))
            offset += n
            length -= n

    def truncate(self, rel):
        self.close(rel)
        if not self.dry:
            path = os.path.join(self.root, rel)
            os.makedirs(os.path.dirname(path), exist_ok=True)
            open(path, "wb").close()

    def delete(self, rel):
        self.close(rel)
        path = os.path.join(self.root, rel)
        if not self.dry and os.path.exists(path):
            os.remove(path)

    def close(self, rel=None):
        for k in ([rel] if rel else list(self.handles)):
            f = self.handles.pop(k, None)
            if f:
                f.close()

    def count(self, key):
        self.stats[key] = self.stats.get(key, 0) + 1


def expansion(sub_id):
    e = sub_id >> 8
    return "ffxiv" if e == 0 else f"ex{e}"


def dat_path(main, sub, file_id):
    return f"sqpack/{expansion(sub)}/{main:02x}{sub:04x}.win32.dat{file_id}"


def index_path(main, sub, file_id):
    return f"sqpack/{expansion(sub)}/{main:02x}{sub:04x}.win32.index{'' if file_id == 0 else file_id}"


def empty_block(game, rel, offset, blocks):
    # what the launcher leaves where data was removed: zeroed blocks with a free-block header
    game.wipe(rel, offset, blocks << 7)
    game.write(rel, offset, struct.pack("<IIIII", 1 << 7, 0, 0, blocks - 1, 0))


def read_blocks(body, p, end):
    """The compressed blocks of an F/A operation: 16-byte header, deflate (or raw) data,
    each padded to 128 bytes."""
    out = bytearray()
    while p < end:
        hsize, _, csize, dsize = struct.unpack_from("<IIII", body, p)
        if hsize != 16:
            raise ValueError(f"bad block header size {hsize}")
        raw = csize == 32000
        n = dsize if raw else csize
        chunk = body[p + 16: p + 16 + n]
        out += chunk if raw else zlib.decompress(chunk, -15)
        p += (16 + n + 127) & ~127
    return bytes(out)


def sqpk(game, body):
    cmd = chr(body[4])
    if cmd == "A":
        main, sub, fid, off, num, delete = struct.unpack_from(">HHIIII", body, 8)
        rel = dat_path(main, sub, fid)
        off, num, delete = off << 7, num << 7, delete << 7
        game.write(rel, off, body[28:28 + num])
        game.wipe(rel, off + num, delete)
    elif cmd in "DE":
        main, sub, fid, off, num = struct.unpack_from(">HHIII", body, 8)
        empty_block(game, dat_path(main, sub, fid), off << 7, num)
    elif cmd == "H":
        file_kind, header_kind = chr(body[5]), chr(body[6])
        main, sub, fid = struct.unpack_from(">HHI", body, 8)
        rel = dat_path(main, sub, fid) if file_kind == "D" else index_path(main, sub, fid)
        game.write(rel, 0 if header_kind == "V" else 1024, body[16:16 + 1024])
    elif cmd == "F":
        op = chr(body[5])
        foff, fsize, plen, exp = struct.unpack_from(">QQIH", body, 8)
        rel = body[32:32 + plen].rstrip(b"\0").decode("latin1").replace("\\", "/")
        if op == "A":
            if foff == 0:
                game.truncate(rel)
            game.write(rel, foff, read_blocks(body, 32 + plen, len(body)))
        elif op == "D":
            game.delete(rel)
        elif op == "M":
            if not game.dry:
                os.makedirs(os.path.join(game.root, rel), exist_ok=True)
        elif op == "R":
            name = "ffxiv" if exp == 0 else f"ex{exp}"
            for folder in (f"sqpack/{name}", f"movie/{name}"):
                d = os.path.join(game.root, folder)
                if os.path.isdir(d):
                    for fn in os.listdir(d):
                        if not fn.endswith(".var") and fn not in ("00000.bk2", "00001.bk2", "00002.bk2", "00003.bk2"):
                            game.delete(f"{folder}/{fn}")
        else:
            raise ValueError(f"unknown file op {op}")
        cmd += op
    elif cmd not in "TXI":
        raise ValueError(f"unknown SQPK command {cmd}")
    game.count("SQPK " + cmd)


def apply(game, path):
    with open(path, "rb") as f:
        if f.read(12) != b"\x91ZIPATCH\r\n\x1a\n":
            raise ValueError(f"{path}: not a ZiPatch file")
        while True:
            hdr = f.read(8)
            if len(hdr) < 8:
                raise ValueError(f"{path}: ended without EOF_")
            size, typ = struct.unpack(">I4s", hdr)
            body = f.read(size)
            crc = struct.unpack(">I", f.read(4))[0]
            if zlib.crc32(typ + body) != crc:
                raise ValueError(f"{path}: CRC mismatch in {typ} at {f.tell() - size - 12}")
            typ = typ.decode("latin1")
            game.count(typ)
            if typ == "SQPK":
                sqpk(game, body)
            elif typ == "ADIR":
                n = struct.unpack_from(">I", body)[0]
                if not game.dry:
                    os.makedirs(os.path.join(game.root, body[4:4 + n].decode("latin1")), exist_ok=True)
            elif typ == "DELD":
                n = struct.unpack_from(">I", body)[0]
                d = os.path.join(game.root, body[4:4 + n].decode("latin1"))
                if not game.dry and os.path.isdir(d) and not os.listdir(d):
                    os.rmdir(d)
            elif typ == "EOF_":
                break
            elif typ not in ("FHDR", "APLY", "APFS", "XXXX"):
                raise ValueError(f"{path}: unknown chunk {typ}")
    game.close()


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    dry = "--dry-run" in sys.argv
    root, patches = args[0], args[1:]
    for p in patches:
        game = Game(root, dry)
        apply(game, p)
        version = os.path.basename(p)[1:].rsplit(".patch", 1)[0]
        if not dry:
            with open(os.path.join(root, "ffxivgame.ver"), "w") as v:
                v.write(version)
        print(f"{os.path.basename(p)}: {dict(sorted(game.stats.items()))}" + (" (dry run)" if dry else f" -> {version}"))


if __name__ == "__main__":
    main()
