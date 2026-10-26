<#
.SYNOPSIS
    Run the reference (recorded by Rhipper's shadow32.py) or the port (traced by its runtime) with
    the same command line and the same environment block, so their call traces compare.

.DESCRIPTION
    shadow.ps1 ref  [-Secs N] [-Max N] [-From 0xADDR]   the reference, from ffxiv_shadow.exe
    shadow.ps1 port [-Secs N]           [-From 0xADDR]   the port, CRYSTALCORE_REF the same copy

    Both runs: the lobby on 127.0.0.1:$CC_LOBBY_PORT (default 54999, off the server's 54994), the
    same variables set here and nothing else changed (the C runtime walks the environment, and one
    variable more parted the runs), the reference's argv[0] its shadow copy's path. The shadow copy
    is a byte-identical ffxiv.exe under another name, so a kill of every ffxiv.exe leaves it be.
    -From starts both traces at that function's first call (a known-good point to compare from).
    Traces: build\shadow-ref<tag>.bin and build\shadow-port<tag>.bin; compare them with Rhipper's
    shadow_diff.py (--resync, --small-args, --after).
#>
param([Parameter(Mandatory)][ValidateSet("ref", "port")][string]$Which, [int]$Secs = 60, [int]$Max = 30000000,
      [string]$From = "")
$root = Split-Path -Parent (Split-Path -Parent $PSScriptRoot)
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
        python (Join-Path $rh "shadow32.py") --exe $shadow --out "$b\shadow-ref$tag.bin" --max $Max `
            --per-function 100000000 @extra -- @args32
    } finally { Pop-Location }
} else {
    python (Join-Path $PSScriptRoot "portrun.py") $Secs
}
