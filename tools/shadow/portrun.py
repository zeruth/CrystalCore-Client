"""portrun.py [secs]: run the port the way shadow.ps1 runs the reference, its argv[0] the reference's
path (CRYSTALCORE_REF, the shadow copy) so the C runtime parses the same command line, in the
environment shadow.ps1 set (inherited untouched). A window capture every 10 s into
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
log = open(OUT / "run.log", "w", encoding="utf-8", errors="replace")
p = subprocess.Popen(cmdline, executable=str(ROOT / cfg["run"]["exe"]), cwd=ROOT / cfg["run"]["cwd"],
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
print((OUT / "run.log").read_text(encoding="utf-8", errors="replace")[-3000:])
print("still running after" if alive else f"exited {p.returncode & 0xffffffff:#x} after", f"{time.time() - t0:.0f}s")
