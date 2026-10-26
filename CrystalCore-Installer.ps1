<#
.SYNOPSIS
    Builds the FINAL FANTASY XIV: A Realm Reborn beta client CrystalCore ports, version
    2013.08.09.0001.0000 (build 672261), from scratch, in the current folder: the 2013 retail disc,
    then the two D2013.08.09 game patches on top of it.

.DESCRIPTION
    Right-click > Run with PowerShell installs into the folder the script is in; from a terminal it
    installs into the current directory (or -InstallDir).

    1. The retail DVD image (U13002W_001_D01, mastered 2013-07-04) from archive.org, unless it is
       already downloaded. Checked against its MD5.
    2. The disc's own installer, run from the mounted image. Choose the install folder this script
       prints when it asks (or pass -BaseInstall to copy a disc install you already have).
       The disc installs game 2013.06.29.0004.0000 and no ffxiv.exe.
    3. The D2013.08.09.0000.0000 and D2013.08.09.0001.0000 game patches from Square Enix's patch
       server, checked against their SHA-1s.
    4. Both patches applied to the install's game folder, the way the 2013 launcher applies them
       (ZiPatch: SQPK data and file chunks, every chunk's CRC checked), and ffxivgame.ver set to
       2013.08.09.0001.0000.
    5. The result checked: the version file and ffxiv.exe's SHA-1.

    Downloads resume where they stopped, and a rerun skips every step already done. Windows
    PowerShell 5.1 or PowerShell 7; about 18 GB free.

.PARAMETER InstallDir
    The install's top folder, the one that will hold boot\ and game\. Default: the current folder.

.PARAMETER WorkDir
    Where the disc image and the patches are downloaded to, kept so a rerun skips them.
    Default: _downloads\ in the install folder.

.PARAMETER BaseInstall
    An existing install of the retail disc (game 2013.06.29.0004.0000) to copy instead of running
    the disc's installer. It is copied, not changed.

.PARAMETER NoPause
    Exit at the end without waiting for Enter (the window of a right-click run otherwise stays open).

.EXAMPLE
    .\CrystalCore-Installer.ps1
.EXAMPLE
    .\CrystalCore-Installer.ps1 -InstallDir D:\FFXIV-Beta
#>
[CmdletBinding()]
param(
    [string]$InstallDir = (Get-Location).Path,
    [string]$WorkDir,
    [string]$BaseInstall,
    [switch]$NoPause
)

$ErrorActionPreference = "Stop"
# (a right-click run starts in the script's folder; one started inside Windows' own folders, as a
# shortcut can be, installs beside the script instead)
if (-not $PSBoundParameters.ContainsKey("InstallDir") -and $env:windir -and
    $InstallDir.StartsWith($env:windir, [StringComparison]::OrdinalIgnoreCase)) {
    $InstallDir = Split-Path -Parent $MyInvocation.MyCommand.Path
}
$InstallDir = [IO.Path]::GetFullPath($InstallDir)
if (-not $WorkDir) { $WorkDir = Join-Path $InstallDir "_downloads" }
$WorkDir = [IO.Path]::GetFullPath($WorkDir)
# (PowerShell 7.2+ draws Write-Progress as one minimal bar line; 5.1 as its classic panel)
if ($PSVersionTable.PSVersion.Major -ge 7 -and $PSStyle) { $PSStyle.Progress.View = "Minimal" }

$Disc = @{
    Name = "U13002W_001_D01(ARR).iso"
    Url  = "https://archive.org/download/u-13002-w-001-d-01-arr/U13002W_001_D01%28ARR%29.iso"
    Size = 7414087680
    Md5  = "a0542ae2c37865b1aa92c6563ce42467"
}
$Patches = @(
    @{ Name = "D2013.08.09.0000.0000.patch"; Url = "http://patch-dl.ffxiv.com/game/4e9a232b/D2013.08.09.0000.0000.patch"
       Size = 1499488272; Sha1 = "6add155dcb1cc5f537475d374bb1e2aab866925a" },
    @{ Name = "D2013.08.09.0001.0000.patch"; Url = "http://patch-dl.ffxiv.com/game/4e9a232b/D2013.08.09.0001.0000.patch"
       Size = 1104799732; Sha1 = "57e3bcd92c0d57883e4ef277e113ecb0aac247cb" }
)
$BaseVersion = "2013.06.29.0004.0000"
$FinalVersion = "2013.08.09.0001.0000"
$ExeSha1 = "dcd3d87c545c20fab5ad6f7039f4e3ca3cb02948"
$LaunchArgs = '"DEV.TestSID=0" "DEV.UseSqPack=1" "DEV.DataPathType=1" "DEV.LobbyHost01=127.0.0.1" ' +
              '"DEV.LobbyPort01=54994" "DEV.LobbyHost02=127.0.0.1" "DEV.LobbyPort02=54994" ' +
              '"SYS.Region=3" "language=1" "ver=2013.08.09.0001.0000"'

# ---- the work done in .NET: downloads, hashes and the ZiPatch applier, each reporting its progress
# to a PowerShell callback (on this thread) a few times a second ------------------------------------
if (-not ("CrystalCoreInstaller.ZiPatch" -as [type])) {
Add-Type -Language CSharp -TypeDefinition @"
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.IO.Compression;
using System.Net;
using System.Security.Cryptography;
using System.Text;

namespace CrystalCoreInstaller {

// (done, total, bytes per second): called at most every quarter second
public delegate void Progress(long done, long total, double rate);

public static class Fetch {
    // a download to path, resumed from what is already there (an HTTP range), redirects followed
    public static void Download(string url, string path, long size, Progress progress) {
        ServicePointManager.SecurityProtocol |= SecurityProtocolType.Tls12;
        long have = File.Exists(path) ? new FileInfo(path).Length : 0;
        if (have > size) { File.Delete(path); have = 0; }
        for (int attempt = 0; have < size; attempt++) {
            try {
                HttpWebRequest req = (HttpWebRequest)WebRequest.Create(url);
                req.AllowAutoRedirect = true;
                req.UserAgent = "CrystalCore-Installer";
                req.ReadWriteTimeout = 60000;
                if (have > 0) req.AddRange(have);
                using (HttpWebResponse resp = (HttpWebResponse)req.GetResponse())
                using (Stream body = resp.GetResponseStream())
                using (FileStream f = new FileStream(path, have > 0 && resp.StatusCode == HttpStatusCode.PartialContent
                                                     ? FileMode.Append : FileMode.Create, FileAccess.Write)) {
                    if (resp.StatusCode != HttpStatusCode.PartialContent) have = 0;
                    byte[] buf = new byte[1 << 20];
                    Stopwatch clock = Stopwatch.StartNew();
                    long start = have, last = 0;
                    int n;
                    while ((n = body.Read(buf, 0, buf.Length)) > 0) {
                        f.Write(buf, 0, n);
                        have += n;
                        if (clock.ElapsedMilliseconds - last >= 250) {
                            last = clock.ElapsedMilliseconds;
                            progress(have, size, (have - start) / Math.Max(clock.Elapsed.TotalSeconds, 0.001));
                        }
                    }
                }
            } catch (WebException) {
                if (attempt >= 5) throw;
                System.Threading.Thread.Sleep(3000);
                have = File.Exists(path) ? new FileInfo(path).Length : 0;
            } catch (IOException) {
                if (attempt >= 5) throw;
                System.Threading.Thread.Sleep(3000);
                have = File.Exists(path) ? new FileInfo(path).Length : 0;
            }
        }
        progress(have, size, 0);
    }

    // a file's MD5 or SHA-1 as lowercase hex
    public static string Hash(string path, string algo, Progress progress) {
        using (HashAlgorithm h = algo == "MD5" ? (HashAlgorithm)MD5.Create() : SHA1.Create())
        using (FileStream f = new FileStream(path, FileMode.Open, FileAccess.Read, FileShare.Read, 1 << 20)) {
            byte[] buf = new byte[1 << 22];
            Stopwatch clock = Stopwatch.StartNew();
            long done = 0, last = 0;
            int n;
            while ((n = f.Read(buf, 0, buf.Length)) > 0) {
                h.TransformBlock(buf, 0, n, null, 0);
                done += n;
                if (clock.ElapsedMilliseconds - last >= 250) {
                    last = clock.ElapsedMilliseconds;
                    progress(done, f.Length, done / Math.Max(clock.Elapsed.TotalSeconds, 0.001));
                }
            }
            h.TransformFinalBlock(buf, 0, 0);
            StringBuilder sb = new StringBuilder();
            foreach (byte b in h.Hash) sb.Append(b.ToString("x2"));
            return sb.ToString();
        }
    }
}

// FFXIV ZiPatch files applied to a game folder, the way the launcher does (tools/zipatch.py)
public static class ZiPatch {
    static uint[] crcTable;
    static uint Crc32(byte[] a, int aLen, byte[] b, int bLen) {
        if (crcTable == null) {
            crcTable = new uint[256];
            for (uint i = 0; i < 256; i++) {
                uint c = i;
                for (int k = 0; k < 8; k++) c = (c & 1) != 0 ? 0xEDB88320u ^ (c >> 1) : c >> 1;
                crcTable[i] = c;
            }
        }
        uint crc = 0xFFFFFFFFu;
        for (int i = 0; i < aLen; i++) crc = crcTable[(crc ^ a[i]) & 0xFF] ^ (crc >> 8);
        for (int i = 0; i < bLen; i++) crc = crcTable[(crc ^ b[i]) & 0xFF] ^ (crc >> 8);
        return crc ^ 0xFFFFFFFFu;
    }
    static uint BE32(byte[] b, int p) { return (uint)(b[p] << 24 | b[p + 1] << 16 | b[p + 2] << 8 | b[p + 3]); }
    static ushort BE16(byte[] b, int p) { return (ushort)(b[p] << 8 | b[p + 1]); }
    static ulong BE64(byte[] b, int p) { return (ulong)BE32(b, p) << 32 | BE32(b, p + 4); }
    static uint LE32(byte[] b, int p) { return BitConverter.ToUInt32(b, p); }

    class Game {
        public string Root;
        Dictionary<string, FileStream> open = new Dictionary<string, FileStream>();
        public Dictionary<string, int> Stats = new Dictionary<string, int>();
        public Game(string root) { Root = root; }
        string Full(string rel) { return Path.Combine(Root, rel.Replace('/', Path.DirectorySeparatorChar)); }
        FileStream Open(string rel) {
            FileStream f;
            if (!open.TryGetValue(rel, out f)) {
                string path = Full(rel);
                Directory.CreateDirectory(Path.GetDirectoryName(path));
                f = new FileStream(path, FileMode.OpenOrCreate, FileAccess.ReadWrite, FileShare.None, 1 << 20);
                open[rel] = f;
            }
            return f;
        }
        public void Write(string rel, long offset, byte[] data, int start, int count) {
            FileStream f = Open(rel);
            f.Seek(offset, SeekOrigin.Begin);
            f.Write(data, start, count);
        }
        public void Wipe(string rel, long offset, long length) {
            byte[] zero = new byte[Math.Min(length, 1 << 20)];
            while (length > 0) {
                int n = (int)Math.Min(length, zero.Length);
                Write(rel, offset, zero, 0, n);
                offset += n;
                length -= n;
            }
        }
        public void Truncate(string rel) {
            Close(rel);
            string path = Full(rel);
            Directory.CreateDirectory(Path.GetDirectoryName(path));
            File.WriteAllBytes(path, new byte[0]);
        }
        public void Delete(string rel) {
            Close(rel);
            string path = Full(rel);
            if (File.Exists(path)) File.Delete(path);
        }
        public void MakeDir(string rel) { Directory.CreateDirectory(Full(rel)); }
        public void RemoveDirIfEmpty(string rel) {
            string d = Full(rel);
            if (Directory.Exists(d) && Directory.GetFileSystemEntries(d).Length == 0) Directory.Delete(d);
        }
        public string[] List(string rel) {
            string d = Full(rel);
            return Directory.Exists(d) ? Directory.GetFiles(d) : new string[0];
        }
        public void Close(string rel) {
            FileStream f;
            if (open.TryGetValue(rel, out f)) { f.Dispose(); open.Remove(rel); }
        }
        public void CloseAll() {
            foreach (FileStream f in open.Values) f.Dispose();
            open.Clear();
        }
        public void Count(string key) { int n; Stats.TryGetValue(key, out n); Stats[key] = n + 1; }
    }

    static string Expansion(int sub) { int e = sub >> 8; return e == 0 ? "ffxiv" : "ex" + e; }
    static string DatPath(int main, int sub, uint id) {
        return string.Format("sqpack/{0}/{1:x2}{2:x4}.win32.dat{3}", Expansion(sub), main, sub, id);
    }
    static string IndexPath(int main, int sub, uint id) {
        return string.Format("sqpack/{0}/{1:x2}{2:x4}.win32.index{3}", Expansion(sub), main, sub, id == 0 ? "" : id.ToString());
    }

    // (what the launcher leaves where data was removed: zeroed blocks with a free-block header)
    static void EmptyBlock(Game g, string rel, long offset, uint blocks) {
        g.Wipe(rel, offset, (long)blocks << 7);
        byte[] h = new byte[20];
        BitConverter.GetBytes(1u << 7).CopyTo(h, 0);
        BitConverter.GetBytes(blocks - 1).CopyTo(h, 12);
        g.Write(rel, offset, h, 0, 20);
    }

    // an F/A operation's blocks: a 16-byte header, deflate (or raw) data, each padded to 128 bytes
    static byte[] ReadBlocks(byte[] body, int p, int end) {
        MemoryStream outp = new MemoryStream();
        while (p < end) {
            uint hsize = LE32(body, p), csize = LE32(body, p + 8), dsize = LE32(body, p + 12);
            if (hsize != 16) throw new InvalidDataException("bad block header size " + hsize);
            bool raw = csize == 32000;
            int n = (int)(raw ? dsize : csize);
            if (raw) {
                outp.Write(body, p + 16, n);
            } else {
                using (DeflateStream z = new DeflateStream(new MemoryStream(body, p + 16, n), CompressionMode.Decompress))
                    z.CopyTo(outp);
            }
            p += (16 + n + 127) & ~127;
        }
        return outp.ToArray();
    }

    static void Sqpk(Game g, byte[] body) {
        char cmd = (char)body[4];
        string key = cmd.ToString();
        if (cmd == 'A') {
            int main = BE16(body, 8), sub = BE16(body, 10);
            uint id = BE32(body, 12);
            long off = (long)BE32(body, 16) << 7, num = (long)BE32(body, 20) << 7, del = (long)BE32(body, 24) << 7;
            string rel = DatPath(main, sub, id);
            g.Write(rel, off, body, 28, (int)num);
            g.Wipe(rel, off + num, del);
        } else if (cmd == 'D' || cmd == 'E') {
            int main = BE16(body, 8), sub = BE16(body, 10);
            uint id = BE32(body, 12);
            EmptyBlock(g, DatPath(main, sub, id), (long)BE32(body, 16) << 7, BE32(body, 20));
        } else if (cmd == 'H') {
            char fileKind = (char)body[5], headerKind = (char)body[6];
            int main = BE16(body, 8), sub = BE16(body, 10);
            uint id = BE32(body, 12);
            string rel = fileKind == 'D' ? DatPath(main, sub, id) : IndexPath(main, sub, id);
            g.Write(rel, headerKind == 'V' ? 0 : 1024, body, 16, 1024);
        } else if (cmd == 'F') {
            char op = (char)body[5];
            long foff = (long)BE64(body, 8);
            int plen = (int)BE32(body, 24);
            int exp = BE16(body, 28);
            string rel = Encoding.GetEncoding(28591).GetString(body, 32, plen).TrimEnd('\0').Replace('\\', '/');
            if (op == 'A') {
                if (foff == 0) g.Truncate(rel);
                byte[] data = ReadBlocks(body, 32 + plen, body.Length);
                g.Write(rel, foff, data, 0, data.Length);
            } else if (op == 'D') {
                g.Delete(rel);
            } else if (op == 'M') {
                g.MakeDir(rel);
            } else if (op == 'R') {
                string name = exp == 0 ? "ffxiv" : "ex" + exp;
                foreach (string folder in new string[] { "sqpack/" + name, "movie/" + name }) {
                    foreach (string path in g.List(folder)) {
                        string fn = Path.GetFileName(path);
                        if (fn.EndsWith(".var") || fn == "00000.bk2" || fn == "00001.bk2" || fn == "00002.bk2" || fn == "00003.bk2")
                            continue;
                        g.Delete(folder + "/" + fn);
                    }
                }
            } else {
                throw new InvalidDataException("unknown file op " + op);
            }
            key += op;
        } else if (cmd != 'T' && cmd != 'X' && cmd != 'I') {
            throw new InvalidDataException("unknown SQPK command " + cmd);
        }
        g.Count("SQPK " + key);
    }

    static readonly byte[] Magic = { 0x91, 0x5A, 0x49, 0x50, 0x41, 0x54, 0x43, 0x48, 0x0D, 0x0A, 0x1A, 0x0A };

    static void ReadFully(Stream s, byte[] buf, int n) {
        int got = 0;
        while (got < n) {
            int k = s.Read(buf, got, n - got);
            if (k <= 0) throw new EndOfStreamException();
            got += k;
        }
    }

    // applies one patch to the game folder; returns its chunk and command counts
    public static string Apply(string gameDir, string patchPath, Progress progress) {
        Game g = new Game(gameDir);
        using (FileStream f = new FileStream(patchPath, FileMode.Open, FileAccess.Read, FileShare.Read, 1 << 20)) {
            byte[] magic = new byte[12];
            ReadFully(f, magic, 12);
            for (int i = 0; i < 12; i++)
                if (magic[i] != Magic[i]) throw new InvalidDataException(patchPath + ": not a ZiPatch file");
            byte[] hdr = new byte[8], crcb = new byte[4];
            Stopwatch clock = Stopwatch.StartNew();
            long last = 0;
            while (true) {
                ReadFully(f, hdr, 8);
                int size = (int)BE32(hdr, 0);
                byte[] typ = new byte[] { hdr[4], hdr[5], hdr[6], hdr[7] };
                byte[] body = new byte[size];
                ReadFully(f, body, size);
                ReadFully(f, crcb, 4);
                if (Crc32(typ, 4, body, size) != BE32(crcb, 0))
                    throw new InvalidDataException(patchPath + ": CRC mismatch at " + (f.Position - size - 12));
                string t = Encoding.ASCII.GetString(typ);
                g.Count(t);
                if (t == "SQPK") {
                    Sqpk(g, body);
                } else if (t == "ADIR") {
                    g.MakeDir(Encoding.GetEncoding(28591).GetString(body, 4, (int)BE32(body, 0)));
                } else if (t == "DELD") {
                    g.RemoveDirIfEmpty(Encoding.GetEncoding(28591).GetString(body, 4, (int)BE32(body, 0)));
                } else if (t == "EOF_") {
                    break;
                } else if (t != "FHDR" && t != "APLY" && t != "APFS" && t != "XXXX") {
                    throw new InvalidDataException(patchPath + ": unknown chunk " + t);
                }
                if (clock.ElapsedMilliseconds - last >= 250) {
                    last = clock.ElapsedMilliseconds;
                    progress(f.Position, f.Length, f.Position / Math.Max(clock.Elapsed.TotalSeconds, 0.001));
                }
            }
        }
        g.CloseAll();
        List<string> parts = new List<string>();
        List<string> keys = new List<string>(g.Stats.Keys);
        keys.Sort(StringComparer.Ordinal);
        foreach (string k in keys) parts.Add(k + ": " + g.Stats[k]);
        return string.Join(", ", parts.ToArray());
    }
}

}
"@
}

# ---- output -----------------------------------------------------------------------------------------
function Step($msg) { Write-Host "==> $msg" -ForegroundColor Cyan }
function Note($msg) { Write-Host "    $msg" }

function Format-Size([double]$bytes) {
    if ($bytes -ge 1GB) { return "{0:N2} GB" -f ($bytes / 1GB) }
    if ($bytes -ge 1MB) { return "{0:N1} MB" -f ($bytes / 1MB) }
    return "{0:N0} KB" -f ($bytes / 1KB)
}

# the progress callback .NET calls (on this thread): one Write-Progress bar, done of total, the
# rate and the time left, under the activity New-Progress set
$script:ProgressActivity = ""
$script:OnProgress = [CrystalCoreInstaller.Progress] {
    param([long]$done, [long]$total, [double]$rate)
    $pct = if ($total -gt 0) { [math]::Min(100, [int](100 * $done / $total)) } else { 0 }
    $status = "{0} of {1}" -f (Format-Size $done), (Format-Size $total)
    if ($rate -gt 0) { $status += ", {0}/s" -f (Format-Size $rate) }
    $left = if ($rate -gt 0) { [int](($total - $done) / $rate) } else { -1 }
    Write-Progress -Id 1 -Activity $script:ProgressActivity -Status $status -PercentComplete $pct -SecondsRemaining $left
}
function New-Progress([string]$activity) {
    $script:ProgressActivity = $activity
    return $script:OnProgress
}

function Get-Download($item, $dir, $algo, $hash) {
    $path = Join-Path $dir $item.Name
    $have = if (Test-Path -LiteralPath $path) { (Get-Item -LiteralPath $path).Length } else { 0 }
    if ($have -eq $item.Size) {
        Note "have $($item.Name)"
    } else {
        Note ("downloading {0} ({1}){2}" -f $item.Name, (Format-Size $item.Size),
              $(if ($have) { ", resuming at " + (Format-Size $have) } else { "" }))
        [CrystalCoreInstaller.Fetch]::Download($item.Url, $path, $item.Size, (New-Progress "Downloading $($item.Name)"))
        Write-Progress -Id 1 -Activity "Downloading $($item.Name)" -Completed
    }
    $got = [CrystalCoreInstaller.Fetch]::Hash($path, $algo, (New-Progress "Checking $($item.Name) ($algo)"))
    Write-Progress -Id 1 -Activity "Checking $($item.Name)" -Completed
    if ($got -ne $hash) { throw "$($item.Name): $algo $got, expected $hash (delete it to download again)" }
    Note "$algo ok"
    return $path
}

# the install folder holding game\ffxivgame.ver: the one asked for, or where the disc's installer
# put it (its own default, or a SquareEnix folder under the one chosen)
function Find-Install {
    $tail = "SquareEnix\FINAL FANTASY XIV - A Realm Reborn"
    foreach ($d in @($InstallDir, (Join-Path $InstallDir $tail), (Join-Path ${env:ProgramFiles(x86)} $tail),
                     (Join-Path $env:ProgramFiles $tail))) {
        if ($d -and (Test-Path -LiteralPath (Join-Path $d "game\ffxivgame.ver"))) { return $d }
    }
    return $null
}

# ---- the steps ------------------------------------------------------------------------------------
function Install {
    Write-Host "FINAL FANTASY XIV: A Realm Reborn beta client, build 672261, into $InstallDir"
    New-Item -ItemType Directory -Force $InstallDir, (Join-Path $WorkDir "disc"), (Join-Path $WorkDir "patches\game") | Out-Null

    # 1, 2: the base install
    $root = Find-Install
    if ($root) {
        Step "an install is already at $root"
    } elseif ($BaseInstall) {
        Step "copying the disc install $BaseInstall"
        if ((Get-Content -LiteralPath (Join-Path $BaseInstall "game\ffxivgame.ver") -Raw).Trim() -ne $BaseVersion) {
            throw "$BaseInstall is not a fresh disc install (game $BaseVersion)"
        }
        robocopy $BaseInstall $InstallDir /E /NFL /NDL /NJH /NJS | Out-Null
        if ($LASTEXITCODE -ge 8) { throw "robocopy failed ($LASTEXITCODE)" }
        $root = $InstallDir
    } else {
        Step "the retail disc"
        $iso = Get-Download $Disc (Join-Path $WorkDir "disc") "MD5" $Disc.Md5
        Step "installing from the disc"
        Write-Host "    When the installer asks where to install, choose:" -ForegroundColor Yellow
        Write-Host "        $InstallDir" -ForegroundColor Yellow
        $image = Mount-DiskImage -ImagePath $iso -Access ReadOnly -PassThru
        try {
            $drive = ($image | Get-Volume).DriveLetter
            Start-Process -FilePath "${drive}:\ffxivsetup.exe" -WorkingDirectory "${drive}:\" -Wait
            # (the disc's launcher hands off to InstallShield: wait for every setup process)
            while (Get-Process -Name setup, ffxivsetup, ISBEW64, _ISDel -ErrorAction SilentlyContinue) { Start-Sleep -Seconds 2 }
        } finally {
            Dismount-DiskImage -ImagePath $iso | Out-Null
        }
        $root = Find-Install
        if (-not $root) { throw "no install found after the disc's installer (choose $InstallDir, or pass -BaseInstall with where it went)" }
        if ($root -ne $InstallDir) { Note "installed at $root; patching it there" }
    }
    $gameDir = Join-Path $root "game"
    $version = (Get-Content -LiteralPath (Join-Path $gameDir "ffxivgame.ver") -Raw).Trim()
    Note "game version $version"

    # 3, 4: the patches, in order
    if ($version -eq $FinalVersion) {
        Step "already patched to $FinalVersion"
    } else {
        if ($version -ne $BaseVersion -and $version -ne $Patches[0].Name.Substring(1, 20)) {
            throw "the install is at game $version; expected the disc's $BaseVersion"
        }
        foreach ($p in $Patches) {
            $v = $p.Name.Substring(1, $p.Name.Length - ".patch".Length - 1)
            $now = (Get-Content -LiteralPath (Join-Path $gameDir "ffxivgame.ver") -Raw).Trim()
            if ($now -eq $v) { Note "$($p.Name) already applied"; continue }
            Step "patch $($p.Name)"
            $path = Get-Download $p (Join-Path $WorkDir "patches\game") "SHA1" $p.Sha1
            $stats = [CrystalCoreInstaller.ZiPatch]::Apply($gameDir, $path, (New-Progress "Applying $($p.Name)"))
            Write-Progress -Id 1 -Activity "Applying $($p.Name)" -Completed
            # (the version file is the patch's name: the launcher writes it from the patch list)
            [IO.File]::WriteAllText((Join-Path $gameDir "ffxivgame.ver"), $v)
            Note "applied: $stats"
            Note "game version $v"
        }
    }

    # 5: checked
    Step "checking the result"
    $version = (Get-Content -LiteralPath (Join-Path $gameDir "ffxivgame.ver") -Raw).Trim()
    if ($version -ne $FinalVersion) { throw "ffxivgame.ver is $version, not $FinalVersion" }
    $sha = [CrystalCoreInstaller.Fetch]::Hash((Join-Path $gameDir "ffxiv.exe"), "SHA1", (New-Progress "Checking ffxiv.exe"))
    Write-Progress -Id 1 -Activity "Checking ffxiv.exe" -Completed
    if ($sha -ne $ExeSha1) { throw "ffxiv.exe SHA-1 $sha, expected $ExeSha1" }
    Write-Host "    ffxivgame.ver $version, ffxiv.exe $sha" -ForegroundColor Green

    Write-Host ""
    Write-Host "Done. The beta client is at $gameDir." -ForegroundColor Green
    Write-Host "It runs straight from ffxiv.exe (the boot updater never run), with the launcher's arguments"
    Write-Host "and the lobby on localhost:"
    Write-Host "    cd `"$gameDir`""
    Write-Host "    .\ffxiv.exe $LaunchArgs"
}

$failed = $false
try {
    Install
} catch {
    $failed = $true
    Write-Host ""
    Write-Host "Failed: $($_.Exception.Message)" -ForegroundColor Red
    Write-Host "Run it again to pick up where it stopped." -ForegroundColor Red
}
if (-not $NoPause) {
    Write-Host ""
    Read-Host "Press Enter to close" | Out-Null
}
if ($failed) { exit 1 }
