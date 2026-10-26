# Capture a process's main window without focusing or moving it:
#   powershell -File tools/winshot.ps1 <process name> <out.png>
# DPI-aware (window coordinates are physical pixels), and drawn with PrintWindow's
# PW_RENDERFULLCONTENT, which also captures Direct3D windows and windows behind others.
param([string]$Name = "ffxiv", [string]$Out = "build\shot.png")
Add-Type -AssemblyName System.Drawing
Add-Type -TypeDefinition 'using System; using System.Runtime.InteropServices;
public struct RECT { public int Left, Top, Right, Bottom; }
public static class Win {
  [DllImport("user32.dll")] public static extern bool SetProcessDPIAware();
  [DllImport("user32.dll")] public static extern bool GetWindowRect(IntPtr h, out RECT r);
  [DllImport("user32.dll")] public static extern bool PrintWindow(IntPtr h, IntPtr hdc, uint flags);
  [DllImport("user32.dll")] public static extern bool IsHungAppWindow(IntPtr h);
}'
[Win]::SetProcessDPIAware() | Out-Null
$p = Get-Process $Name -ErrorAction Stop | Where-Object { $_.MainWindowHandle -ne 0 } | Select-Object -First 1
$r = New-Object RECT
[Win]::GetWindowRect($p.MainWindowHandle, [ref]$r) | Out-Null
$w = $r.Right - $r.Left; $h = $r.Bottom - $r.Top
$bmp = New-Object System.Drawing.Bitmap $w, $h
$g = [System.Drawing.Graphics]::FromImage($bmp)
if ([Win]::IsHungAppWindow($p.MainWindowHandle)) {
    # (PrintWindow waits on the window's thread, which a hung one never answers: the screen's
    # pixels where it is instead, whatever is in front of it)
    $g.CopyFromScreen($r.Left, $r.Top, 0, 0, $bmp.Size)
    $ok = "hung, from the screen"
} else {
    $hdc = $g.GetHdc()
    $ok = [Win]::PrintWindow($p.MainWindowHandle, $hdc, 2)
    $g.ReleaseHdc($hdc)
}
$bmp.Save([System.IO.Path]::Combine((Get-Location).Path, $Out))   # (an absolute $Out as it is)
"$($p.ProcessName) pid $($p.Id): $w x $h printwindow=$ok -> $Out"
