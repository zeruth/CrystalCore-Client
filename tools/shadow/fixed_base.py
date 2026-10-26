"""fixed_base.py SRC DST: DST a copy of the executable SRC with its DYNAMICBASE flag cleared (the PE
optional header's DllCharacteristics, bit 0x40), so Windows loads it at its preferred base and not
where ASLR picks; nothing else in the file changes (the header's checksum is not checked for an
executable). An up-to-date DST is left as it is."""
import shutil, struct, sys
from pathlib import Path

src, dst = Path(sys.argv[1]), Path(sys.argv[2])
data = bytearray(src.read_bytes())
pe = struct.unpack_from("<I", data, 0x3C)[0]
assert data[pe:pe + 4] == b"PE\0\0", "not a PE file"
dllch = pe + 24 + 70                      # (the optional header's DllCharacteristics, PE32)
flags = struct.unpack_from("<H", data, dllch)[0]
struct.pack_into("<H", data, dllch, flags & ~0x40)
if dst.exists() and dst.read_bytes() == data:
    print(f"{dst.name}: up to date (DllCharacteristics {flags & ~0x40:#06x})")
    sys.exit(0)
dst.write_bytes(data)
shutil.copystat(src, dst)
print(f"{dst.name}: {src.name} with DllCharacteristics {flags:#06x} -> {flags & ~0x40:#06x}")
