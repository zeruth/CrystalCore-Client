"""Names for the client's functions from Claude, through the Message Batches API (your API key's
credits, half price), grouped by subsystem so each request sees a module's functions together.

    python tools/llm_names.py plan [--subsystems graphics,os,net]   free: label, chunk, estimate
    python tools/llm_names.py submit --max-cost 5 [--subsystems ...] [--limit N] [--dry-run]
    python tools/llm_names.py status                                poll the submitted batches
    python tools/llm_names.py collect                               download results, actual cost
    python tools/llm_names.py merge [--min-confidence medium] [--structs]

Subsystems come from the RTTI namespaces (Client::Graphics, Apricot -> graphics; Client::System
-> os; Application::Network -> net, ...), the Win32/D3D/winsock/Lua calls a function makes, and
then the call graph and address order (MSVC links each .obj contiguously): an unlabelled function
takes its neighbours' label. Each subsystem's unnamed functions, in address order, are cut into
requests of about 60k characters of Ghidra C, with the names already known (data/names.json, the
RTTI's, earlier rounds' data/names_llm.json) of everything they call and are called by.

merge writes data/names_llm.json (and with --structs data/structs_llm.json); ApplyFacts applies
them after the RTTI names and before the hand names, which win. Rerun plan/submit after a merge
and a Ghidra apply: the next round sees this round's names.

State is in build/llm/. Needs ANTHROPIC_API_KEY and `pip install anthropic`.
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
BUILD = ROOT / "build"
STATE = BUILD / "llm"
CORPUS = BUILD / "corpus.jsonl"
FACTS = BUILD / "facts"
NAMES = ROOT / "data" / "names.json"
STRUCTS = ROOT / "data" / "structs.json"
NAMES_LLM = ROOT / "data" / "names_llm.json"
STRUCTS_LLM = ROOT / "data" / "structs_llm.json"

MODEL = "claude-opus-5-5"
# Batch API prices for Claude Opus 5.5, $ per million tokens (half the standard rates)
PRICE_IN, PRICE_OUT, PRICE_CACHE_WRITE, PRICE_CACHE_READ = 2.0, 10.0, 2.5, 0.10

PRIORITY = ["graphics", "os", "net", "lua", "sound", "world", "ui", "game", "net-work", "misc"]
CHUNK_CHARS, CHUNK_MAX, BIG_FN = 60_000, 40, 120_000

# full name -> subsystem, first match wins; "lib" is never named (CRT, STL, Havok)
NS_RULES = [
    (r"^Client::Graphics|^Apricot::|^Client::System::Animation", "graphics"),
    (r"^Client::System::Scheduler", "game"),
    (r"^Client::System", "os"),
    (r"^Application::Network::WorkDefinitions", "net-work"),
    (r"^Application::Network|^Client::Network|^Component::ServerFramework", "net"),
    (r"^Common::Lua|^Client::System::Resource::Handle::Luab?Resource", "lua"),
    (r"^Client::Sound|^SQEX::CDev", "sound"),
    (r"^Client::LayoutEngine", "world"),
    (r"^Client::UI|^Component::GUI2|^Component::Text", "ui"),
    (r"^Client::Game|^Common::|^Component::Exd|^Component::Excel", "game"),
    (r"^std::|^stdext::|^hk|^LOCALNAMESPACE|^FID_conflict|^Unwind@|^_|^operator|^collate<", "lib"),
]
# calls that mark a function's subsystem (sync primitives and string conversion are everywhere, left out)
API_RULES = [
    ("graphics", r"\b(?:Direct3DCreate9\w*|D3DX\w+|D3DPERF_\w+|CreateDXGIFactory\w*|D3D\w+)\("),
    ("net", r"\b(?:WSA\w+|socket|connect|recv|recvfrom|send|sendto|select|getaddrinfo|freeaddrinfo|"
            r"gethostbyname|inet_\w+|htons|ntohs|htonl|ntohl|closesocket|ioctlsocket|setsockopt|getsockopt|"
            r"bind|listen|accept|Internet\w+|Http\w+|WinHttp\w+)\("),
    ("os", r"\b(?:CreateFile\w*|ReadFile\w*|WriteFile\w*|SetFilePointer\w*|GetFileSize\w*|FindFirstFile\w*|"
           r"FindNextFile\w*|CreateDirectory\w*|GetFileAttributes\w*|DeleteFile\w*|CreateThread|_beginthreadex|"
           r"ResumeThread|SetThreadPriority|SetThreadAffinityMask|Sleep|SleepEx|QueryPerformance\w+|timeGetTime|"
           r"timeBeginPeriod|timeSetEvent|GetTickCount|VirtualAlloc|VirtualFree|VirtualProtect|HeapAlloc|HeapFree|"
           r"HeapCreate|LoadLibrary\w*|GetProcAddress|GetModule\w+|Reg\w*Key\w*|RegQueryValue\w*|CreateWindow\w*|"
           r"RegisterClass\w*|PeekMessage\w*|GetMessage\w*|DispatchMessage\w*|TranslateMessage|DefWindowProc\w*|"
           r"ShowWindow|SetWindow\w+|GetWindow\w+|AdjustWindowRect\w*|GetClientRect|SetCursor\w*|ShowCursor|"
           r"ClipCursor|GetCursorPos|ScreenToClient|ClientToScreen|GetKeyState|GetAsyncKeyState|DirectInput\w+|"
           r"XInput\w+|SHGet\w+|CoCreateInstance|CoInitialize\w*|GetSystemInfo|GlobalMemoryStatus\w*|"
           r"MessageBox\w*|CreateMutex\w*|CreateSemaphore\w*|WaitForMultipleObjects|Imm[GS]et\w+|"
           r"OpenClipboard|GetClipboardData|SetClipboardData|GetCommandLine\w*)\("),
    ("lua", r"\blua[LVDGHS]?_\w+\(|\.lua\""),
]
# classes deriving from one base with the same vtable: a few are sent, their slot names copied
SLOT_FAMILIES = {"Application::Network::WorkDefinitions::": 4}

FUN = re.compile(r"\bFUN_([0-9a-f]{8})\b")
VFTABLE = re.compile(r"([A-Za-z_][\w:]*)::vftable")
VF = re.compile(r"::vf\d+$")
IDENT = re.compile(r"^[A-Za-z_][A-Za-z0-9_]{1,63}$")


# ---------------------------------------------------------------- the corpus and what is known

def load_corpus() -> dict[int, dict]:
    fns = {}
    with CORPUS.open(encoding="utf-8") as f:
        for line in f:
            o = json.loads(line)
            if "c" not in o:
                continue
            a = int(o["addr"], 16)
            fns[a] = {"name": o["name"], "size": int(o["size"]), "c": o["c"].replace("\r\n", "\n"),
                      "g": json.loads(o["g"].replace("'", '"')) if isinstance(o.get("g"), str) else o.get("g") or {}}
    return fns


def load_known() -> dict[int, dict]:
    """address -> {"name", "ns", "evidence", "by"}: the hand names and earlier rounds' (hand win)."""
    known = {}
    for path, by in ((NAMES_LLM, "llm"), (NAMES, "hand")):
        if path.exists():
            for k, v in json.loads(path.read_text(encoding="utf-8"))["functions"].items():
                known[int(k, 16)] = {**v, "by": by}
    return known


def display(a: int, fns, known) -> str:
    if a in known:
        k = known[a]
        return f"{k['ns']}::{k['name']}" if k.get("ns") else k["name"]
    return fns[a]["name"] if a in fns else f"FUN_{a:08x}"


def call_graph(fns):
    callees = {}
    for a, f in fns.items():
        out = {int(k, 16) for k in f["g"]} | {int(m, 16) for m in FUN.findall(f["c"])}
        callees[a] = {b for b in out if b in fns and b != a}
    callers = defaultdict(set)
    for a, out in callees.items():
        for b in out:
            callers[b].add(a)
    return callees, callers


# ---------------------------------------------------------------- subsystems

def label(fns, known, callees, callers, srcrefs) -> dict[int, str]:
    lab = {}
    ns_rules = [(re.compile(p), s) for p, s in NS_RULES]
    api_rules = [(s, re.compile(p)) for s, p in API_RULES]

    def by_ns(name):
        return next((s for rx, s in ns_rules if rx.search(name)), None)

    for a, f in fns.items():
        s = by_ns(display(a, fns, known))
        if s:
            lab[a] = s
            continue
        src = " ".join(srcrefs.get(a, ()))
        if "XA2/" in src or "cdev_sd" in src:
            lab[a] = "sound"
        elif re.search(r"(^|/)hk|Animation/|Havok", src):
            lab[a] = "lib"
        else:
            # a vftable it stores or compares: a constructor, destructor or method of that class
            hits = Counter(s for m in VFTABLE.findall(f["c"]) if (s := by_ns(m)))
            if not hits:
                hits = Counter(s for s, rx in api_rules for _ in rx.finditer(f["c"]))
            if hits:
                lab[a] = hits.most_common(1)[0][0]
    order = sorted(fns)
    pos = {a: i for i, a in enumerate(order)}
    # utility functions called from everywhere say nothing about their callers' module
    voters_ok = {a for a in fns if len(callers.get(a, ())) <= 50}
    for _ in range(25):
        new = {}
        for a in fns:
            if a in lab:
                continue
            votes = Counter()
            for b in callees[a] | callers.get(a, set()):
                if b in voters_ok and lab.get(b, "lib") != "lib":
                    votes[lab[b]] += 1
            i = pos[a]
            for j in (i - 1, i + 1):
                if 0 <= j < len(order) and lab.get(order[j], "lib") != "lib":
                    votes[lab[order[j]]] += 1
            if votes:
                s, n = votes.most_common(1)[0]
                if n >= 0.6 * sum(votes.values()):
                    new[a] = s
        if not new:
            break
        lab.update(new)
    for a in fns:
        lab.setdefault(a, "misc")
    return lab


def targets(fns, known, lab, shared_slots) -> list[int]:
    out = []
    for a, f in fns.items():
        if a in known or lab[a] == "lib" or shared_slots.get(a, 0) > 2:
            continue
        name = f["name"]
        if name.startswith("FUN_") and f["size"] >= 8:
            out.append(a)
        elif (VF.search(name) or "::FUN_" in name) and f["size"] >= 4:
            out.append(a)
    return out


def slot_family(name: str):
    for prefix in SLOT_FAMILIES:
        if name.startswith(prefix) and VF.search(name):
            return prefix
    return None


# ---------------------------------------------------------------- chunks and requests

def chunks(fns, lab, tgts) -> list[dict]:
    by_sub = defaultdict(list)
    for a in tgts:
        by_sub[lab[a]].append(a)
    # slot families: only the first few classes (by address) are sent
    for prefix, keep in SLOT_FAMILIES.items():
        classes = defaultdict(list)
        for a in sorted(tgts):
            if fns[a]["name"].startswith(prefix):
                classes[fns[a]["name"].rsplit("::", 1)[0]].append(a)
        drop = {a for c in list(classes)[keep:] for a in classes[c]}
        for s in by_sub:
            by_sub[s] = [a for a in by_sub[s] if a not in drop]
    out = []
    for sub in PRIORITY:
        cur, chars, last = [], 0, None
        for a in sorted(by_sub.get(sub, ())):
            n = min(len(fns[a]["c"]), BIG_FN)
            gap = last is not None and a - last > 0x4000 and len(cur) >= 20
            if cur and (chars + n > CHUNK_CHARS or len(cur) >= CHUNK_MAX or gap):
                out.append({"sub": sub, "addrs": cur})
                cur, chars = [], 0
            cur.append(a)
            chars += n
            last = a
        if cur:
            out.append({"sub": sub, "addrs": cur})
    for c in out:
        c["id"] = f"{c['sub']}-{c['addrs'][0]:x}-{c['addrs'][-1]:x}"
    return out


def system_prompt() -> str:
    names = json.loads(NAMES.read_text(encoding="utf-8"))["functions"]
    examples = "\n".join(f'  "{k}": {json.dumps(v)}' for k, v in list(names.items())[:40])
    structs = STRUCTS.read_text(encoding="utf-8")
    return f"""You are reverse engineering ffxiv.exe, the Final Fantasy XIV: A Realm Reborn client of the 2013 beta (build 2013.08.09), a 32-bit x86 Windows program built with Visual Studio 2010. The project recompiles it to C and will later port it to Vulkan and Android, so the graphics (Direct3D 9, the Apricot engine), OS (Win32 windowing, input, files, threads, memory) and network (winsock, the lobby/zone/chat protocol channels) code matter most.

Each request gives you a group of functions from one subsystem, in address order (the linker keeps each source file's functions together, so neighbours usually share a class or file), as Ghidra decompiles them, and the known names of what they call and what calls them. Name every function you are asked about.

Names:
- CamelCase verbs for what the function does (ReadServerList, SetWeather, GetQuestSequence). A constructor is named after its class; a destructor ~Class; the MSVC scalar deleting destructor (calls the destructor, then operator delete when bit 0 of its flag is set) is "ScalarDeletingDestructor".
- "ns" is the C++ namespace and class, "::"-separated, when the function is a method. A function listed as Class::vfN is virtual slot N of that class: keep its namespace and give it a method name, and name overrides of a base's slot alike. Leave "ns" empty for a free function or when the class is unknown.
- Never reuse a C runtime, STL or Win32 API name for a game function.
- "evidence" is one or two sentences of facts a reviewer can check in the code: what it reads and writes (offsets as @0x10), constants, the calls it makes, who calls it and how. No speculation in the evidence: if the purpose is a guess, say what is known and lower the confidence.
- "confidence": high when the code shows it (an API call's meaning, a string, a protocol opcode, a known caller's use), medium for a strong inference from structure and neighbours, low for a guess. Low is fine; a wrong high is not.

Structures: when several of the functions are methods of one class and its fields can be read off them, give the class's layout under its bare class name (the last part of its namespace), fields as name, byte offset and type. Types: int, uint, short, ushort, char, byte, bool, float, double, wchar_t, void *, "T *" for another struct, and T[n] arrays. Only fields the code shows; the size is the smallest the code proves (the allocation size where the constructor's caller shows it). Omit structs you cannot support.

The project's hand-identified names, the style to follow:
{{
{examples}
}}

The hand-written structure layouts:
{structs}
"""


SCHEMA = {
    "type": "object",
    "additionalProperties": False,
    "required": ["notes", "functions", "structs"],
    "properties": {
        "notes": {"type": "string"},
        "functions": {"type": "array", "items": {
            "type": "object", "additionalProperties": False,
            "required": ["addr", "name", "ns", "evidence", "confidence"],
            "properties": {
                "addr": {"type": "string"}, "name": {"type": "string"}, "ns": {"type": "string"},
                "evidence": {"type": "string"},
                "confidence": {"type": "string", "enum": ["high", "medium", "low"]}}}},
        "structs": {"type": "array", "items": {
            "type": "object", "additionalProperties": False,
            "required": ["name", "size", "evidence", "fields"],
            "properties": {
                "name": {"type": "string"}, "size": {"type": "integer"}, "evidence": {"type": "string"},
                "fields": {"type": "array", "items": {
                    "type": "object", "additionalProperties": False,
                    "required": ["name", "offset", "type"],
                    "properties": {"name": {"type": "string"}, "offset": {"type": "integer"},
                                   "type": {"type": "string"}}}}}}},
    },
}


def user_prompt(chunk, fns, known, callees, callers) -> str:
    addrs = chunk["addrs"]
    inside = set(addrs)
    parts = [f"Subsystem (by namespace, calls and neighbours): {chunk['sub']}\n", "## Functions to name\n"]
    referenced = set()
    for a in addrs:
        f = fns[a]
        cs = sorted(callers.get(a, set()) - inside)
        named_cs = [b for b in cs if not display(b, fns, known).startswith("FUN_")]
        shown = ", ".join(f"0x{b:x} {display(b, fns, known)}" for b in named_cs[:8])
        more = len(cs) - min(len(named_cs), 8)
        code = f["c"]
        if len(code) > BIG_FN:
            code = code[:BIG_FN] + f"\n/* [the remaining {len(f['c']) - BIG_FN} characters of this function are left out] */\n"
        parts.append(f"### 0x{a:x}  {f['name']}  ({f['size']} bytes)\n"
                     f"called by: {shown or '-'}{f' and {more} unnamed' if more > 0 else ''}\n```c\n{code.strip()}\n```\n")
        referenced |= callees[a] - inside
    table = []
    for b in sorted(referenced):
        if b in known or not fns[b]["name"].startswith("FUN_"):
            ev = known.get(b, {}).get("evidence", "")
            table.append(f"FUN_{b:08x} = {display(b, fns, known)}" + (f" -- {ev[:160]}" if ev else ""))
    if table:
        parts.append("## Known names of the functions they call\n" + "\n".join(table[:200]) + "\n")
    parts.append(f"Name all {len(addrs)} functions above (addr as 0x...).")
    return "\n".join(parts)


def estimate(sys_chars: int, user: str, n: int) -> float:
    tin = (sys_chars + len(user)) / 3.0
    tout = 3000 + 150 * n
    return (tin * PRICE_IN + tout * PRICE_OUT) / 1e6


# ---------------------------------------------------------------- commands

def client():
    """The API client; the key from the environment, else the Windows user environment (setx)."""
    import os
    import anthropic
    key = os.environ.get("ANTHROPIC_API_KEY")
    if not key and sys.platform == "win32":
        import winreg
        try:
            with winreg.OpenKey(winreg.HKEY_CURRENT_USER, "Environment") as k:
                key = winreg.QueryValueEx(k, "ANTHROPIC_API_KEY")[0]
        except OSError:
            pass
    if not key:
        sys.exit("no ANTHROPIC_API_KEY: run `setx ANTHROPIC_API_KEY sk-ant-...` in a terminal of your own")
    return anthropic.Anthropic(api_key=key)


def build_plan(subs: list[str] | None):
    fns = load_corpus()
    known = load_known()
    callees, callers = call_graph(fns)
    sr = json.loads((FACTS / "srcrefs.json").read_text(encoding="utf-8"))["functions"]
    srcrefs = {int(k, 16): json.loads(v.replace("'", '"')) if isinstance(v, str) else v for k, v in sr.items()}
    vt = json.loads((FACTS / "vtables.json").read_text(encoding="utf-8"))
    shared = {int(k, 16): int(v) for k, v in vt.get("shared_slots", {}).items()}
    lab = label(fns, known, callees, callers, srcrefs)
    done = proposed_addrs()
    tgts = [a for a in targets(fns, known, lab, shared) if a not in done]
    cs = chunks(fns, lab, tgts)
    # (what is left to name, every subsystem: the report's progress)
    STATE.mkdir(parents=True, exist_ok=True)
    (STATE / "remaining.json").write_text(json.dumps(Counter(c["sub"] for c in cs for _ in c["addrs"])))
    if subs:
        cs = [c for c in cs if c["sub"] in subs]
    return fns, known, callees, callers, lab, cs


def proposed_addrs() -> set[int]:
    out = set()
    for p in (STATE / "results").glob("*.jsonl") if (STATE / "results").exists() else ():
        for line in p.open(encoding="utf-8"):
            r = json.loads(line)
            out |= {int(f["addr"], 16) for f in r.get("functions", []) if re.match(r"^0x[0-9a-f]+$", f["addr"])}
    return out


def ledger() -> dict:
    p = STATE / "ledger.json"
    return json.loads(p.read_text()) if p.exists() else {"batches": []}


def save_ledger(l: dict) -> None:
    (STATE / "ledger.json").write_text(json.dumps(l, indent=1))


def cmd_plan(args):
    fns, known, callees, callers, lab, cs = build_plan(args.subsystems)
    sp = len(system_prompt())
    counts = Counter(lab.values())
    print("functions by subsystem:", ", ".join(f"{s} {counts[s]}" for s in PRIORITY + ["lib"]))
    rows = defaultdict(lambda: [0, 0, 0.0])
    for c in cs:
        r = rows[c["sub"]]
        r[0] += 1
        r[1] += len(c["addrs"])
        r[2] += estimate(sp, user_prompt(c, fns, known, callees, callers), len(c["addrs"]))
    total = 0.0
    print(f"{'subsystem':10} {'requests':>8} {'functions':>9} {'est $':>8} {'cumul $':>8}")
    for s in PRIORITY:
        if s in rows:
            total += rows[s][2]
            print(f"{s:10} {rows[s][0]:8} {rows[s][1]:9} {rows[s][2]:8.2f} {total:8.2f}")
    STATE.mkdir(parents=True, exist_ok=True)
    (STATE / "plan.json").write_text(json.dumps(cs))
    if args.show:
        c = next(c for c in cs if c["id"] == args.show or c["sub"] == args.show)
        out = STATE / f"request-{c['id']}.md"
        out.write_text(system_prompt() + "\n\n=====\n\n" + user_prompt(c, fns, known, callees, callers), encoding="utf-8")
        print("wrote", out)


def cmd_submit(args):
    fns, known, callees, callers, lab, cs = build_plan(args.subsystems)
    l = ledger()
    pending = {cid for b in l["batches"] if not b.get("collected") for cid in b["chunks"]}
    cs = [c for c in cs if c["id"] not in pending]
    sp = system_prompt()
    reqs, cost = [], 0.0
    for c in cs[: args.limit or None]:
        up = user_prompt(c, fns, known, callees, callers)
        e = estimate(len(sp), up, len(c["addrs"]))
        if cost + e > args.max_cost:
            break
        cost += e
        params = {
            "model": MODEL,
            "max_tokens": 32000,
            "system": [{"type": "text", "text": sp, "cache_control": {"type": "ephemeral"}}],
            "messages": [{"role": "user", "content": up}],
            "output_config": {"effort": args.effort, "format": {"type": "json_schema", "schema": SCHEMA}},
        }
        # (no server-side fallback: batches reject `fallbacks`; collect counts the refusals)
        reqs.append({"custom_id": c["id"], "params": params})
    spent = sum(b.get("actual", b["estimate"]) for b in l["batches"])
    print(f"{len(reqs)} requests, {sum(len(c['addrs']) for c in cs[:len(reqs)])} functions, "
          f"estimated ${cost:.2f} (submitted so far ${spent:.2f})")
    if not reqs:
        return
    if args.dry_run:
        (STATE / "dry-run.json").write_text(json.dumps(reqs[0], indent=1))
        print("wrote", STATE / "dry-run.json")
        return
    api = client()
    batch = api.messages.batches.create(requests=reqs)
    l["batches"].append({"id": batch.id, "chunks": [r["custom_id"] for r in reqs], "estimate": round(cost, 4)})
    save_ledger(l)
    print("submitted", batch.id)


def cmd_status(args):
    api = client()
    for b in ledger()["batches"]:
        if b.get("collected"):
            print(b["id"], "collected", f"${b.get('actual', 0):.2f}")
            continue
        r = api.messages.batches.retrieve(b["id"])
        print(b["id"], r.processing_status, r.request_counts)


def cmd_collect(args):
    api = client()
    l = ledger()
    (STATE / "results").mkdir(parents=True, exist_ok=True)
    for b in l["batches"]:
        if b.get("collected"):
            continue
        if api.messages.batches.retrieve(b["id"]).processing_status != "ended":
            print(b["id"], "not ended yet")
            continue
        cost, ok, bad = 0.0, 0, Counter()
        with (STATE / "results" / f"{b['id']}.jsonl").open("w", encoding="utf-8") as out:
            for r in api.messages.batches.results(b["id"]):
                if r.result.type != "succeeded":
                    bad[r.result.type] += 1
                    continue
                m = r.result.message
                u = m.usage
                cost += (u.input_tokens * PRICE_IN + (u.cache_creation_input_tokens or 0) * PRICE_CACHE_WRITE
                         + (u.cache_read_input_tokens or 0) * PRICE_CACHE_READ + u.output_tokens * PRICE_OUT) / 1e6
                if m.stop_reason != "end_turn":
                    bad[m.stop_reason] += 1
                    continue
                text = next((c.text for c in m.content if c.type == "text"), "")
                try:
                    data = json.loads(text)
                except json.JSONDecodeError:
                    bad["bad json"] += 1
                    continue
                data["chunk"] = r.custom_id
                data["model"] = m.model
                out.write(json.dumps(data) + "\n")
                ok += 1
        b["collected"], b["actual"] = True, round(cost, 4)
        print(b["id"], f"{ok} ok", dict(bad), f"${cost:.2f} (estimated ${b['estimate']:.2f})")
    save_ledger(l)
    print(f"total spent ${sum(b.get('actual', 0) for b in l['batches']):.2f}")


PRIM = {"int": 4, "uint": 4, "short": 2, "ushort": 2, "char": 1, "byte": 1, "bool": 1, "float": 4,
        "double": 8, "wchar_t": 2}


def type_size(t: str, structs: set[str]) -> int | None:
    t = t.strip()
    m = re.fullmatch(r"(.+?)\s*\[(\d+)\]", t)
    if m:
        el = type_size(m.group(1), structs)
        return el * int(m.group(2)) if el else None
    if t.endswith("*"):
        base = t[:-1].strip()
        return 4 if base == "void" or base in PRIM or base in structs or base.endswith("*") else None
    return PRIM.get(t)


def cmd_merge(args):
    fns = load_corpus()
    hand = json.loads(NAMES.read_text(encoding="utf-8"))["functions"]
    hand_addrs = {int(k, 16) for k in hand}
    # Rhipper's translator resolves a call by its printed name before an import's, and a bare name
    # anywhere as a function's address: so no name the program already has (runtime, STL), nothing
    # it calls by name (imports, the decompiler's CONCAT/SQRT macros), no type it casts to, and no
    # C keyword
    reserved = {f["name"].rsplit("::", 1)[-1] for f in fns.values()
                if not f["name"].startswith("FUN_") and not VF.search(f["name"])}
    for f in fns.values():
        reserved.update(m for m in re.findall(r"(?<![\w:])([A-Za-z_]\w*)\s*\(", f["c"]) if not m.startswith("FUN_"))
        reserved.update(re.findall(r"\(\s*(?:const\s+)?([A-Za-z_]\w*)\s*\*+\s*\)", f["c"]))
    reserved |= {"this", "if", "else", "while", "for", "do", "switch", "case", "default", "return", "break",
                 "continue", "goto", "sizeof", "void", "int", "char", "short", "long", "float", "double",
                 "signed", "unsigned", "struct", "union", "enum", "const", "volatile", "static", "extern",
                 "typedef", "code", "bool", "true", "false", "NULL"}
    unsafe_prefix = ("FUN_", "vf", "sub_", "F_", "gen_", "GEN_", "REF", "LAB_", "DAT_", "PTR_", "UNK_",
                     "s_", "u_", "ws_", "switchdata", "thunk_", "local_", "param_", "in_", "unaff_", "extraout_")
    rtti_ns = {f["name"].rsplit("::", 1)[0] for f in fns.values() if "::" in f["name"]}
    rank = {"low": 0, "medium": 1, "high": 2}
    floor = rank[args.min_confidence]
    out, structs_out, skipped = {}, {}, Counter()
    rtti_class = {f["name"].rsplit("::", 1)[0] for f in fns.values() if VF.search(f["name"])}
    bare = Counter(c.rsplit("::", 1)[-1] for c in rtti_class)
    for p in sorted((STATE / "results").glob("*.jsonl")):
        for line in p.open(encoding="utf-8"):
            r = json.loads(line)
            for f in r["functions"]:
                try:
                    a = int(f["addr"], 16)
                except ValueError:
                    skipped["bad addr"] += 1
                    continue
                cur = fns[a]["name"] if a in fns else ""
                if a in hand_addrs or not (cur.startswith("FUN_") or VF.search(cur) or "::FUN_" in cur):
                    skipped["not a target"] += 1
                    continue
                if rank[f["confidence"]] < floor:
                    skipped["confidence"] += 1
                    continue
                name = f["name"].strip()
                if not IDENT.match(name) and not (name.startswith("~") and IDENT.match(name[1:])):
                    skipped["bad name"] += 1
                    continue
                if name.lstrip("~") in reserved or name.startswith(unsafe_prefix):
                    skipped["reserved name"] += 1
                    continue
                ns = cur.rsplit("::", 1)[0] if VF.search(cur) or "::FUN_" in cur else f["ns"].strip()
                # (a namespace the translator cannot read back, a template's, only where the program
                # already has it; an invented one is left out)
                if ns and not re.fullmatch(r"[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*", ns) and ns not in rtti_ns:
                    skipped["template namespace dropped"] += 1
                    ns = ""
                e = {"name": name}
                if ns:
                    e["ns"] = ns
                e["evidence"] = f"({f['confidence']}) " + f["evidence"].strip()
                e["confidence"] = f["confidence"]
                e["chunk"] = r["chunk"]
                out[a] = e
            for s in r.get("structs", []):
                structs_out.setdefault(s["name"], (s, r["chunk"]))
    # slot families: a representative's slot name for every sibling's same slot
    copied = 0
    for prefix in SLOT_FAMILIES:
        slot_names = {}
        for a, e in out.items():
            n = fns[a]["name"]
            if n.startswith(prefix) and VF.search(n):
                slot_names.setdefault(n.rsplit("::", 1)[1], e)
        for a, f in fns.items():
            n = f["name"]
            if a in out or a in hand_addrs or not n.startswith(prefix) or not VF.search(n):
                continue
            src = slot_names.get(n.rsplit("::", 1)[1])
            if src:
                out[a] = {"name": src["name"], "ns": n.rsplit("::", 1)[0],
                          "evidence": "the same slot of a sibling WorkDefinitions class: " + src["evidence"],
                          "confidence": "medium" if src["confidence"] != "low" else "low", "chunk": src["chunk"]}
                copied += 1
    NAMES_LLM.write_text(json.dumps({
        "_comment": "Names suggested by Claude (tools/llm_names.py), applied by ApplyFacts after the RTTI names and "
                    "before data/names.json, whose hand names win. Not reviewed one by one: confidence and evidence "
                    "say how far to trust each. Move an entry to names.json once checked.",
        "functions": {f"0x{a:x}": out[a] for a in sorted(out)}}, indent=1) + "\n", encoding="utf-8")
    print(f"names: {len(out)} written ({copied} copied across slot families), skipped {dict(skipped)}")
    if not args.structs:
        print(f"structs: {len(structs_out)} proposed, not written (--structs)")
        return
    known_structs = set(json.loads(STRUCTS.read_text(encoding="utf-8"))["structs"]) | set(bare)
    good, why = {}, Counter()
    for name, (s, chunk) in structs_out.items():
        if bare.get(name) != 1:
            why["not one RTTI class's name"] += 1
            continue
        end, ok = 0, True
        for fl in sorted(s["fields"], key=lambda x: x["offset"]):
            n = type_size(fl["type"], known_structs)
            if n is None or fl["offset"] < end or fl["offset"] + n > s["size"] or not IDENT.match(fl["name"]):
                ok = False
                break
            end = fl["offset"] + n
        if not ok or not s["fields"]:
            why["bad fields"] += 1
            continue
        good[name] = {"size": s["size"], "evidence": f"(llm, {chunk}) " + s["evidence"],
                      "fields": [[fl["name"], fl["offset"], fl["type"]] for fl in sorted(s["fields"], key=lambda x: x["offset"])]}
    STRUCTS_LLM.write_text(json.dumps({
        "rule": "Layouts suggested by Claude (tools/llm_names.py) for RTTI classes, merged before data/structs.json, "
                "whose layouts win. A layout changes the decompilation: compare the fidelity report after applying.",
        "structs": dict(sorted(good.items()))}, indent=1) + "\n", encoding="utf-8")
    print(f"structs: {len(good)} written, skipped {dict(why)}")


def main():
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    subs = lambda s: s.split(",")
    p = sub.add_parser("plan")
    p.add_argument("--subsystems", type=subs)
    p.add_argument("--show", help="write one chunk's full request (an id, or a subsystem's first) to build/llm")
    p = sub.add_parser("submit")
    p.add_argument("--max-cost", type=float, required=True, help="estimated dollars for this batch")
    p.add_argument("--subsystems", type=subs, default=["graphics", "os", "net"])
    p.add_argument("--limit", type=int)
    p.add_argument("--effort", default="medium", choices=["low", "medium", "high", "xhigh", "max"])
    p.add_argument("--dry-run", action="store_true")
    sub.add_parser("status")
    sub.add_parser("collect")
    p = sub.add_parser("merge")
    p.add_argument("--min-confidence", default="medium", choices=["low", "medium", "high"])
    p.add_argument("--structs", action="store_true")
    args = ap.parse_args()
    {"plan": cmd_plan, "submit": cmd_submit, "status": cmd_status, "collect": cmd_collect,
     "merge": cmd_merge}[args.cmd](args)


if __name__ == "__main__":
    main()
