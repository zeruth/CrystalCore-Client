"""portrun.py [secs]: run the port the way shadow.ps1 runs the reference, its argv[0] the reference's
path (CRYSTALCORE_REF, the shadow copy) so the C runtime parses the same command line, in the
environment shadow.ps1 set (inherited untouched). CC_PORT_EXE runs another build of the port
(cmake-build-release/bin/CrystalCore.exe, CLion's) in place of rhipper.json's. A window capture every 10 s into
build/pipeline/port-NN.png (tools/winshot.ps1); the run's log in build/pipeline/run.log."""
import json, os, shutil, subprocess, sys, time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / "build" / "pipeline"
secs = int(sys.argv[1]) if len(sys.argv) > 1 else 60
cfg = json.loads((ROOT / "rhipper.json").read_text())
ref = os.environ.get("CRYSTALCORE_REF") or str(ROOT / cfg["exe"])
lobby = os.environ.get("CC_LOBBY_PORT")
args = [x.replace("54994", lobby) if lobby else x for x in cfg["run"]["args"]]
cmdline = " ".join([f'"{ref}"'] + [f'"{x}"' if " " in x else x for x in args])
# (by path: shadow.ps1's fixed PATH has neither PowerShell's folder nor git's, and the capture's
# FileNotFoundError ended a shadow port run at its first frame, 2026-10-28)
POWERSHELL = os.path.join(os.environ.get("SystemRoot", r"C:\Windows"), "System32", "WindowsPowerShell", "v1.0",
                          "powershell.exe")
GIT = shutil.which("git") or os.path.join(os.environ.get("ProgramFiles", r"C:\Program Files"), "Git", "cmd", "git.exe")
OUT.mkdir(parents=True, exist_ok=True)
# (this run's captures only: an earlier, longer run's later frames read as this one's)
for old in [*OUT.glob("port-*.png"), *OUT.glob("frame-*.png"), *OUT.glob("frame-*.bmp")]:
    old.unlink()
# (the frames the game drew, its back buffer every 300 presents, ~5 s: the window's capture is black
# for a Direct3D 9 window, the reference's too, and the port at its title menu read as a black
# screen, 2026-10-28. CRYSTALCORE_FRAMEDUMP set by the caller is kept; "0" turns it off)
os.environ.setdefault("CRYSTALCORE_FRAMEDUMP", f"300,{max(1, secs // 5)}")
os.environ.setdefault("CRYSTALCORE_FRAMEDUMP_OUT", str(OUT / "frame"))
log = open(OUT / "run.log", "w", encoding="utf-8", errors="replace")
exe = os.environ.get("CC_PORT_EXE") or str(ROOT / cfg["run"]["exe"])    # another build of the port (CLion's)
p = subprocess.Popen(cmdline, executable=exe, cwd=ROOT / cfg["run"]["cwd"],
                     stdout=log, stderr=subprocess.STDOUT, stdin=subprocess.DEVNULL)
# CC_INPUT="<secs>:move <x> <y>; <secs>:click <x> <y>; <secs>:key <vk>": window messages posted to
# the game's window at those times from the start, x and y in its client area (1280x720): the title
# menu's mouse, tried again run to run without anyone at the window (2026-10-28)
events = []
for part in filter(None, (s.strip() for s in os.environ.get("CC_INPUT", "").split(";"))):
    at, _, what = part.partition(":")
    events.append((float(at), what.split()))
events.sort(key=lambda e: e[0])


def post(what):
    import ctypes
    u = ctypes.windll.user32
    found = []
    proc = ctypes.WINFUNCTYPE(ctypes.c_bool, ctypes.c_void_p, ctypes.c_void_p)

    # (by its class, in whichever process: the runtime runs the game in a child of the one started)
    def each(h, _l):
        buf = ctypes.create_unicode_buffer(64)
        u.GetClassNameW(ctypes.c_void_p(h), buf, 64)
        if buf.value == "FFXIVGAME":
            found.append(h)
        return True
    u.EnumWindows(proc(each), None)
    if not found:
        print("input: no game window yet for", what)
        return
    h = ctypes.c_void_p(found[0])
    u.PostMessageW.argtypes = [ctypes.c_void_p, ctypes.c_uint, ctypes.c_size_t, ctypes.c_ssize_t]
    if what[0] in ("move", "click"):
        x, y = int(what[1]), int(what[2])
        lp = (y << 16) | (x & 0xFFFF)
        u.PostMessageW(h, 0x0200, 0, lp)                         # WM_MOUSEMOVE
        if what[0] == "click":
            u.PostMessageW(h, 0x0201, 1, lp)                     # WM_LBUTTONDOWN, MK_LBUTTON
            time.sleep(0.1)
            u.PostMessageW(h, 0x0202, 0, lp)                     # WM_LBUTTONUP
    elif what[0] == "key":
        vk = int(what[1], 0)
        u.PostMessageW(h, 0x0100, vk, 1)                         # WM_KEYDOWN
        time.sleep(0.1)
        u.PostMessageW(h, 0x0101, vk, 0xC0000001)                # WM_KEYUP
    print(f"input at {time.time() - t0:.1f}s: {' '.join(what)}")


t0, k = time.time(), 0
next_shot = 10
while time.time() - t0 < secs and p.poll() is None:
    now = time.time() - t0
    while events and events[0][0] <= now:
        post(events.pop(0)[1])
    if now < next_shot:
        time.sleep(min(0.25, next_shot - now))
        continue
    next_shot += 10
    if p.poll() is None:
        subprocess.run([POWERSHELL, "-NoProfile", "-File", str(ROOT / "tools" / "winshot.ps1"), "CrystalCore",
                        str(OUT / f"port-{k:02d}.png")], capture_output=True, timeout=60)
        k += 1
alive = p.poll() is None
if alive:
    subprocess.run(["taskkill", "/T", "/F", "/PID", str(p.pid)], capture_output=True)
log.close()
text = (OUT / "run.log").read_text(encoding="utf-8", errors="replace")
print(text[-3000:])
print("still running after" if alive else f"exited {p.returncode & 0xffffffff:#x} after", f"{time.time() - t0:.0f}s")
# Each run's outcome, one line in build/pipeline/runs.jsonl: how far the boot got from one fix to
# the next (alive for how long, where it faulted, how many different frames it drew), by the gen's
# commit and whether the working tree had changes (probes, hand edits) beyond it.
import hashlib, re
frames = {hashlib.md5(f.read_bytes()).hexdigest() for f in OUT.glob("port-*.png")}
# (the back buffers as PNGs, and how much of each was lit: the boot's visible progress)
try:
    from PIL import Image
    for b in sorted(OUT.glob("frame-*.bmp")):
        Image.open(b).convert("RGB").save(b.with_suffix(".png"))
        b.unlink()
except ImportError:
    pass
drawn = [(int(n), float(lit)) for n, lit in re.findall(r"FRAMEDUMP (\d+): \d+x\d+ .*?, ([\d.]+)% not black", text)]
if drawn:
    print("frames drawn (present, % lit):", " ".join(f"{n}:{lit:.0f}%" for n, lit in drawn),
          f"-> {OUT / 'frame-<n>.png'}")
crash = re.search(r"exception (\w+) at \w+ \(([^)]*)\)\s*\n\s*0\s+\w+\s+(\S+)", text)
git = lambda *a: subprocess.run([GIT, "-C", str(ROOT), *a], capture_output=True, text=True).stdout.strip()
rec = {"when": time.strftime("%Y-%m-%d %H:%M"), "commit": git("rev-parse", "--short", "HEAD"),
       "dirty_gen": bool(git("status", "--porcelain", "--", "src/gen")), "exe": os.path.basename(exe),
       "secs": round(time.time() - t0), "alive": alive, "exit": None if alive else f"{p.returncode & 0xffffffff:#x}",
       "fault": f"{crash.group(3)} {crash.group(1)} {crash.group(2)}" if crash else None,
       "frames": len(frames), "drawn": [lit for _n, lit in drawn], "watch": os.environ.get("CRYSTALCORE_WATCH")}
with open(OUT / "runs.jsonl", "a", encoding="utf-8") as f:
    f.write(json.dumps(rec) + "\n")
print("runs.jsonl:", json.dumps(rec))
# (and the run's gotchas: suspect functions that ran, stubs, refusals, risky imports; Rhipper's)
gotchas = Path(cfg.get("rhipper", "")) / "gotchas.py"
if gotchas.exists():
    env = dict(os.environ, RHIPPER_PROJECT=str(ROOT))
    r = subprocess.run([sys.executable, str(gotchas), str(OUT / "run.log")], capture_output=True, text=True, env=env)
    print("gotchas:", (r.stdout or r.stderr).strip().replace("\n", "\n  "))
