"""build/llm/report.html: what tools/llm_names.py has spent, how far each subsystem is, and every
proposed name with its confidence and evidence, to filter and review in a browser.

    python tools/llm_report.py            once
    python tools/llm_report.py --watch    every minute, the batches' live counts too (the page reloads itself)
"""
from __future__ import annotations

import argparse
import json
import time
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
STATE = ROOT / "build" / "llm"
BUDGET = 100.0


def gather(live: bool) -> dict:
    ledger = json.loads((STATE / "ledger.json").read_text()) if (STATE / "ledger.json").exists() else {"batches": []}
    if live:
        from llm_names import client
        api = client()
        for b in ledger["batches"]:
            if not b.get("collected"):
                r = api.messages.batches.retrieve(b["id"])
                b["status"] = r.processing_status
                b["counts"] = r.request_counts.model_dump()
    names, structs = [], []
    for p in sorted((STATE / "results").glob("*.jsonl")) if (STATE / "results").exists() else ():
        for line in p.open(encoding="utf-8"):
            r = json.loads(line)
            sub = r["chunk"].split("-", 1)[0] if not r["chunk"].startswith("net-work") else "net-work"
            for f in r["functions"]:
                names.append({"addr": f["addr"], "name": f["name"], "ns": f["ns"], "conf": f["confidence"],
                              "ev": f["evidence"], "sub": sub, "chunk": r["chunk"]})
            for s in r.get("structs", []):
                structs.append({**s, "chunk": r["chunk"]})
    merged = ROOT / "data" / "names_llm.json"
    remaining = json.loads((STATE / "remaining.json").read_text()) if (STATE / "remaining.json").exists() else {}
    return {"batches": ledger["batches"], "names": names, "structs": structs, "remaining": remaining,
            "merged": len(json.loads(merged.read_text(encoding="utf-8"))["functions"]) if merged.exists() else 0,
            "budget": BUDGET, "when": time.strftime("%Y-%m-%d %H:%M:%S")}


PAGE = r"""<!doctype html>
<html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width, initial-scale=1">
<title>Naming Run</title>
__REFRESH__
<style>
:root { --bg:#f7f7f5; --card:#fff; --ink:#1d1d1b; --mute:#6b6b66; --line:#e3e2dd; --accent:#3a5bd9;
        --high:#2f8f5b; --medium:#b7791f; --low:#b4473c; --bar:#e9e8e3; }
@media (prefers-color-scheme: dark) { :root { --bg:#151514; --card:#1e1e1c; --ink:#ecebe6; --mute:#9a9992;
        --line:#2f2f2c; --accent:#7f9bff; --high:#5cc28a; --medium:#e0a84a; --low:#e07a6e; --bar:#2c2c29; } }
* { box-sizing:border-box }
body { margin:0; background:var(--bg); color:var(--ink); font:14px/1.45 system-ui, sans-serif; }
main { max-width:1200px; margin:0 auto; padding:24px 16px 64px; }
h1 { font-size:22px; margin:0 0 4px } h2 { font-size:15px; margin:28px 0 10px; color:var(--mute); font-weight:600;
     text-transform:uppercase; letter-spacing:.04em }
.sub { color:var(--mute); font-size:13px }
.tiles { display:grid; grid-template-columns:repeat(auto-fit,minmax(170px,1fr)); gap:12px; margin-top:18px }
.tile { background:var(--card); border:1px solid var(--line); border-radius:10px; padding:14px 16px }
.tile b { display:block; font-size:24px; font-variant-numeric:tabular-nums } .tile span { color:var(--mute); font-size:12px }
.meter { height:8px; background:var(--bar); border-radius:4px; overflow:hidden; margin-top:8px }
.meter i { display:block; height:100%; background:var(--accent) }
table { width:100%; border-collapse:collapse; background:var(--card); border:1px solid var(--line); border-radius:10px;
        overflow:hidden; font-variant-numeric:tabular-nums }
th, td { text-align:left; padding:7px 10px; border-bottom:1px solid var(--line); vertical-align:top }
th { font-size:12px; color:var(--mute); font-weight:600; cursor:pointer; user-select:none; white-space:nowrap }
tr:last-child td { border-bottom:0 }
td.num, th.num { text-align:right }
code { font:12.5px ui-monospace, Consolas, monospace }
.pill { display:inline-block; padding:1px 8px; border-radius:99px; font-size:12px; font-weight:600; color:#fff }
.high { background:var(--high) } .medium { background:var(--medium) } .low { background:var(--low) }
.ev { color:var(--mute); font-size:13px; max-width:560px }
.controls { display:flex; flex-wrap:wrap; gap:8px; margin-bottom:10px }
input, select { font:inherit; padding:6px 10px; border:1px solid var(--line); border-radius:8px; background:var(--card); color:var(--ink) }
input { flex:1; min-width:200px }
.scroll { overflow-x:auto }
.prog { display:flex; align-items:center; gap:10px } .prog .meter { flex:1; margin:0 }
</style></head><body><main>
<h1>Naming run</h1>
<div class="sub">tools/llm_names.py, Claude Opus 5.5 by the Batch API. Generated <span id="when"></span><span id="live"></span></div>
<div class="tiles" id="tiles"></div>
<h2>Subsystems</h2><div class="scroll"><table id="subs"></table></div>
<h2>Batches</h2><div class="scroll"><table id="batches"></table></div>
<h2>Proposed names</h2>
<div class="controls">
  <input id="q" placeholder="Filter by address, name, namespace or evidence">
  <select id="fconf"><option value="">Any confidence</option><option>high</option><option>medium</option><option>low</option></select>
  <select id="fsub"><option value="">Any subsystem</option></select>
</div>
<div class="sub" id="count" style="margin-bottom:8px"></div>
<div class="scroll"><table id="names"></table></div>
<h2>Proposed structures</h2><div class="scroll"><table id="structs"></table></div>
</main>
<script>
const D = __DATA__;
const $ = id => document.getElementById(id);
const esc = s => String(s ?? "").replace(/[&<>"]/g, c => ({"&":"&amp;","<":"&lt;",">":"&gt;",'"':"&quot;"}[c]));
const money = x => "$" + x.toFixed(2);
$("when").textContent = D.when;
if (D.refresh) $("live").textContent = " · refreshing every minute";

const spent = D.batches.reduce((s, b) => s + (b.actual ?? 0), 0);
const pending = D.batches.filter(b => !b.collected).reduce((s, b) => s + b.estimate, 0);
const conf = D.names.reduce((c, n) => (c[n.conf] = (c[n.conf] || 0) + 1, c), {});
const tile = (v, label, meter) => `<div class="tile"><b>${v}</b><span>${label}</span>${meter ?? ""}</div>`;
$("tiles").innerHTML =
  tile(money(spent), `spent of ${money(D.budget)}`, `<div class="meter"><i style="width:${Math.min(100, spent / D.budget * 100)}%"></i></div>`) +
  tile(money(pending), "estimated, still running") +
  tile(D.names.length.toLocaleString(), "names proposed") +
  tile(`${conf.high || 0} / ${conf.medium || 0} / ${conf.low || 0}`, "high / medium / low") +
  tile(D.merged.toLocaleString(), "merged into names_llm.json");

const bySub = {};
for (const n of D.names) bySub[n.sub] = (bySub[n.sub] || 0) + 1;
const subs = [...new Set([...Object.keys(D.remaining), ...Object.keys(bySub)])];
const order = ["graphics","os","net","lua","sound","world","ui","game","net-work","misc"];
subs.sort((a, b) => order.indexOf(a) - order.indexOf(b));
$("subs").innerHTML = "<tr><th>Subsystem</th><th class=num>Proposed</th><th class=num>Left</th><th style='width:45%'>Progress</th></tr>" +
  subs.map(s => { const p = bySub[s] || 0, r = D.remaining[s] || 0, pct = p + r ? p / (p + r) * 100 : 0;
    return `<tr><td>${esc(s)}</td><td class=num>${p}</td><td class=num>${r}</td>
      <td><div class=prog><div class=meter><i style="width:${pct}%"></i></div><span class=sub>${pct.toFixed(0)}%</span></div></td></tr>`; }).join("");

$("batches").innerHTML = "<tr><th>Batch</th><th class=num>Requests</th><th>Status</th><th class=num>Estimate</th><th class=num>Actual</th></tr>" +
  (D.batches.map(b => { const c = b.counts; const st = b.collected ? "collected" :
      (b.status || "submitted") + (c ? ` · ${c.succeeded} done, ${c.processing} running, ${c.errored} errored` : "");
    return `<tr><td><code>${esc(b.id)}</code></td><td class=num>${b.chunks.length}</td><td>${esc(st)}</td>
      <td class=num>${money(b.estimate)}</td><td class=num>${b.actual != null ? money(b.actual) : "—"}</td></tr>`; }).join("")
   || "<tr><td colspan=5 class=sub>None submitted yet</td></tr>");

for (const s of subs) $("fsub").insertAdjacentHTML("beforeend", `<option>${esc(s)}</option>`);
let sortKey = "addr", sortDir = 1;
const cols = [["addr","Address"],["name","Name"],["ns","Namespace"],["conf","Confidence"],["sub","Subsystem"],["ev","Evidence"]];
const rank = {high:0, medium:1, low:2};
function render() {
  const q = $("q").value.toLowerCase(), fc = $("fconf").value, fs = $("fsub").value;
  let rows = D.names.filter(n => (!fc || n.conf === fc) && (!fs || n.sub === fs) &&
    (!q || (n.addr + " " + n.name + " " + n.ns + " " + n.ev).toLowerCase().includes(q)));
  rows.sort((a, b) => { const x = sortKey === "addr" ? parseInt(a.addr, 16) : sortKey === "conf" ? rank[a.conf] : a[sortKey],
                              y = sortKey === "addr" ? parseInt(b.addr, 16) : sortKey === "conf" ? rank[b.conf] : b[sortKey];
                        return (x < y ? -1 : x > y ? 1 : 0) * sortDir; });
  $("count").textContent = `${rows.length.toLocaleString()} of ${D.names.length.toLocaleString()}` + (rows.length > 2000 ? " (first 2,000 shown)" : "");
  $("names").innerHTML = "<tr>" + cols.map(([k, l]) => `<th data-k="${k}">${l}${k === sortKey ? (sortDir > 0 ? " ▲" : " ▼") : ""}</th>`).join("") + "</tr>" +
    rows.slice(0, 2000).map(n => `<tr><td><code>${esc(n.addr)}</code></td><td><code>${esc(n.name)}</code></td>
      <td><code>${esc(n.ns)}</code></td><td><span class="pill ${n.conf}">${n.conf}</span></td><td>${esc(n.sub)}</td>
      <td class=ev>${esc(n.ev)}</td></tr>`).join("");
  for (const th of $("names").querySelectorAll("th")) th.onclick = () => {
    sortDir = th.dataset.k === sortKey ? -sortDir : 1; sortKey = th.dataset.k; render(); };
}
for (const id of ["q","fconf","fsub"]) $(id).addEventListener("input", render);
render();

$("structs").innerHTML = "<tr><th>Name</th><th class=num>Size</th><th>Fields</th><th>Evidence</th></tr>" +
  (D.structs.map(s => `<tr><td><code>${esc(s.name)}</code></td><td class=num>0x${s.size.toString(16)}</td>
    <td><code>${s.fields.map(f => `@0x${f.offset.toString(16)} ${esc(f.type)} ${esc(f.name)}`).join("<br>")}</code></td>
    <td class=ev>${esc(s.evidence)}</td></tr>`).join("") || "<tr><td colspan=4 class=sub>None yet</td></tr>");
</script></body></html>
"""


def write(live: bool) -> Path:
    d = gather(live)
    d["refresh"] = live
    out = STATE / "report.html"
    STATE.mkdir(parents=True, exist_ok=True)
    out.write_text(PAGE.replace("__DATA__", json.dumps(d).replace("</", "<\\/"))
                   .replace("__REFRESH__", '<meta http-equiv="refresh" content="60">' if live else ""), encoding="utf-8")
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--watch", action="store_true")
    args = ap.parse_args()
    while True:
        out = write(args.watch)
        print("wrote", out)
        if not args.watch:
            break
        time.sleep(60)


if __name__ == "__main__":
    main()
