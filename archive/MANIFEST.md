# Archive manifest

Game files are kept here for local work only; nothing under `archive/` is to be committed.

## Sources

| item | size | sha1 / md5 | from |
|---|---|---|---|
| `disc/U13002W_001_D01(ARR).iso` | 7,414,087,680 | md5 `a0542ae2c37865b1aa92c6563ce42467` | archive.org `u-13002-w-001-d-01-arr` (retail PC disc, mastered 07/04/2013) |
| `patches/boot/D2013.06.18.0000.0000.patch` | 1,742,552 | `2e4c51895300e152fc7029e3d77c4576b692065d` | `patch-dl.ffxiv.com/boot/2b5cbc63/` |
| `patches/game/D2013.08.09.0000.0000.patch` | 1,499,488,272 | `6add155dcb1cc5f537475d374bb1e2aab866925a` | `patch-dl.ffxiv.com/game/4e9a232b/` |
| `patches/game/D2013.08.09.0001.0000.patch` | 1,104,799,732 | `57e3bcd92c0d57883e4ef277e113ecb0aac247cb` | `patch-dl.ffxiv.com/game/4e9a232b/` |

The disc installs game `2013.06.29.0004.0000`, boot `2013.06.18.0000.0000`, and no `ffxiv.exe`:
the first game patch supplies it.

## Installs

| folder | game version | built from |
|---|---|---|
| `C:\FFXIV_PRERELEASE\SquareEnix\FINAL FANTASY XIV - A Realm Reborn` | 2013.06.29.0004.0000 | the disc (installed by hand; kept pristine) |
| `installs/beta-672261` | 2013.08.09.0001.0000 (build 672261) — **the ARR β (beta) client, not 2.0 launch** | the disc + both D2013.08.09 parts (`tools/zipatch.py`), `tools/sqpack_verify.py` clean |

The β client runs straight from `ffxiv.exe` (the boot/updater never run, so nothing updates)
with the launcher's arguments and the lobby pointed at localhost:
`"DEV.TestSID=0" "DEV.UseSqPack=1" "DEV.DataPathType=1" "DEV.LobbyHost01=127.0.0.1" "DEV.LobbyPort01=54994" "DEV.LobbyHost02=127.0.0.1" "DEV.LobbyPort02=54994" "SYS.Region=3" "language=1" "ver=2013.08.09.0001.0000"`.
Title screen: "A Realm Reborn β VERSION", "Version: 2013.08.09.0001.0000 (672261)". With no lobby it
retries every 2 s (664-byte requests carrying "Test Ticket Data") and closes with a lobby error.

`installs/beta-672261/game/ffxiv.exe`: x86, linked 2013-08-08 19:08:35 UTC, sha1
`dcd3d87c545c20fab5ad6f7039f4e3ca3cb02948`.

## What the patch server still has (2013-2015)

`patch-dl.ffxiv.com` serves files no longer in any patch list (404 for names that do not
exist). Probed with HEAD requests:

- 2013-07-01 .. 2015-05-20, suffixes `.0000.0000` and `.0000.0001` (stopped around mid 2014)
- 2013-08-01 .. 2013-09-10, parts `0000`-`0005` x revisions `0000`-`0003`

Found: `D2013.08.09.0000.0000`, `D2013.08.09.0001.0000`, `D2013.12.05.0000.0000` (1,499,965,706),
`D2014.05.27.0000.0000` (1,354,814,256). All carry `Last-Modified` in December 2023, a re-upload.
Nothing else exists between 2013-08-01 and 2013-09-10 in that name space.

## Patch names

A patch's name is its target version, `D<yyyy.mm.dd.pppp.rrrr>.patch`; the version file is
written by the launcher from that name, not by the patch. Large patches split into parts
(`pppp` = 0000, 0001, ...). The 2013 updater takes names and URLs from the server's
`multipart/mixed` patch list (`ffxivupdater.exe` 0x423480, 0x4090a0); it builds none itself.
