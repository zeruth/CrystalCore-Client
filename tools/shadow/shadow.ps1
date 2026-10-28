<#
.SYNOPSIS
    Run the reference (recorded by Rhipper's shadow32.py) or the port (traced by its runtime) with
    the same command line and the same environment block, so their call traces compare.

.DESCRIPTION
    shadow.ps1 ref  [-Secs N] [-Max N] [-From 0xADDR]   the reference, from ffxiv_shadow.exe
    shadow.ps1 port [-Secs N]           [-From 0xADDR]   the port, CRYSTALCORE_REF the same copy
    shadow.ps1 ref|port -Watch 1371290:684,814 [-From 0xADDR]   who writes those fields of the object a
        global points to, in each (hardware write watches, nothing recorded; ref arms at -From)

    Both runs: the lobby on 127.0.0.1:$CC_LOBBY_PORT (default 54999, off the server's 54994), the
    game's saved settings put back from build\shadow-mygames, the environment cut to a fixed set (the C runtime
    walks it, and one variable more parted the runs), the reference's argv[0] its shadow copy's path. The shadow copy
    is a byte-identical ffxiv.exe under another name, so a kill of every ffxiv.exe leaves it be.
    -From starts both traces at that function's first call (a known-good point to compare from).
    Traces: build\shadow-ref<tag>.bin and build\shadow-port<tag>.bin; compare them with Rhipper's
    shadow_diff.py (--resync, --small-args, --after).
#>
param([Parameter(Mandatory)][ValidateSet("ref", "port")][string]$Which, [int]$Secs = 60, [int]$Max = 30000000,
      [string]$From = "", [string]$Watch = "")
$root = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
# (one run at a time: a second shadow reference started beside a running one met the game's own
# single-instance check, and both recordings were spoiled, 2026-10-27)
if (Get-Process ffxiv_shadow, CrystalCore -ErrorAction SilentlyContinue) {
    throw "a shadow run (ffxiv_shadow or CrystalCore) is still running: stop it first"
}
# Both runs start from the same saved state: the game's My Games folder put back from a pinned
# copy before each, build\shadow-mygames (local: the player's own settings, not committed), made
# from the folder as it is on the first run. Each run rewrites FFXIV.cfg, and a reference trace
# recorded a day before compared with a port run on today's settings parted on the config dump's
# values (a gamepad setting 573 against 1), 2026-10-27. Record the reference again after re-pinning.
$docs = [Environment]::GetFolderPath("MyDocuments")
$saved = Join-Path $docs "My Games\FINAL FANTASY XIV - A Realm Reborn"
$pinned = Join-Path $root "build\shadow-mygames"
New-Item -ItemType Directory -Force $saved | Out-Null
if (-not (Test-Path $pinned)) {
    New-Item -ItemType Directory -Force $pinned | Out-Null
    Get-ChildItem $saved -Exclude screenshots | Copy-Item -Destination $pinned -Recurse -Force
}
Get-ChildItem $pinned | Copy-Item -Destination $saved -Recurse -Force
# And the same environment: only these variables, PATH fixed, whatever shell launched it. The C
# runtime copies every variable (the traces' calloc/strcpy_s sizes), and the session's own (an
# editor's, a tool's) differed from one day's run to the next.
$keep = "SystemRoot", "SystemDrive", "windir", "ComSpec", "PATHEXT", "TEMP", "TMP", "USERPROFILE", "USERNAME",
        "USERDOMAIN", "COMPUTERNAME", "HOMEDRIVE", "HOMEPATH", "APPDATA", "LOCALAPPDATA", "ProgramData",
        "ProgramFiles", "ProgramFiles(x86)", "ProgramW6432", "CommonProgramFiles", "CommonProgramFiles(x86)",
        "CommonProgramW6432", "ALLUSERSPROFILE", "PUBLIC", "OS", "NUMBER_OF_PROCESSORS", "PROCESSOR_ARCHITECTURE",
        "PROCESSOR_IDENTIFIER", "PROCESSOR_LEVEL", "PROCESSOR_REVISION", "CC_LOBBY_PORT"
$py = Split-Path -Parent (Get-Command python).Source
foreach ($v in Get-ChildItem env:) {
    if ($keep -notcontains $v.Name) { [Environment]::SetEnvironmentVariable($v.Name, $null) }
}
$env:PATH = "$py;$py\Scripts;$env:SystemRoot\system32;$env:SystemRoot;$env:SystemRoot\System32\Wbem"
$b = Join-Path $root "build"
$cfg = Get-Content (Join-Path $root "rhipper.json") -Raw | ConvertFrom-Json
$rh = $cfg.rhipper
$game = Join-Path $root $cfg.run.cwd
$tag = if ($From) { "-from-" + $From.ToLower().Replace("0x", "") } else { "" }
$env:RHIPPER_PROJECT = $root
$env:CRYSTALCORE_TRACE = "$b\shadow-port$tag.bin"
# (fixed, whatever -Max: the variable is in both runs' environment, and 4000000 against 30000000
# was a character more for the port's C runtime to copy)
$env:CRYSTALCORE_TRACE_MAX = "30000000"
$env:CRYSTALCORE_TRACE_FROM = $From
# (a message box answered, not left open: the port's runtime reads it; the reference has it in its
# environment too, unread, so the two blocks are the same)
$env:CRYSTALCORE_NODIALOGS = "1"
if (-not $env:CC_LOBBY_PORT) { $env:CC_LOBBY_PORT = "54999" }
# The shadow copy: ffxiv.exe with its DYNAMICBASE flag cleared (the PE header's DllCharacteristics),
# nothing else changed. ASLR otherwise loads it where it likes (0x60000 seen), and shadow32.py,
# rebasing every argument word inside the image back to 0x400000, rebased plain numbers that fell
# there too: a pool's size 0x280000 recorded as 0x620000. At its preferred base nothing is rebased
$shadow = Join-Path $game "ffxiv_shadow.exe"
python (Join-Path $PSScriptRoot "fixed_base.py") (Join-Path $game "ffxiv.exe") $shadow
if ($LASTEXITCODE) { throw "the shadow copy could not be made" }
$env:CRYSTALCORE_REF = $shadow
$args32 = @($cfg.run.args | ForEach-Object { $_ -replace "54994", $env:CC_LOBBY_PORT })
if ($Which -eq "ref") {
    Push-Location $game
    try {
        $extra = if ($From) { @("--from", $From) } else { @() }
        # (-Watch GLOBAL:OFF,...: shadow32's hardware write watches, the writer of a field)
        # (watch only, at full speed: no calls recorded, -Secs ends it)
        if ($Watch) { $extra += @("--watch", $Watch, "--watch-only", "--secs", $Secs) }
        python (Join-Path $rh "shadow32.py") --exe $shadow --out "$b\shadow-ref$tag.bin" --max $Max `
            --per-function 100000000 @extra -- @args32
    } finally {
        Pop-Location
        # (the recording done, the reference too: one outlived shadow32's TerminateProcess after a
        # -Max run, and the next run refused to start beside it, 2026-10-28. Only the shadow copy:
        # the server worker's ffxiv.exe is another name)
        Get-Process ffxiv_shadow -ErrorAction SilentlyContinue | Stop-Process -Force -Confirm:$false
        # (and gone: Stop-Process returns before the process has exited, and a port run started
        # straight after still found it)
        Get-Process ffxiv_shadow -ErrorAction SilentlyContinue | Wait-Process -Timeout 20 -ErrorAction SilentlyContinue
    }
} else {
    # (-Watch GLOBAL:OFF,...: the same watches in the port's runtime, no calls recorded)
    if ($Watch) {
        $env:CRYSTALCORE_WATCH = $Watch
        $env:CRYSTALCORE_TRACE_FROM = "1"
    }
    python (Join-Path $PSScriptRoot "portrun.py") $Secs
}
