"""portrun.py [secs]: run the port the way shadow.ps1 runs the reference, its argv[0] the reference's
path (CRYSTALCORE_REF, the shadow copy) so the C runtime parses the same command line, in the
environment shadow.ps1 set (inherited untouched). CC_PORT_EXE runs another build of the port
(cmake-build-release/bin/CrystalCore.exe, CLion's) in place of rhipper.json's. A window capture every 10 s into
build/pipeline/port-NN.png (tools/winshot.ps1); the run's log in build/pipeline/run.log."""
import json, os, subprocess, sys, time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / "build" / "pipeline"
secs = int(sys.argv[1]) if len(sys.argv) > 1 else 60
cfg = json.loads((ROOT / "rhipper.json").read_text())
ref = os.environ.get("CRYSTALCORE_REF") or str(ROOT / cfg["exe"])
lobby = os.environ.get("CC_LOBBY_PORT")
args = [x.replace("54994", lobby) if lobby else x for x in cfg["run"]["args"]]
cmdline = " ".join([f'"{ref}"'] + [f'"{x}"' if " " in x else x for x in args])
OUT.mkdir(parents=True, exist_ok=True)
# (this run's captures only: an earlier, longer run's later frames read as this one's)
for old in OUT.glob("port-*.png"):
    old.unlink()
log = open(OUT / "run.log", "w", encoding="utf-8", errors="replace")
exe = os.environ.get("CC_PORT_EXE") or str(ROOT / cfg["run"]["exe"])    # another build of the port (CLion's)
p = subprocess.Popen(cmdline, executable=exe, cwd=ROOT / cfg["run"]["cwd"],
                     stdout=log, stderr=subprocess.STDOUT, stdin=subprocess.DEVNULL)
t0, k = time.time(), 0
while time.time() - t0 < secs and p.poll() is None:
    time.sleep(10)
    if p.poll() is None:
        subprocess.run(["powershell", "-NoProfile", "-File", str(ROOT / "tools" / "winshot.ps1"), "CrystalCore",
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
crash = re.search(r"exception (\w+) at \w+ \(([^)]*)\)\s*\n\s*0\s+\w+\s+(\S+)", text)
git = lambda *a: subprocess.run(["git", "-C", str(ROOT), *a], capture_output=True, text=True).stdout.strip()
rec = {"when": time.strftime("%Y-%m-%d %H:%M"), "commit": git("rev-parse", "--short", "HEAD"),
       "dirty_gen": bool(git("status", "--porcelain", "--", "src/gen")), "exe": os.path.basename(exe),
       "secs": round(time.time() - t0), "alive": alive, "exit": None if alive else f"{p.returncode & 0xffffffff:#x}",
       "fault": f"{crash.group(3)} {crash.group(1)} {crash.group(2)}" if crash else None,
       "frames": len(frames), "watch": os.environ.get("CRYSTALCORE_WATCH")}
with open(OUT / "runs.jsonl", "a", encoding="utf-8") as f:
    f.write(json.dumps(rec) + "\n")
print("runs.jsonl:", json.dumps(rec))
