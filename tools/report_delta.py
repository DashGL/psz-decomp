#!/usr/bin/env python3
"""Compare two progress reports keyed by (module, virtual_address).

Inspired by zeroz41/pso-decomp's report_delta.py: keying by original address
guarantees that symbol renames, file moves, or future TU consolidations never
hide a lost match or a regressed readable file.

Usage:
  # Save a baseline before making changes:
  python tools/progress_map.py --json-only --json match/progress/baseline.json

  # Compare baseline against the current working tree:
  python tools/report_delta.py match/progress/baseline.json --check

  # Compare two saved reports:
  python tools/report_delta.py before.json after.json --check
  python tools/report_delta.py before.json after.json --json match/progress/delta.json
"""
from __future__ import annotations

import argparse
import json
import pathlib
import sys
from typing import Any

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))

import progress_map as PM  # noqa: E402

TIER_RANK = {"unmatched": 0, "near": 1, "draft": 2, "banked": 3}


def _index_functions(report: dict[str, Any]) -> dict[tuple[str, int], dict[str, Any]]:
    idx: dict[tuple[str, int], dict[str, Any]] = {}
    for fn in report.get("functions", []):
        key = (str(fn["module"]), int(fn["addr"]))
        if key in idx:
            raise ValueError(f"Duplicate original address in report: {key[0]}:0x{key[1]:08x}")
        idx[key] = fn
    return idx


def compute_delta(
    before: dict[str, Any],
    after: dict[str, Any],
    *,
    strict_tier: bool = False,
) -> dict[str, Any]:
    """Compute address-keyed progression/regression delta between two reports."""
    b_map = _index_functions(before)
    a_map = _index_functions(after)

    lost_banked: list[dict[str, Any]] = []
    gained_banked: list[dict[str, Any]] = []
    lost_readable: list[dict[str, Any]] = []
    gained_readable: list[dict[str, Any]] = []
    tier_regressions: list[dict[str, Any]] = []
    tier_progressions: list[dict[str, Any]] = []
    renamed: list[dict[str, Any]] = []
    removed_live: list[dict[str, Any]] = []
    added_live: list[dict[str, Any]] = []

    all_keys = sorted(set(b_map) | set(a_map), key=lambda k: (PM._module_sort_key(k[0]), k[1]))
    for key in all_keys:
        bf = b_map.get(key)
        af = a_map.get(key)
        mod, addr = key

        if bf is not None and af is None:
            entry = {
                "module": mod,
                "addr": addr,
                "addr_hex": f"0x{addr:08x}",
                "name": bf["name"],
                "size": int(bf["size"]),
                "before_tier": bf["tier"],
                "after_tier": "removed",
            }
            removed_live.append(entry)
            if bf["tier"] == "banked":
                lost_banked.append(entry)
            if bf.get("readable"):
                lost_readable.append(entry)
            continue

        if bf is None and af is not None:
            entry = {
                "module": mod,
                "addr": addr,
                "addr_hex": f"0x{addr:08x}",
                "name": af["name"],
                "size": int(af["size"]),
                "before_tier": "absent",
                "after_tier": af["tier"],
            }
            added_live.append(entry)
            if af["tier"] == "banked":
                gained_banked.append(entry)
            if af.get("readable"):
                gained_readable.append(entry)
            continue

        assert bf is not None and af is not None
        if bf["name"] != af["name"]:
            renamed.append({
                "module": mod,
                "addr": addr,
                "addr_hex": f"0x{addr:08x}",
                "before_name": bf["name"],
                "after_name": af["name"],
                "size": int(af["size"]),
                "tier": af["tier"],
            })

        bt, at = bf["tier"], af["tier"]
        row = {
            "module": mod,
            "addr": addr,
            "addr_hex": f"0x{addr:08x}",
            "name": af["name"],
            "size": int(af["size"]),
            "before_tier": bt,
            "after_tier": at,
            "verdict": af.get("verdict", ""),
        }
        if bt == "banked" and at != "banked":
            lost_banked.append(row)
        elif bt != "banked" and at == "banked":
            gained_banked.append(row)

        if bf.get("readable") and not af.get("readable"):
            lost_readable.append(row)
        elif not bf.get("readable") and af.get("readable"):
            gained_readable.append(row)

        br, ar = TIER_RANK.get(bt, 0), TIER_RANK.get(at, 0)
        if ar < br:
            tier_regressions.append(row)
        elif ar > br:
            tier_progressions.append(row)

    def _bucket_delta(scope: str) -> dict[str, dict[str, int]]:
        b_bkt = before["summary"][scope]
        a_bkt = after["summary"][scope]
        out: dict[str, dict[str, int]] = {}
        for k in (
            "banked_functions",
            "banked_bytes",
            "readable_functions",
            "readable_bytes",
            "draft_functions",
            "draft_bytes",
            "near_functions",
            "near_bytes",
            "unmatched_functions",
            "unmatched_bytes",
            "game_banked_functions",
            "game_banked_bytes",
            "total_functions",
            "total_bytes",
        ):
            bv = int(b_bkt.get(k, 0))
            av = int(a_bkt.get(k, 0))
            out[k] = {"before": bv, "after": av, "delta": av - bv}
        return out

    metrics = {
        "total": _bucket_delta("total"),
        "arm9": _bucket_delta("arm9"),
        "overlays": _bucket_delta("overlays"),
    }

    has_regression = bool(lost_banked or lost_readable)
    if strict_tier and tier_regressions:
        has_regression = True

    return {
        "before_head": before.get("git_head"),
        "after_head": after.get("git_head"),
        "has_regression": has_regression,
        "strict_tier": strict_tier,
        "metrics": metrics,
        "lost_banked": lost_banked,
        "gained_banked": gained_banked,
        "lost_readable": lost_readable,
        "gained_readable": gained_readable,
        "tier_regressions": tier_regressions,
        "tier_progressions": tier_progressions,
        "renamed": renamed,
        "removed_live": removed_live,
        "added_live": added_live,
    }


def _signed(n: int) -> str:
    return f"{n:+,d}" if n else "0"


def format_delta(delta: dict[str, Any], *, limit: int = 40) -> str:
    m = delta["metrics"]
    tot = m["total"]
    a9 = m["arm9"]
    ov = m["overlays"]

    lines = ["=== Address-Keyed Progress Delta ==="]
    if delta.get("before_head") or delta.get("after_head"):
        lines.append(
            f"Revisions : {delta.get('before_head') or 'unknown'} -> "
            f"{delta.get('after_head') or 'working tree'}"
        )

    def _row(label: str, fn_d: dict[str, int], b_d: dict[str, int]) -> str:
        return (
            f"  {label:14s}: {fn_d['before']:,} -> {fn_d['after']:,} funcs ({_signed(fn_d['delta'])})  |  "
            f"{b_d['before']:,} -> {b_d['after']:,} B ({_signed(b_d['delta'])} B)"
        )

    lines.append(_row("Total banked", tot["banked_functions"], tot["banked_bytes"]))
    lines.append(_row("ARM9 banked", a9["banked_functions"], a9["banked_bytes"]))
    lines.append(_row("Overlay banked", ov["banked_functions"], ov["banked_bytes"]))
    lines.append(_row("Game logic", tot["game_banked_functions"], tot["game_banked_bytes"]))
    lines.append(_row("Readable", tot["readable_functions"], tot["readable_bytes"]))
    lines.append(_row("Draft", tot["draft_functions"], tot["draft_bytes"]))
    lines.append(_row("Near", tot["near_functions"], tot["near_bytes"]))

    def _emit_list(title: str, items: list[dict[str, Any]], fmt_fn) -> None:
        if not items:
            return
        lines.append(f"\n{title} ({len(items)}):")
        for item in items[:limit]:
            lines.append("  " + fmt_fn(item))
        if len(items) > limit:
            lines.append(f"  ... and {len(items) - limit} more")

    _emit_list(
        "REGRESSIONS — lost banked matches",
        delta["lost_banked"],
        lambda x: f"{x['module']:5s} {x['addr_hex']} {x['name']:24s} {x['size']:5,d} B  ({x['before_tier']} -> {x['after_tier']})",
    )
    _emit_list(
        "REGRESSIONS — lost readable files",
        delta["lost_readable"],
        lambda x: f"{x['module']:5s} {x['addr_hex']} {x['name']:24s} {x['size']:5,d} B",
    )
    if delta["strict_tier"]:
        non_banked_reg = [x for x in delta["tier_regressions"] if x["before_tier"] != "banked"]
        _emit_list(
            "REGRESSIONS — tier downgrades (--strict-tier)",
            non_banked_reg,
            lambda x: f"{x['module']:5s} {x['addr_hex']} {x['name']:24s} {x['size']:5,d} B  ({x['before_tier']} -> {x['after_tier']})",
        )

    _emit_list(
        "Newly banked matches",
        delta["gained_banked"],
        lambda x: f"{x['module']:5s} {x['addr_hex']} {x['name']:24s} +{x['size']:,d} B  ({x['before_tier']} -> banked)",
    )
    _emit_list(
        "Newly readable files",
        delta["gained_readable"],
        lambda x: f"{x['module']:5s} {x['addr_hex']} {x['name']:24s} +{x['size']:,d} B",
    )
    _emit_list(
        "Renamed symbols (same address — not regressions)",
        delta["renamed"],
        lambda x: f"{x['module']:5s} {x['addr_hex']} {x['before_name']} -> {x['after_name']} ({x['tier']})",
    )

    verdict = "FAIL (regression detected)" if delta["has_regression"] else "PASS (zero regressions)"
    lines.append(f"\nDelta gate: {verdict}")
    return "\n".join(lines)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter
    )
    parser.add_argument(
        "before", type=pathlib.Path,
        help="Baseline report.json from progress_map.py",
    )
    parser.add_argument(
        "after", type=pathlib.Path, nargs="?", default=None,
        help="Optional second report.json (defaults to live scan of current working tree)",
    )
    parser.add_argument(
        "--check", action="store_true",
        help="Exit 1 if any previously banked or readable function regressed",
    )
    parser.add_argument(
        "--strict-tier", action="store_true",
        help="Also treat draft->near/unmatched and near->unmatched downgrades as regressions",
    )
    parser.add_argument(
        "--json", type=pathlib.Path, default=None,
        help="Write structured delta report as JSON to PATH",
    )
    parser.add_argument(
        "--limit", type=int, default=40,
        help="Max per-function rows printed per category (default: 40)",
    )
    args = parser.parse_args(argv)

    if not args.before.is_file():
        print(f"ERROR: baseline report not found: {args.before}", file=sys.stderr)
        return 2

    before_report = json.loads(args.before.read_text(encoding="utf-8"))
    if args.after is not None:
        if not args.after.is_file():
            print(f"ERROR: after report not found: {args.after}", file=sys.stderr)
            return 2
        after_report = json.loads(args.after.read_text(encoding="utf-8"))
    else:
        after_report = PM.collect_report(REPO)

    delta = compute_delta(before_report, after_report, strict_tier=args.strict_tier)
    print(format_delta(delta, limit=args.limit))

    if args.json is not None:
        args.json.parent.mkdir(parents=True, exist_ok=True)
        args.json.write_text(json.dumps(delta, indent=2) + "\n", encoding="utf-8")

    if args.check and delta["has_regression"]:
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
