"""Accept connections on the lobby port, never answer, and log what the client sends.

    python tools/lobby_sink.py [port] [log file]

Keeps the 2013 client from timing out its lobby connection, and captures its first packets.
"""
import datetime, socket, sys, threading

port = int(sys.argv[1]) if len(sys.argv) > 1 else 54994
log = open(sys.argv[2] if len(sys.argv) > 2 else "build/lobby_sink.log", "a")


def out(msg):
    line = f"{datetime.datetime.now():%H:%M:%S} {msg}"
    print(line, flush=True)
    log.write(line + "\n")
    log.flush()


def serve(conn, addr):
    out(f"connect {addr}")
    with conn:
        while True:
            data = conn.recv(65536)
            if not data:
                break
            out(f"{addr} {len(data)} bytes: {data[:256].hex()}")
    out(f"closed {addr}")


s = socket.socket()
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.bind(("127.0.0.1", port))
s.listen()
out(f"listening on 127.0.0.1:{port}")
while True:
    c, a = s.accept()
    threading.Thread(target=serve, args=(c, a), daemon=True).start()
