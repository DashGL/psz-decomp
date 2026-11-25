#!/usr/bin/env python3
"""Byte-weighted progress report, offline HTML browser, and interactive treemap
for Phantasy Star Zero (USA, C24E).

Inspired by zeroz41/pso-decomp's progress_map.py and adapted to psz-decomp's
per-function ARM9 + 32-overlay architecture and game-vs-plumbing census.

Usage:
  python tools/progress_map.py                         # report + HTML in match/progress/
  python tools/progress_map.py -o match/progress       # custom output directory
  python tools/progress_map.py --json-only --json match/progress/baseline.json
  python tools/progress_map.py --badges match/progress/badges
  python tools/progress_map.py --from-report match/progress/report.json -o match/progress

Outputs (under -o DIR unless --json-only):
  report.json   Address-keyed machine-readable snapshot for report_delta.py
  index.html    Offline sortable module table + filterable function explorer
  treemap.html  Offline interactive byte-weighted squarified treemap
"""
from __future__ import annotations

import argparse
import csv
import json
import pathlib
import re
import subprocess
import sys
from datetime import datetime, timezone
from typing import Any

REPO = pathlib.Path(__file__).resolve().parent.parent

SYMBOLS_FILES = (
    REPO / "config" / "arm9" / "symbols.txt",
    REPO / "config" / "arm9" / "overlay_symbols.txt",
)
REACH_DIR = REPO / "config" / "reachability"
CENSUS_CSV = REPO / "notes" / "reference" / "game-plumbing-census" / "refine" / "functions.csv"
RUNTIME_PROVEN_CSV = REACH_DIR / "runtime_proven.csv"
GAME_VERDICTS = {"game", "game_leaf", "game_bridge"}

_SYM_LINE_RE = re.compile(
    r"name=(?P<name>\S+)\s+module=(?P<module>\S+)\s+"
    r"addr=0x(?P<addr>[0-9a-fA-F]+)\s+size=0x(?P<size>[0-9a-fA-F]+)"
)
_NEAR_LINE_RE = re.compile(r"^\s*//\s*near:\s*(.+)$")
_VERSION_RE = re.compile(r"^\s*//\s*version:\s*(\S+)")
_FLAGS_RE = re.compile(r"^\s*//\s*flags:\s*(.+)$")


def _git_head(repo: pathlib.Path) -> str | None:
    try:
        res = subprocess.run(
            ["git", "rev-parse", "--short=12", "HEAD"],
            cwd=str(repo),
            capture_output=True,
            text=True,
            check=False,
        )
        if res.returncode == 0:
            return res.stdout.strip() or None
    except OSError:
        pass
    return None


def _norm_module(raw: str) -> str:
    if raw == "main":
        return "arm9"
    return raw


def _module_sort_key(mod: str) -> tuple[int, int, str]:
    if mod == "arm9":
        return (0, 0, mod)
    m = re.fullmatch(r"ov(\d+)", mod)
    if m:
        return (1, int(m.group(1)), mod)
    return (2, 0, mod)


def _load_symbols(repo: pathlib.Path) -> dict[str, dict[str, Any]]:
    syms: dict[str, dict[str, Any]] = {}
    for rel in ("config/arm9/symbols.txt", "config/arm9/overlay_symbols.txt"):
        p = repo / rel
        if not p.is_file():
            continue
        for line in p.read_text(encoding="utf-8", errors="replace").splitlines():
            m = _SYM_LINE_RE.search(line)
            if not m:
                continue
            mod = _norm_module(m.group("module"))
            syms[m.group("name")] = {
                "name": m.group("name"),
                "module": mod,
                "addr": int(m.group("addr"), 16),
                "size": int(m.group("size"), 16),
            }
    return syms


def _load_reach_map(repo: pathlib.Path) -> tuple[dict[str, str], dict[str, str]]:
    """Return (arm9_live_reach, ov_live_reach) mapping func name -> reachability kind."""
    reach_dir = repo / "config" / "reachability"
    arm9_reach: dict[str, str] = {}
    ov_reach: dict[str, str] = {}

    for fname, kind, target in (
        ("call_reachable.txt", "call_reachable", arm9_reach),
        ("indirect_only.txt", "indirect_only", arm9_reach),
        ("overlay_call_reachable.txt", "call_reachable", ov_reach),
        ("overlay_indirect_only.txt", "indirect_only", ov_reach),
    ):
        p = reach_dir / fname
        if not p.is_file():
            continue
        for line in p.read_text(encoding="utf-8", errors="replace").splitlines():
            parts = line.strip().split()
            if len(parts) >= 2:
                name = parts[1]
                if name not in target:
                    target[name] = kind

    rp = reach_dir / "runtime_proven.csv"
    if rp.is_file():
        with rp.open(encoding="utf-8", newline="") as fh:
            for row in csv.DictReader(fh):
                name = row.get("name", "").strip()
                if name and name not in arm9_reach:
                    arm9_reach[name] = "runtime_proven"

    return arm9_reach, ov_reach


def _load_verdicts(repo: pathlib.Path) -> tuple[dict[str, str], dict[str, bool]]:
    verdicts: dict[str, str] = {}
    is_thumb: dict[str, bool] = {}
    census = repo / "notes" / "reference" / "game-plumbing-census" / "refine" / "functions.csv"
    if census.is_file():
        with census.open(encoding="utf-8", errors="replace", newline="") as fh:
            for row in csv.DictReader(fh):
                name = row.get("name", "").strip()
                if not name:
                    continue
                v = row.get("verdict", "").strip()
                if v:
                    verdicts[name] = v
                t = row.get("thumb", "").strip().lower()
                if t in ("true", "false"):
                    is_thumb[name] = t == "true"

    rp = repo / "config" / "reachability" / "runtime_proven.csv"
    if rp.is_file():
        with rp.open(encoding="utf-8", newline="") as fh:
            for row in csv.DictReader(fh):
                name = row.get("name", "").strip()
                cls = row.get("class", "").strip()
                if not name:
                    continue
                if cls == "game":
                    verdicts[name] = "game"
                elif cls == "plumb" and name not in verdicts:
                    verdicts[name] = "plumb"

    return verdicts, is_thumb


def _scan_c_tree(base: pathlib.Path, ext: str = ".c") -> dict[str, pathlib.Path]:
    """Scan `<base>/arm9/*<ext>` and `<base>/ov*/*<ext>` -> {stem: path}."""
    found: dict[str, pathlib.Path] = {}
    if not base.is_dir():
        return found
    arm9_dir = base / "arm9"
    if arm9_dir.is_dir():
        for f in arm9_dir.glob(f"*{ext}"):
            found[f.stem] = f
    for d in sorted(base.glob("ov*")):
        if d.is_dir():
            for f in d.glob(f"*{ext}"):
                found[f.stem] = f
    return found


def _read_near_note(path: pathlib.Path) -> str:
    """Extract the first `// near:` summary line (if any) from the top of a file."""
    try:
        with path.open(encoding="utf-8", errors="replace") as fh:
            for _ in range(16):
                line = fh.readline()
                if not line:
                    break
                m = _NEAR_LINE_RE.match(line)
                if m:
                    return m.group(1).strip()[:200]
    except OSError:
        pass
    return ""


def _read_mode_marker(path: pathlib.Path) -> str | None:
    """Return 'arm' if file has `// flags: ... -noThumb`, else None."""
    try:
        with path.open(encoding="utf-8", errors="replace") as fh:
            for _ in range(12):
                line = fh.readline()
                if not line:
                    break
                m = _FLAGS_RE.match(line)
                if m and "-noThumb" in m.group(1):
                    return "arm"
    except OSError:
        pass
    return None


def _empty_bucket() -> dict[str, int]:
    return {
        "total_functions": 0,
        "banked_functions": 0,
        "readable_functions": 0,
        "draft_functions": 0,
        "near_functions": 0,
        "unmatched_functions": 0,
        "total_bytes": 0,
        "banked_bytes": 0,
        "readable_bytes": 0,
        "draft_bytes": 0,
        "near_bytes": 0,
        "unmatched_bytes": 0,
        "game_total_functions": 0,
        "game_banked_functions": 0,
        "game_total_bytes": 0,
        "game_banked_bytes": 0,
    }


def _accum(bucket: dict[str, int], fn: dict[str, Any]) -> None:
    size = int(fn["size"])
    tier = fn["tier"]
    bucket["total_functions"] += 1
    bucket["total_bytes"] += size
    if tier == "banked":
        bucket["banked_functions"] += 1
        bucket["banked_bytes"] += size
    elif tier == "draft":
        bucket["draft_functions"] += 1
        bucket["draft_bytes"] += size
    elif tier == "near":
        bucket["near_functions"] += 1
        bucket["near_bytes"] += size
    else:
        bucket["unmatched_functions"] += 1
        bucket["unmatched_bytes"] += size

    if fn.get("readable"):
        bucket["readable_functions"] += 1
        bucket["readable_bytes"] += size

    if fn.get("is_game"):
        bucket["game_total_functions"] += 1
        bucket["game_total_bytes"] += size
        if tier == "banked":
            bucket["game_banked_functions"] += 1
            bucket["game_banked_bytes"] += size


def collect_report(repo: pathlib.Path | None = None) -> dict[str, Any]:
    """Build the full byte-weighted progress report from the repository tree."""
    root = (repo or REPO).resolve()
    syms = _load_symbols(root)
    arm9_reach, ov_reach = _load_reach_map(root)
    verdicts, thumb_map = _load_verdicts(root)

    banked_files = _scan_c_tree(root / "src", ".c")
    draft_files = _scan_c_tree(root / "drafts")
    near_files = _scan_c_tree(root / "drafts" / "near")
    readable_files = _scan_c_tree(root / "src-readable")
    orig_asm_cats: dict[str, str] = {}
    try:
        from orig_asm import load_orig_asm_manifest
        orig_asm_cats = {e["name"]: e["category"] for e in load_orig_asm_manifest(root)}
    except Exception:
        pass
    stale_dir = root / "src" / "arm9" / "stale"
    stale_count = len(list(stale_dir.glob("*.c"))) if stale_dir.is_dir() else 0

    live_all: dict[str, tuple[str, str]] = {}
    for name, rkind in arm9_reach.items():
        live_all[name] = ("arm9", rkind)
    for name, rkind in ov_reach.items():
        live_all[name] = ("overlay", rkind)

    functions: list[dict[str, Any]] = []
    seen_keys: set[tuple[str, int]] = set()

    for name, (domain, rkind) in live_all.items():
        sym = syms.get(name)
        if sym is not None:
            mod = sym["module"]
            addr = sym["addr"]
            size = sym["size"]
        else:
            # Fallback if a live function is absent from symbols.txt
            m = re.search(r"([0-9a-fA-F]{8})$", name)
            addr = int(m.group(1), 16) if m else 0
            ovm = re.match(r"FUN_overlay_(\d+)__", name)
            mod = f"ov{int(ovm.group(1)):03d}" if ovm else "arm9"
            size = 0

        key = (mod, addr)
        if key in seen_keys:
            continue
        seen_keys.add(key)

        path_obj: pathlib.Path | None = None
        near_note = ""
        if name in banked_files:
            tier = "banked"
            path_obj = banked_files[name]
        elif name in draft_files:
            tier = "draft"
            path_obj = draft_files[name]
        elif name in near_files:
            tier = "near"
            path_obj = near_files[name]
            near_note = _read_near_note(path_obj)
        else:
            tier = "unmatched"

        readable = name in readable_files
        verdict = verdicts.get(name, "")
        is_game = verdict in GAME_VERDICTS
        mode = None
        if path_obj is not None:
            mode = _read_mode_marker(path_obj)
        if mode is None and name in thumb_map:
            mode = "thumb" if thumb_map[name] else "arm"

        rel_path = ""
        if path_obj is not None:
            try:
                rel_path = path_obj.relative_to(root).as_posix()
            except ValueError:
                rel_path = path_obj.as_posix()

        functions.append({
            "module": mod,
            "addr": addr,
            "addr_hex": f"0x{addr:08x}",
            "name": name,
            "size": size,
            "tier": tier,
            "readable": readable,
            "verdict": verdict,
            "is_game": is_game,
            "reachability": rkind,
            "mode": mode or "",
            "path": rel_path,
            "orig_asm_category": orig_asm_cats.get(name, "") if tier != "banked" else "",
            "near_note": near_note,
        })

    functions.sort(key=lambda f: (_module_sort_key(f["module"]), f["addr"], f["name"]))

    total_bucket = _empty_bucket()
    arm9_bucket = _empty_bucket()
    ov_bucket = _empty_bucket()
    module_buckets: dict[str, dict[str, int]] = {}

    for fn in functions:
        mod = fn["module"]
        _accum(total_bucket, fn)
        if mod == "arm9":
            _accum(arm9_bucket, fn)
        else:
            _accum(ov_bucket, fn)
        mb = module_buckets.setdefault(mod, _empty_bucket())
        _accum(mb, fn)

    modules_ordered = [
        {"module": mod, **module_buckets[mod]}
        for mod in sorted(module_buckets, key=_module_sort_key)
    ]

    return {
        "schema_version": 1,
        "project": "psz-decomp",
        "generated_at": datetime.now(timezone.utc).strftime("%Y-%m-%dT%H:%M:%SZ"),
        "git_head": _git_head(root),
        "stale_evidence_files": stale_count,
        "summary": {
            "total": total_bucket,
            "arm9": arm9_bucket,
            "overlays": ov_bucket,
        },
        "modules": modules_ordered,
        "functions": functions,
    }


def _pct(num: int, den: int) -> float:
    return (100.0 * num / den) if den else 0.0


def format_terminal_summary(report: dict[str, Any]) -> str:
    s = report["summary"]
    tot = s["total"]
    a9 = s["arm9"]
    ov = s["overlays"]

    lines = [
        "=== Phantasy Star Zero (C24E) — Byte-Weighted Progress ===",
        (f"Total live : {tot['banked_functions']:,}/{tot['total_functions']:,} funcs "
         f"({_pct(tot['banked_functions'], tot['total_functions']):.2f}%)  |  "
         f"{tot['banked_bytes']:,}/{tot['total_bytes']:,} bytes "
         f"({_pct(tot['banked_bytes'], tot['total_bytes']):.2f}%)"),
        (f"  ARM9     : {a9['banked_functions']:,}/{a9['total_functions']:,} funcs "
         f"({_pct(a9['banked_functions'], a9['total_functions']):.2f}%)  |  "
         f"{a9['banked_bytes']:,}/{a9['total_bytes']:,} bytes "
         f"({_pct(a9['banked_bytes'], a9['total_bytes']):.2f}%)"),
        (f"  Overlays : {ov['banked_functions']:,}/{ov['total_functions']:,} funcs "
         f"({_pct(ov['banked_functions'], ov['total_functions']):.2f}%)  |  "
         f"{ov['banked_bytes']:,}/{ov['total_bytes']:,} bytes "
         f"({_pct(ov['banked_bytes'], ov['total_bytes']):.2f}%)"),
    ]
    if tot["game_total_functions"]:
        lines.append(
            f"Game logic : {tot['game_banked_functions']:,}/{tot['game_total_functions']:,} funcs "
            f"({_pct(tot['game_banked_functions'], tot['game_total_functions']):.2f}%)  |  "
            f"{tot['game_banked_bytes']:,}/{tot['game_total_bytes']:,} bytes "
            f"({_pct(tot['game_banked_bytes'], tot['game_total_bytes']):.2f}%)"
        )
    lines.append(
        f"Tiers      : banked={tot['banked_functions']:,} ({tot['banked_bytes']:,} B)  "
        f"draft={tot['draft_functions']:,} ({tot['draft_bytes']:,} B)  "
        f"near={tot['near_functions']:,} ({tot['near_bytes']:,} B)  "
        f"unmatched={tot['unmatched_functions']:,} ({tot['unmatched_bytes']:,} B)  "
        f"readable={tot['readable_functions']:,} ({tot['readable_bytes']:,} B)"
    )

    remaining = [f for f in report["functions"] if f["tier"] != "banked"]
    remaining.sort(key=lambda f: (-f["size"], f["module"], f["addr"]))
    if remaining:
        lines.append("Largest remaining (non-banked) functions:")
        for fn in remaining[:8]:
            vtag = f" [{fn['verdict']}]" if fn["verdict"] else ""
            lines.append(
                f"  {fn['module']:5s} {fn['name']:24s} {fn['size']:6,d} B (0x{fn['size']:x})  "
                f"tier={fn['tier']:9s}{vtag}"
            )
    return "\n".join(lines)


def _badge_color(pct: float) -> str:
    if pct >= 95.0:
        return "brightgreen"
    if pct >= 85.0:
        return "green"
    if pct >= 65.0:
        return "yellowgreen"
    if pct >= 40.0:
        return "yellow"
    return "orange"


def write_badges(report: dict[str, Any], badges_dir: pathlib.Path) -> None:
    badges_dir.mkdir(parents=True, exist_ok=True)
    tot = report["summary"]["total"]
    a9 = report["summary"]["arm9"]
    ov = report["summary"]["overlays"]

    specs = [
        ("code-bytes.json", "code bytes", _pct(tot["banked_bytes"], tot["total_bytes"])),
        ("functions.json", "functions", _pct(tot["banked_functions"], tot["total_functions"])),
        ("arm9-bytes.json", "arm9 bytes", _pct(a9["banked_bytes"], a9["total_bytes"])),
        ("overlays-bytes.json", "overlays bytes", _pct(ov["banked_bytes"], ov["total_bytes"])),
        ("game-logic.json", "game logic bytes", _pct(tot["game_banked_bytes"], tot["game_total_bytes"])),
        ("readable.json", "readable bytes", _pct(tot["readable_bytes"], tot["total_bytes"])),
    ]
    for filename, label, pct in specs:
        payload = {
            "schemaVersion": 1,
            "label": label,
            "message": f"{pct:.2f}%",
            "color": _badge_color(pct),
        }
        (badges_dir / filename).write_text(
            json.dumps(payload, indent=2) + "\n", encoding="utf-8"
        )


def _compact_payload(report: dict[str, Any]) -> dict[str, Any]:
    """Pack function rows as compact tuples for snappy offline HTML rendering."""
    tier_code = {"banked": 0, "draft": 1, "near": 2, "unmatched": 3}
    rows = []
    for f in report["functions"]:
        rows.append([
            f["module"],
            f["addr"],
            f["name"],
            f["size"],
            tier_code.get(f["tier"], 3),
            1 if f["readable"] else 0,
            f["verdict"],
            1 if f["is_game"] else 0,
            f["reachability"],
            f["near_note"],
        ])
    return {
        "generated_at": report["generated_at"],
        "git_head": report.get("git_head") or "",
        "summary": report["summary"],
        "modules": report["modules"],
        "functions": rows,
    }


def _safe_json_for_script(obj: Any) -> str:
    return json.dumps(obj, separators=(",", ":")).replace("</", "<\\/")


_SHARED_CSS = """
:root {
  --bg: #0d1117;
  --panel: #161b22;
  --panel2: #1c222b;
  --border: #30363d;
  --text: #e6edf3;
  --muted: #8b949e;
  --banked: #2ea043;
  --readable: #39c5cf;
  --draft: #d29922;
  --near: #db6d28;
  --unmatched: #f85149;
  --accent: #58a6ff;
}
* { box-sizing: border-box; }
body {
  margin: 0;
  font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, sans-serif;
  background: var(--bg);
  color: var(--text);
  line-height: 1.45;
}
a { color: var(--accent); text-decoration: none; }
a:hover { text-decoration: underline; }
header {
  display: flex; flex-wrap: wrap; justify-content: space-between; align-items: center;
  gap: 12px; padding: 14px 20px; background: var(--panel); border-bottom: 1px solid var(--border);
}
header h1 { margin: 0; font-size: 1.15rem; }
.meta { color: var(--muted); font-size: 0.85rem; }
nav a {
  display: inline-block; padding: 5px 12px; border: 1px solid var(--border);
  border-radius: 6px; margin-left: 6px; font-size: 0.88rem; color: var(--text);
}
nav a.active { background: var(--accent); color: #0d1117; border-color: var(--accent); font-weight: 600; }
main { padding: 18px 20px 40px; max-width: 1480px; margin: 0 auto; }
.cards { display: grid; grid-template-columns: repeat(auto-fit, minmax(220px, 1fr)); gap: 12px; margin-bottom: 20px; }
.card {
  background: var(--panel); border: 1px solid var(--border); border-radius: 8px; padding: 12px 14px;
}
.card .label { font-size: 0.78rem; color: var(--muted); text-transform: uppercase; letter-spacing: .04em; }
.card .big { font-size: 1.45rem; font-weight: 700; margin: 4px 0 2px; }
.card .sub { font-size: 0.82rem; color: var(--muted); }
.bar { height: 7px; background: #21262d; border-radius: 4px; overflow: hidden; margin-top: 8px; display: flex; }
.bar span { display: block; height: 100%; }
.section-title { margin: 22px 0 10px; font-size: 1rem; display: flex; justify-content: space-between; align-items: center; }
.controls { display: flex; flex-wrap: wrap; gap: 8px; margin-bottom: 10px; align-items: center; }
input, select, button {
  background: var(--panel); color: var(--text); border: 1px solid var(--border);
  border-radius: 6px; padding: 6px 10px; font-size: 0.86rem;
}
button { cursor: pointer; }
button:hover { border-color: var(--accent); }
table { width: 100%; border-collapse: collapse; background: var(--panel); border: 1px solid var(--border); border-radius: 8px; overflow: hidden; font-size: 0.85rem; }
th, td { padding: 7px 10px; border-bottom: 1px solid var(--border); text-align: left; }
th { background: var(--panel2); color: var(--muted); font-weight: 600; cursor: pointer; user-select: none; white-space: nowrap; }
th:hover { color: var(--text); }
td.num, th.num { text-align: right; font-variant-numeric: tabular-nums; }
tr:hover td { background: rgba(88,166,255,0.06); }
.pill {
  display: inline-block; padding: 1px 7px; border-radius: 99px; font-size: 0.74rem; font-weight: 600;
}
.pill.banked { background: rgba(46,160,67,.2); color: #56d364; }
.pill.readable { background: rgba(57,197,207,.2); color: #56d4dd; }
.pill.draft { background: rgba(210,153,34,.2); color: #e3b341; }
.pill.near { background: rgba(219,109,40,.22); color: #f0883e; }
.pill.unmatched { background: rgba(248,81,73,.2); color: #ff7b72; }
.mono { font-family: ui-monospace, SFMono-Regular, Menlo, Consolas, monospace; font-size: 0.82rem; }
.muted { color: var(--muted); }
"""


def render_index_html(report: dict[str, Any]) -> str:
    data_json = _safe_json_for_script(_compact_payload(report))
    return _INDEX_TEMPLATE.replace("__SHARED_CSS__", _SHARED_CSS).replace("__DATA_JSON__", data_json)


_INDEX_TEMPLATE = """<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>psz-decomp Progress</title>
<style>__SHARED_CSS__
.mod-row { cursor: pointer; }
.mod-row.selected td { background: rgba(88,166,255,0.14); }
.note-cell { max-width: 380px; overflow: hidden; text-overflow: ellipsis; white-space: nowrap; }
</style>
</head>
<body>
<header>
  <div>
    <h1>Phantasy Star Zero (C24E) — Progress</h1>
    <div class="meta" id="meta"></div>
  </div>
  <nav>
    <a href="index.html" class="active">Table</a>
    <a href="treemap.html">Treemap</a>
  </nav>
</header>
<main>
  <div class="cards" id="cards"></div>

  <div class="section-title">
    <span>Modules (click a row to filter functions below)</span>
    <button id="clearModBtn" type="button">Show all modules</button>
  </div>
  <table id="modTable">
    <thead>
      <tr>
        <th data-k="module">Module</th>
        <th class="num" data-k="banked_bytes_pct">Bytes %</th>
        <th class="num" data-k="banked_bytes">Banked B</th>
        <th class="num" data-k="total_bytes">Total B</th>
        <th class="num" data-k="rem_bytes">Remaining B</th>
        <th class="num" data-k="banked_funcs_pct">Funcs %</th>
        <th class="num" data-k="banked_functions">Banked</th>
        <th class="num" data-k="draft_functions">Draft</th>
        <th class="num" data-k="near_functions">Near</th>
        <th class="num" data-k="unmatched_functions">Unmatched</th>
        <th class="num" data-k="total_functions">Total</th>
      </tr>
    </thead>
    <tbody></tbody>
  </table>

  <div class="section-title">
    <span>Functions</span>
    <span class="meta" id="fnCount"></span>
  </div>
  <div class="controls">
    <input id="q" type="search" placeholder="Search name, 0xaddr, near note..." style="min-width:240px">
    <select id="modSel"><option value="">All modules</option></select>
    <select id="tierSel">
      <option value="remaining">Remaining (non-banked)</option>
      <option value="all">All tiers</option>
      <option value="unmatched">Unmatched only</option>
      <option value="near">Near only</option>
      <option value="draft">Draft only</option>
      <option value="banked">Banked only</option>
      <option value="readable">Readable only</option>
    </select>
    <select id="verdictSel">
      <option value="all">All verdicts</option>
      <option value="game">Game logic only</option>
      <option value="plumb">Non-game / plumbing</option>
    </select>
    <select id="sortSel">
      <option value="size_desc">Largest bytes first</option>
      <option value="addr_asc">Address ascending</option>
      <option value="name_asc">Name ascending</option>
    </select>
  </div>
  <table id="fnTable">
    <thead>
      <tr>
        <th>Module</th>
        <th>Address</th>
        <th>Function</th>
        <th class="num">Bytes</th>
        <th>Tier</th>
        <th>Verdict</th>
        <th>Near / Notes</th>
      </tr>
    </thead>
    <tbody></tbody>
  </table>
  <div style="margin-top:10px;text-align:center">
    <button id="moreBtn" type="button" style="display:none">Show 500 more</button>
  </div>
</main>
<script>
const DATA = __DATA_JSON__;
const TIERS = ["banked", "draft", "near", "unmatched"];
const pct = (a, b) => b ? (100 * a / b) : 0;
const fmt = n => n.toLocaleString();
const hex = n => "0x" + n.toString(16).padStart(8, "0");

document.getElementById("meta").textContent =
  `Generated ${DATA.generated_at}${DATA.git_head ? " · commit " + DATA.git_head : ""}`;

function makeCard(label, numBytes, totBytes, numFn, totFn, extraBar) {
  const bp = pct(numBytes, totBytes), fp = pct(numFn, totFn);
  const bar = extraBar || `<span style="width:${bp.toFixed(2)}%;background:var(--banked)"></span>`;
  return `<div class="card">
    <div class="label">${label}</div>
    <div class="big">${bp.toFixed(2)}% <span class="muted" style="font-size:.82rem;font-weight:400">bytes</span></div>
    <div class="sub">${fmt(numBytes)} / ${fmt(totBytes)} B · ${fmt(numFn)}/${fmt(totFn)} funcs (${fp.toFixed(2)}%)</div>
    <div class="bar">${bar}</div>
  </div>`;
}

const tot = DATA.summary.total, a9 = DATA.summary.arm9, ov = DATA.summary.overlays;
const stacked =
  `<span style="width:${pct(tot.banked_bytes,tot.total_bytes).toFixed(2)}%;background:var(--banked)" title="Banked"></span>` +
  `<span style="width:${pct(tot.draft_bytes,tot.total_bytes).toFixed(2)}%;background:var(--draft)" title="Draft"></span>` +
  `<span style="width:${pct(tot.near_bytes,tot.total_bytes).toFixed(2)}%;background:var(--near)" title="Near"></span>` +
  `<span style="width:${pct(tot.unmatched_bytes,tot.total_bytes).toFixed(2)}%;background:var(--unmatched)" title="Unmatched"></span>`;

let cardsHtml =
  makeCard("Total Live Coverage", tot.banked_bytes, tot.total_bytes, tot.banked_functions, tot.total_functions, stacked) +
  makeCard("ARM9 Live", a9.banked_bytes, a9.total_bytes, a9.banked_functions, a9.total_functions) +
  makeCard("Overlays (ov000–ov031)", ov.banked_bytes, ov.total_bytes, ov.banked_functions, ov.total_functions);
if (tot.game_total_functions > 0) {
  cardsHtml += makeCard("Game Logic (Census)", tot.game_banked_bytes, tot.game_total_bytes, tot.game_banked_functions, tot.game_total_functions);
}
cardsHtml += makeCard("Readable Layer", tot.readable_bytes, tot.total_bytes, tot.readable_functions, tot.total_functions,
  `<span style="width:${pct(tot.readable_bytes,tot.total_bytes).toFixed(2)}%;background:var(--readable)"></span>`);
document.getElementById("cards").innerHTML = cardsHtml;

// Populate module selector + sortable module table
const modSel = document.getElementById("modSel");
for (const m of DATA.modules) {
  const o = document.createElement("option");
  o.value = m.module; o.textContent = m.module;
  modSel.appendChild(o);
}

let modSortKey = "module", modSortAsc = true;
const modRows = DATA.modules.map(m => ({
  ...m,
  rem_bytes: m.total_bytes - m.banked_bytes,
  banked_bytes_pct: pct(m.banked_bytes, m.total_bytes),
  banked_funcs_pct: pct(m.banked_functions, m.total_functions),
}));

function renderMods() {
  const tbody = document.querySelector("#modTable tbody");
  const curMod = modSel.value;
  const sorted = [...modRows].sort((a, b) => {
    let va = a[modSortKey], vb = b[modSortKey];
    if (typeof va === "string") return modSortAsc ? va.localeCompare(vb) : vb.localeCompare(va);
    return modSortAsc ? va - vb : vb - va;
  });
  tbody.innerHTML = sorted.map(m => `<tr class="mod-row${m.module === curMod ? " selected" : ""}" data-mod="${m.module}">
    <td class="mono">${m.module}</td>
    <td class="num">${m.banked_bytes_pct.toFixed(2)}%</td>
    <td class="num">${fmt(m.banked_bytes)}</td>
    <td class="num">${fmt(m.total_bytes)}</td>
    <td class="num">${fmt(m.rem_bytes)}</td>
    <td class="num">${m.banked_funcs_pct.toFixed(2)}%</td>
    <td class="num">${fmt(m.banked_functions)}</td>
    <td class="num">${fmt(m.draft_functions)}</td>
    <td class="num">${fmt(m.near_functions)}</td>
    <td class="num">${fmt(m.unmatched_functions)}</td>
    <td class="num">${fmt(m.total_functions)}</td>
  </tr>`).join("");
  for (const tr of tbody.querySelectorAll("tr")) {
    tr.addEventListener("click", () => {
      modSel.value = (modSel.value === tr.dataset.mod) ? "" : tr.dataset.mod;
      limit = 250;
      renderMods();
      renderFns();
    });
  }
}

for (const th of document.querySelectorAll("#modTable th")) {
  th.addEventListener("click", () => {
    const k = th.dataset.k;
    if (modSortKey === k) modSortAsc = !modSortAsc;
    else { modSortKey = k; modSortAsc = (k === "module"); }
    renderMods();
  });
}

document.getElementById("clearModBtn").addEventListener("click", () => {
  modSel.value = "";
  limit = 250;
  renderMods();
  renderFns();
});

// Function table
const qEl = document.getElementById("q");
const tierSel = document.getElementById("tierSel");
const verdictSel = document.getElementById("verdictSel");
const sortSel = document.getElementById("sortSel");
const moreBtn = document.getElementById("moreBtn");
let limit = 250;

function esc(s) {
  return String(s).replace(/&/g,"&amp;").replace(/</g,"&lt;").replace(/>/g,"&gt;").replace(/"/g,"&quot;");
}

function renderFns() {
  const q = qEl.value.trim().toLowerCase();
  const mod = modSel.value;
  const tier = tierSel.value;
  const verd = verdictSel.value;
  const srt = sortSel.value;

  let list = DATA.functions.filter(f => {
    if (mod && f[0] !== mod) return false;
    const tName = TIERS[f[4]];
    if (tier === "remaining" && tName === "banked") return false;
    else if (tier === "readable" && !f[5]) return false;
    else if (tier !== "all" && tier !== "remaining" && tier !== "readable" && tName !== tier) return false;
    if (verd === "game" && !f[7]) return false;
    if (verd === "plumb" && f[7]) return false;
    if (q) {
      const hay = (f[0] + " " + hex(f[1]) + " " + f[2] + " " + f[6] + " " + f[9]).toLowerCase();
      if (!hay.includes(q)) return false;
    }
    return true;
  });

  if (srt === "size_desc") list.sort((a, b) => (b[3] - a[3]) || (a[1] - b[1]));
  else if (srt === "addr_asc") list.sort((a, b) => a[0].localeCompare(b[0]) || (a[1] - b[1]));
  else list.sort((a, b) => a[2].localeCompare(b[2]));

  const sumBytes = list.reduce((acc, f) => acc + f[3], 0);
  document.getElementById("fnCount").textContent =
    `${fmt(list.length)} functions · ${fmt(sumBytes)} bytes (showing ${Math.min(limit, list.length)})`;

  const slice = list.slice(0, limit);
  document.querySelector("#fnTable tbody").innerHTML = slice.map(f => {
    const tName = TIERS[f[4]];
    const rdPill = f[5] ? ' <span class="pill readable">readable</span>' : '';
    return `<tr>
      <td class="mono">${esc(f[0])}</td>
      <td class="mono">${hex(f[1])}</td>
      <td class="mono">${esc(f[2])}</td>
      <td class="num mono">${fmt(f[3])}</td>
      <td><span class="pill ${tName}">${tName}</span>${rdPill}</td>
      <td class="muted">${esc(f[6] || "—")}</td>
      <td class="note-cell muted" title="${esc(f[9])}">${esc(f[9])}</td>
    </tr>`;
  }).join("");

  moreBtn.style.display = list.length > limit ? "inline-block" : "none";
}

for (const el of [qEl, modSel, tierSel, verdictSel, sortSel]) {
  el.addEventListener("input", () => { limit = 250; renderMods(); renderFns(); });
  el.addEventListener("change", () => { limit = 250; renderMods(); renderFns(); });
}
moreBtn.addEventListener("click", () => { limit += 500; renderFns(); });

renderMods();
renderFns();
</script>
</body>
</html>
"""


def render_treemap_html(report: dict[str, Any]) -> str:
    data_json = _safe_json_for_script(_compact_payload(report))
    return _TREEMAP_TEMPLATE.replace("__SHARED_CSS__", _SHARED_CSS).replace("__DATA_JSON__", data_json)


_TREEMAP_TEMPLATE = """<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>psz-decomp Byte Treemap</title>
<style>__SHARED_CSS__
html, body { height: 100%; overflow: hidden; display: flex; flex-direction: column; }
.toolbar {
  display: flex; flex-wrap: wrap; gap: 8px; align-items: center;
  padding: 10px 20px; background: var(--panel2); border-bottom: 1px solid var(--border);
}
.legend { display: flex; gap: 12px; margin-left: auto; font-size: 0.82rem; color: var(--muted); flex-wrap: wrap; }
.swatch { display: inline-block; width: 10px; height: 10px; border-radius: 2px; margin-right: 4px; vertical-align: -1px; }
#stage { position: relative; flex: 1; min-height: 0; }
canvas { width: 100%; height: 100%; display: block; }
#tip {
  position: fixed; pointer-events: none; z-index: 20; display: none;
  background: rgba(13,17,23,0.96); border: 1px solid var(--border); border-radius: 6px;
  padding: 8px 10px; font-size: 0.82rem; max-width: 380px; box-shadow: 0 6px 20px rgba(0,0,0,.5);
}
#tip .t-title { font-weight: 700; font-family: ui-monospace, SFMono-Regular, Menlo, monospace; margin-bottom: 3px; }
#tip .t-note { color: #f0883e; margin-top: 4px; word-break: break-word; }
</style>
</head>
<body>
<header>
  <div>
    <h1>Phantasy Star Zero (C24E) — Byte Treemap</h1>
    <div class="meta" id="meta"></div>
  </div>
  <nav>
    <a href="index.html">Table</a>
    <a href="treemap.html" class="active">Treemap</a>
  </nav>
</header>
<div class="toolbar">
  <select id="scopeSel">
    <option value="all">All Live (ARM9 + Overlays)</option>
    <option value="remaining">Remaining (non-banked) only</option>
    <option value="game">Game Logic (census) only</option>
    <option value="arm9">ARM9 only</option>
    <option value="overlays">Overlays only</option>
  </select>
  <input id="searchBox" type="search" placeholder="Highlight name / 0xaddr..." style="min-width:210px">
  <button id="zoomOutBtn" type="button" style="display:none">← All modules</button>
  <span class="meta" id="crumb">Click a module to zoom in · Esc to zoom out</span>
  <div class="legend">
    <span><i class="swatch" style="background:#39c5cf"></i>Readable</span>
    <span><i class="swatch" style="background:#2ea043"></i>Banked</span>
    <span><i class="swatch" style="background:#d29922"></i>Draft</span>
    <span><i class="swatch" style="background:#db6d28"></i>Near</span>
    <span><i class="swatch" style="background:#da3633"></i>Unmatched</span>
  </div>
</div>
<div id="stage">
  <canvas id="cv"></canvas>
</div>
<div id="tip"></div>
<script>
const DATA = __DATA_JSON__;
const TIERS = ["banked", "draft", "near", "unmatched"];
const COLORS = {
  readable: "#2b9ca6",
  banked: "#238636",
  draft: "#9e6a03",
  near: "#bd561d",
  unmatched: "#b62324",
};
const fmt = n => n.toLocaleString();
const hex = n => "0x" + n.toString(16).padStart(8, "0");

document.getElementById("meta").textContent =
  `Generated ${DATA.generated_at}${DATA.git_head ? " · commit " + DATA.git_head : ""}`;

const cv = document.getElementById("cv");
const ctx = cv.getContext("2d");
const tip = document.getElementById("tip");
const scopeSel = document.getElementById("scopeSel");
const searchBox = document.getElementById("searchBox");
const zoomOutBtn = document.getElementById("zoomOutBtn");
const crumb = document.getElementById("crumb");

let zoomedMod = null;
let hitRects = [];
let modRects = [];

function squarify(items, x, y, w, h) {
  const out = [];
  if (!items.length || w <= 0 || h <= 0) return out;
  const total = items.reduce((s, it) => s + it.val, 0);
  if (total <= 0) return out;
  const scale = (w * h) / total;
  let rem = items.map(it => ({ ...it, area: Math.max(it.val * scale, 0.0001) }));
  let rx = x, ry = y, rw = w, rh = h;

  function worst(row, side) {
    if (!row.length || side <= 0) return Infinity;
    let sum = 0, mx = 0, mn = Infinity;
    for (const r of row) { sum += r.area; if (r.area > mx) mx = r.area; if (r.area < mn) mn = r.area; }
    const s2 = sum * sum, side2 = side * side;
    return Math.max((side2 * mx) / s2, s2 / (side2 * mn));
  }

  function layoutRow(row) {
    const sum = row.reduce((s, r) => s + r.area, 0);
    if (rw >= rh) {
      const colW = rh > 0 ? sum / rh : 0;
      let cy = ry;
      for (const r of row) {
        const rh2 = colW > 0 ? r.area / colW : 0;
        out.push({ ...r, x: rx, y: cy, w: colW, h: rh2 });
        cy += rh2;
      }
      rx += colW; rw -= colW;
    } else {
      const rowH = rw > 0 ? sum / rw : 0;
      let cx = rx;
      for (const r of row) {
        const rw2 = rowH > 0 ? r.area / rowH : 0;
        out.push({ ...r, x: cx, y: ry, w: rw2, h: rowH });
        cx += rw2;
      }
      ry += rowH; rh -= rowH;
    }
  }

  let idx = 0;
  while (idx < rem.length) {
    const side = Math.min(rw, rh);
    if (side <= 0.5) break;
    const row = [rem[idx++]];
    let curWorst = worst(row, side);
    while (idx < rem.length) {
      row.push(rem[idx]);
      const nxtWorst = worst(row, side);
      if (nxtWorst <= curWorst) { curWorst = nxtWorst; idx++; }
      else { row.pop(); break; }
    }
    layoutRow(row);
  }
  return out;
}

function filteredFunctions() {
  const scope = scopeSel.value;
  return DATA.functions.filter(f => {
    if (zoomedMod && f[0] !== zoomedMod) return false;
    if (scope === "remaining" && f[4] === 0) return false;
    if (scope === "game" && !f[7]) return false;
    if (scope === "arm9" && f[0] !== "arm9") return false;
    if (scope === "overlays" && f[0] === "arm9") return false;
    return true;
  });
}

function tileColor(f) {
  if (f[5]) return COLORS.readable;
  return COLORS[TIERS[f[4]]] || COLORS.unmatched;
}

function draw() {
  const rect = cv.getBoundingClientRect();
  const dpr = window.devicePixelRatio || 1;
  cv.width = Math.max(1, Math.floor(rect.width * dpr));
  cv.height = Math.max(1, Math.floor(rect.height * dpr));
  ctx.setTransform(dpr, 0, 0, dpr, 0, 0);
  const W = rect.width, H = rect.height;

  ctx.fillStyle = "#0d1117";
  ctx.fillRect(0, 0, W, H);

  const q = searchBox.value.trim().toLowerCase();
  const fns = filteredFunctions();
  hitRects = [];
  modRects = [];

  zoomOutBtn.style.display = zoomedMod ? "inline-block" : "none";
  const totalBytes = fns.reduce((s, f) => s + f[3], 0);
  const bankedBytes = fns.reduce((s, f) => s + (f[4] === 0 ? f[3] : 0), 0);
  const bp = totalBytes ? (100 * bankedBytes / totalBytes).toFixed(2) : "0.00";
  crumb.textContent = zoomedMod
    ? `${zoomedMod} · ${fmt(fns.length)} funcs · ${fmt(bankedBytes)}/${fmt(totalBytes)} B (${bp}%)`
    : `All modules · ${fmt(fns.length)} funcs · ${fmt(bankedBytes)}/${fmt(totalBytes)} B (${bp}%) · click module to zoom`;

  if (!fns.length) {
    ctx.fillStyle = "#8b949e";
    ctx.font = "14px sans-serif";
    ctx.fillText("No functions match the current filter.", 20, 34);
    return;
  }

  const groups = new Map();
  for (const f of fns) {
    if (!groups.has(f[0])) groups.set(f[0], []);
    groups.get(f[0]).push(f);
  }

  const modItems = [];
  for (const [mod, list] of groups.entries()) {
    list.sort((a, b) => b[3] - a[3]);
    const bytes = list.reduce((s, f) => s + Math.max(f[3], 1), 0);
    const bBytes = list.reduce((s, f) => s + (f[4] === 0 ? f[3] : 0), 0);
    modItems.push({ mod, list, val: bytes, banked: bBytes });
  }
  modItems.sort((a, b) => b.val - a.val);

  const pad = 4;
  const mLayout = zoomedMod
    ? [{ ...modItems[0], x: pad, y: pad, w: W - pad * 2, h: H - pad * 2 }]
    : squarify(modItems, pad, pad, W - pad * 2, H - pad * 2);

  for (const mr of mLayout) {
    modRects.push(mr);
    const hdrH = (!zoomedMod && mr.h > 26 && mr.w > 46) ? 16 : 0;
    ctx.fillStyle = "#161b22";
    ctx.fillRect(mr.x, mr.y, mr.w, mr.h);
    const ix = mr.x + 1, iy = mr.y + hdrH + 1, iw = mr.w - 2, ih = mr.h - hdrH - 2;

    if (iw > 1 && ih > 1) {
      const fnItems = mr.list.map(f => ({ fn: f, val: Math.max(f[3], 1) }));
      const fLayout = squarify(fnItems, ix, iy, iw, ih);
      for (const fr of fLayout) {
        const f = fr.fn;
        const matched = q && (f[2].toLowerCase().includes(q) || hex(f[1]).includes(q) || f[9].toLowerCase().includes(q));
        ctx.fillStyle = matched ? "#58a6ff" : tileColor(f);
        ctx.fillRect(fr.x, fr.y, Math.max(0.5, fr.w - 0.6), Math.max(0.5, fr.h - 0.6));
        if (q && !matched) {
          ctx.fillStyle = "rgba(13,17,23,0.65)";
          ctx.fillRect(fr.x, fr.y, fr.w, fr.h);
        }
        if (fr.w > 54 && fr.h > 15) {
          ctx.fillStyle = "#f0f6fc";
          ctx.font = "11px ui-monospace, SFMono-Regular, Menlo, monospace";
          ctx.save();
          ctx.beginPath(); ctx.rect(fr.x + 2, fr.y + 1, fr.w - 4, fr.h - 2); ctx.clip();
          ctx.fillText(f[2], fr.x + 3, fr.y + 12);
          if (fr.h > 28) {
            ctx.fillStyle = "rgba(240,246,252,0.75)";
            ctx.fillText(fmt(f[3]) + " B", fr.x + 3, fr.y + 24);
          }
          ctx.restore();
        }
        hitRects.push({ x: fr.x, y: fr.y, w: fr.w, h: fr.h, fn: f, mod: mr.mod });
      }
    }

    if (hdrH) {
      ctx.fillStyle = "#0d1117";
      ctx.fillRect(mr.x + 1, mr.y + 1, mr.w - 2, hdrH - 1);
      ctx.fillStyle = "#e6edf3";
      ctx.font = "bold 11px ui-monospace, SFMono-Regular, Menlo, monospace";
      ctx.save();
      ctx.beginPath(); ctx.rect(mr.x + 3, mr.y + 1, mr.w - 6, hdrH); ctx.clip();
      const mp = mr.val ? (100 * mr.banked / mr.val).toFixed(0) : "0";
      ctx.fillText(`${mr.mod} (${mp}%)`, mr.x + 4, mr.y + 12);
      ctx.restore();
    }
    ctx.strokeStyle = "#30363d";
    ctx.lineWidth = 1;
    ctx.strokeRect(mr.x + 0.5, mr.y + 0.5, Math.max(0, mr.w - 1), Math.max(0, mr.h - 1));
  }
}

function esc(s) {
  return String(s).replace(/&/g,"&amp;").replace(/</g,"&lt;").replace(/>/g,"&gt;");
}

cv.addEventListener("mousemove", e => {
  const rect = cv.getBoundingClientRect();
  const mx = e.clientX - rect.left, my = e.clientY - rect.top;
  let hit = null;
  for (let i = hitRects.length - 1; i >= 0; i--) {
    const r = hitRects[i];
    if (mx >= r.x && mx <= r.x + r.w && my >= r.y && my <= r.y + r.h) { hit = r; break; }
  }
  if (!hit) { tip.style.display = "none"; return; }
  const f = hit.fn;
  const tier = TIERS[f[4]] + (f[5] ? " + readable" : "");
  tip.innerHTML = `<div class="t-title">${esc(f[2])}</div>` +
    `<div>${esc(f[0])} · ${hex(f[1])} · <b>${fmt(f[3])} B</b> (0x${f[3].toString(16)})</div>` +
    `<div class="muted">tier: ${esc(tier)} · reach: ${esc(f[8])}${f[6] ? " · verdict: " + esc(f[6]) : ""}</div>` +
    (f[9] ? `<div class="t-note">near: ${esc(f[9])}</div>` : "");
  tip.style.display = "block";
  const tx = Math.min(window.innerWidth - tip.offsetWidth - 12, e.clientX + 14);
  const ty = Math.min(window.innerHeight - tip.offsetHeight - 12, e.clientY + 14);
  tip.style.left = Math.max(8, tx) + "px";
  tip.style.top = Math.max(8, ty) + "px";
});
cv.addEventListener("mouseleave", () => { tip.style.display = "none"; });

cv.addEventListener("click", e => {
  if (zoomedMod) return;
  const rect = cv.getBoundingClientRect();
  const mx = e.clientX - rect.left, my = e.clientY - rect.top;
  for (const mr of modRects) {
    if (mx >= mr.x && mx <= mr.x + mr.w && my >= mr.y && my <= mr.y + mr.h) {
      zoomedMod = mr.mod;
      draw();
      break;
    }
  }
});

zoomOutBtn.addEventListener("click", () => { zoomedMod = null; draw(); });
window.addEventListener("keydown", e => { if (e.key === "Escape" && zoomedMod) { zoomedMod = null; draw(); } });
scopeSel.addEventListener("change", draw);
searchBox.addEventListener("input", draw);
window.addEventListener("resize", draw);

draw();
</script>
</body>
</html>
"""


def write_site(report: dict[str, Any], out_dir: pathlib.Path) -> None:
    out_dir.mkdir(parents=True, exist_ok=True)
    (out_dir / "report.json").write_text(
        json.dumps(report, indent=2) + "\n", encoding="utf-8"
    )
    (out_dir / "index.html").write_text(render_index_html(report), encoding="utf-8")
    (out_dir / "treemap.html").write_text(render_treemap_html(report), encoding="utf-8")


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter
    )
    parser.add_argument(
        "-o", "--out", type=pathlib.Path, default=REPO / "match" / "progress",
        help="Output directory for report.json, index.html, and treemap.html "
             "(default: match/progress)",
    )
    parser.add_argument(
        "--json", type=pathlib.Path, default=None,
        help="Also (or solely, with --json-only) write JSON report to this path",
    )
    parser.add_argument(
        "--json-only", action="store_true",
        help="Skip HTML rendering; write JSON report only",
    )
    parser.add_argument(
        "--badges", type=pathlib.Path, default=None,
        help="Write shields.io endpoint JSON badges to this directory",
    )
    parser.add_argument(
        "--from-report", type=pathlib.Path, default=None,
        help="Render HTML/badges from an existing report.json instead of scanning the repo",
    )
    parser.add_argument(
        "-q", "--quiet", action="store_true",
        help="Suppress terminal summary output",
    )
    args = parser.parse_args(argv)

    if args.from_report is not None:
        report = json.loads(args.from_report.read_text(encoding="utf-8"))
    else:
        report = collect_report(REPO)

    if args.json is not None:
        args.json.parent.mkdir(parents=True, exist_ok=True)
        args.json.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")

    if not args.json_only:
        write_site(report, args.out)
    elif args.json is None:
        args.out.mkdir(parents=True, exist_ok=True)
        (args.out / "report.json").write_text(
            json.dumps(report, indent=2) + "\n", encoding="utf-8"
        )

    if args.badges is not None:
        write_badges(report, args.badges)

    if not args.quiet:
        print(format_terminal_summary(report))
        if args.json_only:
            target = args.json or (args.out / "report.json")
            print(f"\nWrote JSON report: {target}")
        else:
            print(f"\nWrote progress site: {args.out / 'index.html'}  |  {args.out / 'treemap.html'}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
