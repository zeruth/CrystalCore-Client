plugins {
    id("com.android.application")
}

android {
    namespace = "dev.crystalcore.client"
    compileSdk = 37
    // the NDK installed here: AGP strips libcrystalcore.so's debug symbols with its llvm-strip
    ndkVersion = "28.2.13676358"

    defaultConfig {
        applicationId = "dev.crystalcore.client"
        minSdk = 31
        targetSdk = 37
        versionCode = 1
        versionName = "0.1 (game 2013.08.09.0001.0000)"
        // the translation is 32-bit x86 code turned into C, built for arm64 only
        ndk { abiFilters += "arm64-v8a" }
    }

    buildTypes {
        release {
            isMinifyEnabled = false
            // signed with the debug key until there is a release key
            signingConfig = signingConfigs.getByName("debug")
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }

    packaging {
        // stored uncompressed and mapped in place (the .so must be 16 KB aligned: NDK r28's default)
        jniLibs.useLegacyPackaging = false
    }
}

// patches/game.json, bundled as an asset: the patch list the installer falls back to offline, and
// the reference build (version, ffxiv.exe SHA-1) this app's libcrystalcore.so is of
abstract class CopyPatchList : DefaultTask() {
    @get:InputFile
    abstract val source: RegularFileProperty

    @get:OutputDirectory
    abstract val outputDir: DirectoryProperty

    @TaskAction
    fun copy() {
        val out = outputDir.get().asFile
        out.mkdirs()
        source.get().asFile.copyTo(File(out, "game.json"), overwrite = true)
    }
}

val copyPatchList = tasks.register<CopyPatchList>("copyPatchList") {
    source.set(rootProject.file("../../patches/game.json"))
}

androidComponents {
    onVariants { variant ->
        variant.sources.assets?.addGeneratedSourceDirectory(copyPatchList, CopyPatchList::outputDir)
    }
}

dependencies {
    implementation(project(":rhipper-host"))
}
