"""Build CrystalCore's list of every base-game patch from the retail disc onwards.

    python tools/patches/patchlist.py

Sources, merged by file name:
  - Square Enix's CDN (patch-dl.ffxiv.com), what tools/patches/probe.py found there
    (archive/patches/probe-4e9a232b.json): the preferred URL, public and fast
  - archive.org's "ffxiv-patches-game" collection: the files it keeps (2015 on), each with its
    SHA-1, and a second URL
  - Thaliak (thaliak.xiv.dev), which records Square Enix's live patch lists since 2017: the
    versions, their prerequisites and the rollups (H patches)
  - archive/patches/game/*.sha1: the SHA-1 of each file downloaded here (tools/patches/download.py)

Written to patches/game.json: the disc's version, CrystalCore's reference version, and each
version in order with its file, size, SHA-1 (where known), URLs and the version it applies to.
A D patch applies to the version before it; the H rollups are a separate chain from nothing.
"""
import json, re, urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
REPO = "4e9a232b"
CDN = f"http://patch-dl.ffxiv.com/game/{REPO}/"
UA = {"User-Agent": "CrystalCore-patchlist/1.0 (+https://github.com/zeruth/CrystalCore-Client)"}
DISC_VERSION = "2013.06.29.0004.0000"
REFERENCE = {"version": "2013.08.09.0001.0000", "build": 672261, "branch": "2013.08.09.672261",
             "ffxiv_exe_sha1": "dcd3d87c545c20fab5ad6f7039f4e3ca3cb02948"}


# the public releases, by the date they went live (Lodestone's patch notes), the betas and early
# access first. A patch is built days before its release goes out: it belongs to the first release
# on or after its own date, within RELEASE_WINDOW days; one later than that, to the release before
# it, as a hotfix
RELEASES = [
    ("2013-07-13", "Beta phase 3"), ("2013-08-10", "Beta phase 4"), ("2013-08-24", "Early access (pre-release)"),
    ("2013-08-27", "2.0 launch"), ("2013-12-17", "2.1"), ("2014-03-27", "2.2"), ("2014-07-08", "2.3"),
    ("2014-10-28", "2.4"), ("2015-01-20", "2.5"), ("2015-03-31", "2.55"), ("2015-06-19", "3.0 early access"),
    ("2015-06-23", "3.0 Heavensward"), ("2015-11-10", "3.1"), ("2016-02-23", "3.2"), ("2016-05-31", "3.3"),
    ("2016-09-27", "3.4"), ("2017-01-17", "3.5"), ("2017-03-28", "3.55a"), ("2017-05-16", "3.56"),
    ("2017-06-16", "4.0 early access"), ("2017-06-20", "4.0 Stormblood"), ("2017-10-10", "4.1"),
    ("2018-01-30", "4.2"), ("2018-05-29", "4.3"), ("2018-09-18", "4.4"), ("2019-01-08", "4.5"),
    ("2019-06-28", "5.0 early access"), ("2019-07-02", "5.0 Shadowbringers"), ("2019-10-29", "5.1"),
    ("2020-02-18", "5.2"), ("2020-08-11", "5.3"), ("2020-12-08", "5.4"), ("2021-04-13", "5.5"),
    ("2021-12-03", "6.0 early access"), ("2021-12-07", "6.0 Endwalker"), ("2022-04-12", "6.1"),
    ("2022-08-23", "6.2"), ("2023-01-10", "6.3"), ("2023-05-23", "6.4"), ("2023-10-03", "6.5"),
    ("2024-06-28", "7.0 early access"), ("2024-07-02", "7.0 Dawntrail"), ("2024-11-12", "7.1"),
    ("2025-03-25", "7.2"), ("2025-08-05", "7.3"),
]
# (45: a release's big patch is built weeks ahead, 2014.05.27's for 2.3 six weeks before it went out)
RELEASE_WINDOW = 45
# what is known of a version exactly
KNOWN = {
    "2013.06.29.0004.0000": "Retail disc base (pre-launch)",
    "2013.08.09.0000.0000": "Beta phase 4 (part 1 of 2)",
    "2013.08.09.0001.0000": "Beta phase 4 (build 672261)",
}


def release_of(version):
    """the release a version belongs to: 'Beta phase 4', '2.1', '2.1 hotfix', ..."""
    if version in KNOWN:
        return KNOWN[version]
    # (the parts the disc's own version is made of: the base game as patches)
    if version < DISC_VERSION:
        return "Retail disc base (part)"
    from datetime import date
    y, m, d = (int(x) for x in version.split(".")[:3])
    day = date(y, m, d)
    rel = [(date.fromisoformat(s), n) for s, n in RELEASES]
    nxt = next(((r, n) for r, n in rel if r >= day), None)
    if nxt and (nxt[0] - day).days <= RELEASE_WINDOW:
        return nxt[1]
    prev = [(r, n) for r, n in rel if r < day]
    if not prev:
        return "pre-release"
    name = prev[-1][1]
    # (past what this table knows: a later release, unnamed here)
    if nxt is None and (day - prev[-1][0]).days > 120:
        return f"after {name.split()[0]}"
    return name.replace(" (pre-release)", "") + " hotfix"


def get_json(url, data=None):
    req = urllib.request.Request(url, data=json.dumps(data).encode() if data else None,
                                 headers={**UA, **({"Content-Type": "application/json"} if data else {})})
    with urllib.request.urlopen(req, timeout=180) as r:
        return json.loads(r.read())


def version_of(name):
    """D2013.08.09.0001.0000.patch -> 2013.08.09.0001.0000; H2017.06.06.0000.0001a.patch -> H2017.06.06.0000.0001a"""
    m = re.fullmatch(r"([DH])(\d{4}\.\d{2}\.\d{2}\.\d{4}\.\d{4})([a-z]*)\.patch", name)
    if not m:
        return None
    return m.group(2) if m.group(1) == "D" else "H" + m.group(2) + m.group(3)


def main():
    files: dict[str, dict] = {}

    def entry(name):
        return files.setdefault(name, {"file": name, "version": version_of(name), "urls": []})

    # the CDN, as probed
    probe = ROOT / "archive" / "patches" / f"probe-{REPO}.json"
    if probe.exists():
        for n, h in json.loads(probe.read_text())["hits"].items():
            e = entry(n)
            e["size"] = h["size"]
            e["cdn"] = True
            e["urls"].insert(0, CDN + n)
    # archive.org
    meta = get_json("https://archive.org/metadata/ffxiv-patches-game")
    for f in meta["files"]:
        m = re.fullmatch(rf"game/{REPO}/(.+\.patch)", f["name"])
        if not m:
            continue
        e = entry(m.group(1))
        e.setdefault("size", int(f["size"]))
        if f.get("sha1"):
            e["sha1"] = f["sha1"]
        e["urls"].append("https://archive.org/download/ffxiv-patches-game/" + f["name"])
    # Thaliak: versions since 2017 and their prerequisites
    th = get_json("https://thaliak.xiv.dev/graphql/", {"query": '{ repository(slug: "%s") { versions { versionString '
                  'prerequisiteVersions { versionString } patches { url size } } } }' % REPO})
    prereq = {}
    for v in th["data"]["repository"]["versions"]:
        prereq[v["versionString"]] = [p["versionString"] for p in v["prerequisiteVersions"]]
        for p in v["patches"]:
            n = p["url"].rsplit("/", 1)[1]
            e = entry(n)
            e.setdefault("size", p["size"])
            if p["url"].replace("https:", "http:") not in [u.replace("https:", "http:") for u in e["urls"]]:
                e["urls"].insert(0, p["url"])
            e["thaliak"] = True
    # the hashes of what was downloaded here
    for s in (ROOT / "archive" / "patches" / "game").glob("*.patch.sha1"):
        e = files.get(s.name[:-5])
        if e is not None:
            got = s.read_text().split()[0]
            if e.get("sha1") and e["sha1"] != got:
                e["sha1_mismatch"] = got
            e["sha1"] = e.get("sha1") or got
            e["downloaded"] = True

    # the D chain in order, each from the version before it (the disc's first); the H rollups apart
    d = sorted((e for e in files.values() if e["version"] and not e["version"].startswith("H")),
               key=lambda e: e["version"])
    prev = DISC_VERSION
    for e in d:
        e["from"] = prereq.get(e["version"], [prev])[0] if e["version"] in prereq else prev
        e["release"] = release_of(e["version"])
        prev = e["version"]
    h = sorted((e for e in files.values() if e["version"] and e["version"].startswith("H")), key=lambda e: e["version"])
    for e in h:
        e["from"] = (prereq.get(e["version"]) or [None])[0]
    out = {
        "repository": REPO,
        "disc": {"version": DISC_VERSION, "file": "U13002W_001_D01(ARR).iso",
                 "url": "https://archive.org/download/u-13002-w-001-d-01-arr/U13002W_001_D01%28ARR%29.iso",
                 "size": 7414087680, "md5": "a0542ae2c37865b1aa92c6563ce42467"},
        "reference": REFERENCE,
        "latest": d[-1]["version"] if d else None,
        "patches": d,
        "rollups": h,
    }
    path = ROOT / "patches" / "game.json"
    path.parent.mkdir(exist_ok=True)
    path.write_text(json.dumps(out, indent=1))
    total = sum(e.get("size", 0) for e in d)
    print(f"{len(d)} D patches ({total / 1e9:.1f} GB), {len(h)} rollup parts, "
          f"{sum(1 for e in d if e.get('sha1'))} with a SHA-1, {sum(1 for e in d if e.get('cdn'))} on the CDN "
          f"as probed; latest {out['latest']} -> {path}")
    gaps = [e["file"] for e in d if not e["urls"]]
    if gaps:
        print("no URL:", gaps)


if __name__ == "__main__":
    main()
