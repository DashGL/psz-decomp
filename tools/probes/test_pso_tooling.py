#!/usr/bin/env python3
"""Unit tests for the pso-decomp-inspired tooling additions:
  - tools/progress_map.py
  - tools/report_delta.py
  - tools/probes/verify_c_link.py (bisect_culprits)
  - tools/probes/lint_readable.py (--tree, --diff, X1..X3 cross-file debt)
"""
from __future__ import annotations

import copy
import json
import pathlib
import sys
import tempfile
import unittest

REPO = pathlib.Path(__file__).resolve().parents[2]
sys.path.insert(0, str(REPO / "tools"))
sys.path.insert(0, str(REPO / "tools" / "probes"))

import progress_map as PM  # noqa: E402
import report_delta as RD  # noqa: E402
import verify_c_link as VCL  # noqa: E402
import lint_readable as LR  # noqa: E402


def _make_sample_report() -> dict:
    fns = [
        {"module": "arm9", "addr": 0x02001000, "addr_hex": "0x02001000", "name": "FUN_02001000",
         "size": 0x100, "tier": "banked", "readable": True, "verdict": "game", "is_game": True,
         "reachability": "call_reachable", "mode": "thumb", "path": "src/arm9/FUN_02001000.c", "near_note": ""},
        {"module": "arm9", "addr": 0x02001100, "addr_hex": "0x02001100", "name": "FUN_02001100",
         "size": 0x80, "tier": "draft", "readable": False, "verdict": "plumb", "is_game": False,
         "reachability": "call_reachable", "mode": "thumb", "path": "drafts/arm9/FUN_02001100.c", "near_note": ""},
        {"module": "ov001", "addr": 0x02120000, "addr_hex": "0x02120000", "name": "FUN_overlay_1__02120000",
         "size": 0x40, "tier": "near", "readable": False, "verdict": "", "is_game": False,
         "reachability": "indirect_only", "mode": "arm", "path": "drafts/near/ov001/FUN_overlay_1__02120000.c",
         "near_note": "r4/r5 coloring"},
    ]
    tot, a9, ov = PM._empty_bucket(), PM._empty_bucket(), PM._empty_bucket()
    mods: dict[str, dict] = {}
    for f in fns:
        PM._accum(tot, f)
        PM._accum(a9 if f["module"] == "arm9" else ov, f)
        mb = mods.setdefault(f["module"], PM._empty_bucket())
        PM._accum(mb, f)
    return {
        "schema_version": 1,
        "project": "psz-decomp",
        "generated_at": "2026-11-23T00:00:00Z",
        "git_head": "aaaaaaaaaaaa",
        "summary": {"total": tot, "arm9": a9, "overlays": ov},
        "modules": [{"module": m, **b} for m, b in mods.items()],
        "functions": fns,
    }


def _recompute_summary(report: dict) -> dict:
    tot, a9, ov = PM._empty_bucket(), PM._empty_bucket(), PM._empty_bucket()
    for f in report["functions"]:
        PM._accum(tot, f)
        PM._accum(a9 if f["module"] == "arm9" else ov, f)
    report["summary"] = {"total": tot, "arm9": a9, "overlays": ov}
    return report


class TestProgressMap(unittest.TestCase):
    def test_collect_real_repo_consistency(self):
        rep = PM.collect_report(REPO)
        tot = rep["summary"]["total"]
        a9 = rep["summary"]["arm9"]
        ov = rep["summary"]["overlays"]

        self.assertEqual(tot["total_functions"], a9["total_functions"] + ov["total_functions"])
        self.assertEqual(tot["total_bytes"], a9["total_bytes"] + ov["total_bytes"])
        self.assertEqual(
            tot["banked_functions"] + tot["draft_functions"]
            + tot["near_functions"] + tot["unmatched_functions"],
            tot["total_functions"],
        )
        self.assertEqual(
            tot["banked_bytes"] + tot["draft_bytes"]
            + tot["near_bytes"] + tot["unmatched_bytes"],
            tot["total_bytes"],
        )
        self.assertEqual(tot["total_bytes"], sum(f["size"] for f in rep["functions"]))
        keys = [(f["module"], f["addr"]) for f in rep["functions"]]
        self.assertEqual(len(keys), len(set(keys)))

    def test_render_site_and_badges(self):
        rep = _make_sample_report()
        with tempfile.TemporaryDirectory() as td:
            out = pathlib.Path(td) / "site"
            badges = pathlib.Path(td) / "badges"
            PM.write_site(rep, out)
            PM.write_badges(rep, badges)
            self.assertTrue((out / "report.json").is_file())
            self.assertTrue((out / "index.html").is_file())
            self.assertTrue((out / "treemap.html").is_file())
            self.assertIn("FUN_02001000", (out / "index.html").read_text(encoding="utf-8"))
            self.assertIn("r4/r5 coloring", (out / "treemap.html").read_text(encoding="utf-8"))
            badge = json.loads((badges / "code-bytes.json").read_text(encoding="utf-8"))
            self.assertEqual(badge["schemaVersion"], 1)
            self.assertTrue(badge["message"].endswith("%"))


class TestReportDelta(unittest.TestCase):
    def test_rename_is_not_regression(self):
        before = _make_sample_report()
        after = copy.deepcopy(before)
        after["functions"][0]["name"] = "Player_Update"
        delta = RD.compute_delta(before, after)
        self.assertFalse(delta["has_regression"])
        self.assertEqual(len(delta["renamed"]), 1)
        self.assertEqual(delta["renamed"][0]["after_name"], "Player_Update")
        self.assertEqual(delta["lost_banked"], [])

    def test_promotion_and_regression(self):
        before = _make_sample_report()
        after = copy.deepcopy(before)
        after["functions"][2]["tier"] = "banked"
        _recompute_summary(after)
        delta = RD.compute_delta(before, after)
        self.assertFalse(delta["has_regression"])
        self.assertEqual(len(delta["gained_banked"]), 1)
        self.assertEqual(delta["metrics"]["total"]["banked_bytes"]["delta"], 0x40)

        # Now regress a banked function
        reg = copy.deepcopy(before)
        reg["functions"][0]["tier"] = "near"
        _recompute_summary(reg)
        d_reg = RD.compute_delta(before, reg)
        self.assertTrue(d_reg["has_regression"])
        self.assertEqual(len(d_reg["lost_banked"]), 1)

        # Regress readable flag only
        reg_r = copy.deepcopy(before)
        reg_r["functions"][0]["readable"] = False
        _recompute_summary(reg_r)
        d_r = RD.compute_delta(before, reg_r)
        self.assertTrue(d_r["has_regression"])
        self.assertEqual(len(d_r["lost_readable"]), 1)

    def test_strict_tier(self):
        before = _make_sample_report()
        after = copy.deepcopy(before)
        after["functions"][1]["tier"] = "near"  # draft -> near
        _recompute_summary(after)
        self.assertFalse(RD.compute_delta(before, after, strict_tier=False)["has_regression"])
        self.assertTrue(RD.compute_delta(before, after, strict_tier=True)["has_regression"])


class TestVerifyCLinkBisect(unittest.TestCase):
    def test_broken_baseline(self):
        culprits, base_ok = VCL.bisect_culprits(["a", "b"], lambda s: False, log=lambda _: None)
        self.assertFalse(base_ok)
        self.assertEqual(culprits, [])

    def test_single_culprit_logarithmic(self):
        items = [f"FUN_{i:08x}" for i in range(1000)]
        bad = "FUN_000002c9"
        calls = 0

        def test_fn(sub):
            nonlocal calls
            calls += 1
            return bad not in sub

        culprits, base_ok = VCL.bisect_culprits(items, test_fn, log=lambda _: None)
        self.assertTrue(base_ok)
        self.assertEqual(culprits, [bad])
        # Baseline + ceil(log2(1000)) + 1 verification probe <= 14
        self.assertLessEqual(calls, 15)

    def test_multiple_culprits(self):
        items = [f"FUN_{i:08x}" for i in range(256)]
        bads = {"FUN_00000005", "FUN_00000080", "FUN_000000fa"}
        culprits, base_ok = VCL.bisect_culprits(
            items, lambda sub: not (bads & set(sub)), log=lambda _: None
        )
        self.assertTrue(base_ok)
        self.assertEqual(set(culprits), bads)

    def test_pairwise_interaction(self):
        items = [f"FUN_{i:08x}" for i in range(64)]
        pair = {"FUN_0000000a", "FUN_00000030"}
        culprits, base_ok = VCL.bisect_culprits(
            items, lambda sub: not pair.issubset(set(sub)), log=lambda _: None
        )
        self.assertTrue(base_ok)
        self.assertEqual(len(culprits), 1)
        self.assertIn(culprits[0], pair)


class TestLintReadableDebt(unittest.TestCase):
    def test_cross_file_checks(self):
        files = {
            "src-readable/arm9/a.c": (
                "typedef struct Foo { int x; } Foo;\n"
                "extern void helper(int v);\n"
                "void FUN_02001000(int n) { *(int *)0x020a1000 = n; helper(n); }\n"
            ),
            "src-readable/arm9/b.c": (
                "struct Foo { int x; };\n"
                "void FUN_02001010(int n) { (void)n; }\n"
            ),
        }
        scan = LR.scan_tree_debt(files, include_cross=True)
        self.assertEqual(scan["rule_counts"].get("X1"), 2)  # duplicate struct Foo in a.c and b.c
        self.assertEqual(scan["rule_counts"].get("X2"), 1)  # local extern in a.c
        self.assertEqual(scan["rule_counts"].get("X3"), 1)  # raw addr cast in a.c

    def test_move_invariant_diff(self):
        code = "extern void helper(void);\nvoid FUN_02001000(void *p) { int x = (int)p; helper(); }\n"
        base = LR.scan_tree_debt({"src-readable/arm9/a.c": code})
        moved = LR.scan_tree_debt({"src-readable/arm9/b.c": code})
        delta = LR.diff_debt(base, moved)
        self.assertEqual(delta["total_added"], 0)
        self.assertEqual(delta["total_removed"], 0)
        self.assertEqual(delta["total_net"], 0)

        cleaned = LR.scan_tree_debt({"src-readable/arm9/b.c": "void FUN_02001000(int x) { if (x) return; }\n"})
        delta2 = LR.diff_debt(base, cleaned)
        self.assertLess(delta2["total_net"], 0)
        self.assertGreater(delta2["total_removed"], 0)

    def test_default_cli_no_args_clean(self):
        # Backwards-compat check: running with no args when src-readable/ is absent returns 0
        rc = LR.main([])
        self.assertEqual(rc, 0)


class TestSymbolMarkerAndCppRelocs(unittest.TestCase):
    def test_symbol_marker_and_cpp_target_parsing(self):
        import match as M
        self.assertEqual(M.symbol_marker("// no marker\n", "FUN_02039000"), "FUN_02039000")
        self.assertEqual(
            M.symbol_marker("//cpp\n// symbol: _ZThn32_N10C_0203900012FUN_02038db8Ev\n", "FUN_02039000"),
            "_ZThn32_N10C_0203900012FUN_02038db8Ev",
        )
        self.assertEqual(M.sym_target_addr("_ZN10C_0203900012FUN_02038db8Ev"), 0x02038DB8)
        self.assertEqual(M.sym_target_addr("_ZN10C_0212062024FUN_overlay_10__021205a4Ev"), 0x021205A4)
        self.assertIsNone(M.sym_target_addr("_ZN10C_020390003fooEv"))

    def test_verify_relocs_checks_cpp_thunk_target_strictly(self):
        import struct
        import match as M
        rom = bytes.fromhex("04b4044a101804bc9446034a04b4624600bdc046e0ffffff") + struct.pack("<I", 0x02038DB9)
        ok_reloc = [{"offset": 24, "type": M.R_ARM_ABS32, "sym": "_ZN10C_0203900012FUN_02038db8Ev", "addend": 0}]
        bad_reloc = [{"offset": 24, "type": M.R_ARM_ABS32, "sym": "_ZN10C_0203900012FUN_02038dbcEv", "addend": 0}]
        res_ok = M.verify_relocs(0x02039000, rom, ok_reloc, is_thumb=True)
        res_bad = M.verify_relocs(0x02039000, rom, bad_reloc, is_thumb=True)
        self.assertEqual(len(res_ok), 1)
        self.assertTrue(res_ok[0][4])
        self.assertEqual(len(res_bad), 1)
        self.assertFalse(res_bad[0][4])

    def test_assemble_s_and_verify_relocs(self):
        import match as M
        if not (M.MW / M.CANONICAL / "mwasmarm.exe").is_file():
            self.skipTest("mwasmarm.exe not present in clean-room checkout")
        with tempfile.TemporaryDirectory() as td:
            s = pathlib.Path(td) / "FUN_0202e97c.s"
            s.write_text(
                "\t.text\n\t.arm\n\t.global FUN_0202e97c\nFUN_0202e97c:\n"
                "\tclz r0, r0\n\tbx lr\n\t.size FUN_0202e97c, .-FUN_0202e97c\n",
                encoding="utf-8",
            )
            obj = M.assemble_s(s)
            self.assertIsNotNone(obj)
            code, _, rinfo = M.extract_func(obj, "FUN_0202e97c")
            self.assertEqual(code, bytes.fromhex("100f6fe11eff2fe1"))
            self.assertEqual(rinfo, [])


if __name__ == "__main__":
    unittest.main()
