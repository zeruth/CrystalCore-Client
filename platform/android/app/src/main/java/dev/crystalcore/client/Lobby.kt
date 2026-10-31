package dev.crystalcore.client

/** The lobby server the client logs in through (DEV.LobbyHost01/02, DEV.LobbyPort01/02). */
data class Lobby(val host: String, val port: Int) {
    override fun toString() = if (':' in host) "[$host]:$port" else "$host:$port"

    companion object {
        /** "host", "host:port", "[ipv6]:port" or a bare IPv6 address; null when it is none of them. */
        fun parse(text: String): Lobby? {
            val s = text.trim()
            if (s.isEmpty() || s.any { it.isWhitespace() || it == '"' }) return null
            val (host, port) = when {
                s.startsWith("[") -> {
                    val end = s.indexOf(']')
                    if (end < 0) return null
                    val rest = s.substring(end + 1)
                    s.substring(1, end) to when {
                        rest.isEmpty() -> CrystalCore.LOBBY_PORT
                        rest.startsWith(":") -> rest.substring(1).toIntOrNull() ?: return null
                        else -> return null
                    }
                }
                s.count { it == ':' } == 1 -> s.substringBefore(':') to (s.substringAfter(':').toIntOrNull() ?: return null)
                else -> s to CrystalCore.LOBBY_PORT // a name, an IPv4 address or a bare IPv6 address
            }
            if (host.isEmpty() || port !in 1..65535) return null
            return Lobby(host, port)
        }
    }
}

/** The launcher's arguments ($LaunchArgs in CrystalCore-Installer.ps1), with the lobby and version filled in. */
fun launchArgs(version: String, lobby: Lobby): List<String> = listOf(
    "DEV.TestSID=0",
    "DEV.UseSqPack=1",
    "DEV.DataPathType=1",
    "DEV.LobbyHost01=${lobby.host}",
    "DEV.LobbyPort01=${lobby.port}",
    "DEV.LobbyHost02=${lobby.host}",
    "DEV.LobbyPort02=${lobby.port}",
    "SYS.Region=3",
    "language=1",
    "ver=$version",
)
