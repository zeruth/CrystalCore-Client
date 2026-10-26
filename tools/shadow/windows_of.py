"""windows_of.py PID: a process's top-level windows (class, title) and each dialog's text: what a
message box it shows says, read without touching it."""
import ctypes, sys
from ctypes import wintypes as W

u = ctypes.WinDLL("user32", use_last_error=True)
pid = int(sys.argv[1])
EnumProc = ctypes.WINFUNCTYPE(W.BOOL, W.HWND, W.LPARAM)


def text(h):
    n = u.GetWindowTextLengthW(h)
    b = ctypes.create_unicode_buffer(n + 1)
    u.GetWindowTextW(h, b, n + 1)
    return b.value


def cls(h):
    b = ctypes.create_unicode_buffer(256)
    u.GetClassNameW(h, b, 256)
    return b.value


def top(h, _):
    p = W.DWORD()
    u.GetWindowThreadProcessId(h, ctypes.byref(p))
    if p.value == pid and u.IsWindowVisible(h):
        print(f"{h:#x} [{cls(h)}] {text(h)!r}")
        if cls(h) == "#32770":
            def child(c, _):
                t = text(c)
                if t:
                    print(f"    [{cls(c)}] {t!r}")
                return True
            u.EnumChildWindows(h, EnumProc(child), 0)
    return True


u.EnumWindows(EnumProc(top), 0)
