pluginManagement {
    repositories {
        google()
        mavenCentral()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google()
        mavenCentral()
    }
}

rootProject.name = "CrystalCore"
include(":app")

// Rhipper's reusable Android host (Rhipper/android/host), from a Rhipper checkout beside this one
// unless -Prhipper.dir=... or local.properties' rhipper.dir says where.
val localProperties = java.util.Properties().apply {
    val f = file("local.properties")
    if (f.isFile) f.inputStream().use { load(it) }
}
val rhipperHostDir = providers.gradleProperty("rhipper.dir").orNull
    ?: localProperties.getProperty("rhipper.dir")
    ?: "../../../Rhipper/android/host"
include(":rhipper-host")
project(":rhipper-host").projectDir = file(rhipperHostDir)
