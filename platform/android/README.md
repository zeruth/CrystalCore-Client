# CrystalCore for Android

The Android app: an installer that builds game 2013.08.09.0001.0000 (build 672261) on the phone
from Square Enix's patch server, a launcher, and the game itself, run by `libcrystalcore.so` (the
translation plus Rhipper's `runtime32-posix`) inside Rhipper's reusable host activity.

Device target: arm64-v8a only, Android 12 (API 31) or newer. Developed against a Galaxy Z Fold
(SM-F976U): the game activity resizes its surface when the device folds, unfolds or rotates, and
is never recreated.

## Layout

| Where | What |
|---|---|
| `app/` | this app (`dev.crystalcore.client`): installer, launcher, `GameActivity` |
| `../../../Rhipper/android/host` | Rhipper's host module (`:rhipper-host`, `dev.rhipper.host`): `RhipperActivity`, controllers, logs, crash reports. Reusable by any Rhipper port |
| `../../../Rhipper/runtime32-posix/android_jni.c` | the JNI side of the host, compiled into `libcrystalcore.so` |
| `../../patches/game.json` | the patch list, bundled into the APK as an asset at build time |

Rhipper's host is found at `../../../Rhipper/android/host` (a Rhipper checkout beside this one).
Elsewhere, set `rhipper.dir` (the host module's folder) in `local.properties` or pass
`-Prhipper.dir=...`.

## Building

### 1. The native library

Built separately with the NDK and CMake (Gradle only packages it). It must contain:

- the translation (`src/gen/*.c`) and CrystalCore's own native code,
- Rhipper's `runtime32-posix`, which implements `rhipper_host.h`,
- `Rhipper/runtime32-posix/android_jni.c` (the `Java_dev_rhipper_host_RhipperNative_*` functions),

linked with `-landroid -llog`, for `arm64-v8a`, API 31, and placed at:

    app/src/main/jniLibs/arm64-v8a/libcrystalcore.so

For example, from a CMake build tree configured with the NDK's toolchain:

    cmake -G Ninja -S <native source dir> -B build-android ^
      -DCMAKE_TOOLCHAIN_FILE=%ANDROID_SDK%\ndk\28.2.13676358\build\cmake\android.toolchain.cmake ^
      -DANDROID_ABI=arm64-v8a -DANDROID_PLATFORM=android-31 -DCMAKE_BUILD_TYPE=RelWithDebInfo
    cmake --build build-android -j 2

NDK r28 links with 16 KB page alignment by default, which Android 15+ devices need for a library
loaded straight from the APK (it is stored uncompressed). The Gradle build strips debug symbols
when it packages the library; keep the unstripped one to symbolize tombstones.

### 2. The APK

Needs JDK 17+ (Android Studio's JBR 21 works) and the Android SDK with platform 36:

    set JAVA_HOME=C:\Users\tyler\AppData\Local\Programs\Android Studio\jbr
    gradlew assembleDebug
    adb install -r app\build\outputs\apk\debug\app-debug.apk

`local.properties` needs `sdk.dir=C\:\\Users\\tyler\\AppData\\Local\\Android\\Sdk` (Android
Studio writes it on import). The Gradle wrapper jar is not checked in: generate it once with
`gradle wrapper --gradle-version 8.14.3`, or let Android Studio do it.

## The installer

A port of `CrystalCore-Installer.ps1` without the disc: applying these seven patches in order to
an empty game folder reproduces the retail disc's install plus the two beta patches byte for
byte, `ffxiv.exe` included:

    D2013.06.29.0000.0000 .. D2013.06.29.0004.0000   (the disc's base, in five parts)
    D2013.08.09.0000.0000, D2013.08.09.0001.0000      (beta phase 4, build 672261)

About 10 GB in all, from `http://patch-dl.ffxiv.com/game/4e9a232b/` (plain HTTP, allowed for that
host only by `res/xml/network_security_config.xml`).

- **Patch list.** The latest `game.json` from CrystalCore's repository (the PS1's
  `$PatchListUrl`), cached; offline, the last cached one or the copy bundled at build time. The
  target version and `ffxiv.exe`'s SHA-1 always come from the bundled copy's `reference`: that is
  the build this APK's native library is of.
- **Where.** `getExternalFilesDir(null)/ffxiv/game` (that is
  `/sdcard/Android/data/dev.crystalcore.client/files/ffxiv/game`, reachable with adb, no storage
  permission), downloads in `.../ffxiv/downloads`, logs in `.../files/logs`.
- **Resumable.** `ffxivgame.ver` records the last patch applied, as the 2013 launcher's does:
  a patch is applied only to the version before it, and a run stopped anywhere resumes at the
  first patch not applied. Downloads resume with HTTP ranges; a lost network waits and resumes;
  a patch interrupted halfway is re-applied from its start (every write is to an absolute offset).
- **Checked.** Each download by size, and by SHA-1 where the list or the PS1 knows one (the two
  beta patches); every ZiPatch chunk by its CRC-32 while it is applied; finally `ffxiv.exe`'s
  SHA-1 against `reference.ffxiv_exe_sha1`.
- **Space.** Checked up front: the data still to install plus the download(s) on disk at once.
  Each patch file is deleted once applied unless *Keep the patch files* is ticked.
- **ZiPatch.** `ZiPatch.kt` is the PS1's C# applier line for line: FHDR/APLY/APFS/XXXX, ADIR,
  DELD, SQPK A/D/E/H/F(A,D,M,R)/T/X/I, the free-block header left by D/E, the dat/index naming
  (`sqpack/<ffxiv|exN>/<main><sub>.win32.dat<N>` / `.index<N>`), raw-deflate blocks (raw when
  csize is 32000), 128-byte block padding.
- **In the background.** A `dataSync` foreground service with a progress notification (Stop
  action), a partial wake lock for the whole run and a Wi-Fi lock while downloading. Android 15+
  gives such services 6 hours a day in the background; when that runs out the install pauses
  cleanly, and *Continue* in the app resumes it.

## The launcher and the game

*Play* starts `GameActivity` in its own `:game` process with `ref exe = <game>/ffxiv.exe`,
`cwd = <game>` and the PS1's `$LaunchArgs`, with the lobby server from the *Lobby server* field
(host:port, remembered) in `DEV.LobbyHost01/02` and `DEV.LobbyPort01/02`. 127.0.0.1 is the phone
itself, so point it at the machine running CrystalCore-Server.

In game: controllers map to XInput pads 0..3 (by connection order), rumble goes to the
controller's motors, back twice asks the game to close (WM_CLOSE). When the game exits, a dialog
gives the exit code and the log folder; if the process dies instead (native crash, ANR, killed for
memory), the launcher says so next time it opens and saves the tombstone to the logs. *Logs*
lists the log folder, shows the end of each file and shares it.

Logcat: `adb logcat -s rhipper CrystalCoreInstall`.
