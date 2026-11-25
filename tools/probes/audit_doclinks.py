"""Doc-link audit: every `path/to/file` backtick reference inside notes/,
README.md, and per-note cross-references must resolve to an existing file
on disk (tracked or gitignored-local). Excludes code identifiers that
merely contain a dot."""
import pathlib
import re

ROOT = pathlib.Path(__file__).resolve().parents[2]
DOCS = [ROOT / "README.md"] + sorted((ROOT / "notes").glob("*.md"))
PAT = re.compile(r"`([A-Za-z0-9_./\\-]+\.(?:py|md|c|h|json|txt|csv|yaml|nds|bin))`")
# subdirs a bare name may legitimately resolve against in this repo
BASES = ["", "tools", "tools/probes", "notes", "notes/dsd", "config", "config/arm9",
         "config/reachability", "drafts/arm9", "drafts/near/arm9",
         "drafts/near/arm9/variants", "drafts/stale_marginal/arm9", "src/arm9",
         "drafts/arm9/FUN_0203e874_B_trials", "assets/extracted", "assets/extracted/arm9",
         "assets/extracted/arm7", "assets", "match"]
# paths that are external-project references or placeholders by design
EXTERNAL = ("sm64ds-decomp/", "tools/permuter/", "scratch/", "tools/disasm.py",
            "tools/frame_search.py", "tools/progress.py", "tools/funcs.py",
            "tools/csweep.py", "tools/declorder_search.py", "notes/setup-mwccarm.md",
            "notes/tooling.md", "arm9-endgame.md", "sync_ledger.py", "progress.py",
            "gen_symbols.py", "fdiff.py", "flags.txt", "import_func.py",
            "recover_cw2004.py", "NAME.c", "sm64ds-decomp/", "../",
            "notes/archive/pret-idioms.md", "notes/research-matching-levers.md",
            "notes/mwccarm-pragmas.txt", "notes/mwccarm-version-archive-search.md",
            "notes/ask-the-compiler.md",
            # pictochat/twewy-only files cited in the PORTED-VERBATIM sections of
            # mwccarm-codegen.md (never vendored here - see that notice):
            "tools/recover_cw2004.py", "BEST_dsi13.c", "FUN_022d5540_BEST.c",
            "FUN_022d5870_v13.c", "FUN_022d5a64_v3_b56.c",
            "FUN_022d5a64_BEST_2.0sp2p4.c", "FUN_022cfa90.c",
            "v13.c", "v25_volfirst_plus_shiftfix.c", "v26_volfirst_hoistread.c",
            "v27_volfirst_declfirst.c", "v30_gotopeeled_v2.c",
            "v31_deferred_trunc.c", "v32_named_shifted.c",
            "src/Engine/Core/OamMgr.c", "src/arm7/FUN_022d5a64.c",
            "config/arm7/symbols.txt",
            # example/placeholder names in prose (dsd output of a hypothetical run)
            "biosnds7.bin", "FUN_02006138_mul64.c",
            "ov000..ov005.bin", "ov000..ov031.bin",
            "match/build/PSZERO-built.nds", "match/build/PSZERO-near-test.nds",
            "match/build/PSZERO-readable.nds", "match/build/PSZERO-MINI-readable.nds",
            # pszm-decomp historical examples cited in ported law/codegen docs:
            "tools/probes/cpp_census.py", "FUN_02029670.c", "FUN_02004eb0.c",
            "src/arm9/FUN_0202f950.c", "src/arm9/FUN_020a7f6c.c",
            "tools/probes/auto_m2c_v2.py", "notes/reference/sm64ds-pret-idioms.md",
            "notes/reference/sm64ds-mwccarm-codegen.md",
            "tools/probes/enum_0203e874.py", "tools/probes/disas_0203e874.py",
            "drafts/arm9/FUN_0203e874_B_trials/agentB_log.md",
            "src/arm9/FUN_0203e874.c", "tools/probes/verify_campaign_0203e874.py",
            "tools/probes/_pin_recheck_47.json", "tools/probes/self_test.py",
            "tools/probes/audit_instrument_mirror.py", "record_round.py",
            "audit_twin_cites.py", "grade_reader_census.py",
            "tools/probes/read_eval.py", "tools/probes/audit_standing_walls.py",
            "tools/probes/audit_evidence_debt.py",
            "tools/probes/readable_receipts.py",
            # superseded batch notes (merged into notes/match-ledger.md)
            "easy-wins-batchN.md", "easy-wins-batch1.md", "easy-wins-batch16.md",
            # sm64ds-only (the templates.py ancestor, lives in sm64ds-decomp)
            "swarm.py")

missing = {}
for doc in DOCS:
    text = doc.read_text(encoding="utf-8", errors="replace")
    for m in PAT.findall(text):
        rel = m.replace("\\", "/")
        if rel.startswith(EXTERNAL) or "/NAME." in rel or rel == "arm9-endgame.md":
            continue
        hit = any((ROOT / b / rel).exists() for b in BASES)
        if not hit:
            missing.setdefault(doc.name, []).append(rel)

# R-2026-10-08 house rule (AGENTS.md "law/decision docs are current-state"):
# law docs must not carry appended supersession ceremony — a SUPERSEDE-ish
# marker inside a law doc means retired text was left annotated instead of
# resolved inline. Chronology belongs in the ledgers/notes/sessions/.
LAW_DOCS = ("matching-style.md", "readable-layer.md", "project-direction.md",
            "AGENTS.md")
SUPERSEDE_PAT = re.compile(r"\bSUPERSEDED\b|\bsuperseded by\b|\bDEPRECATED\b",
                           re.IGNORECASE)
stale = {}
for doc in DOCS:
    if doc.name not in LAW_DOCS:
        continue
    text = doc.read_text(encoding="utf-8", errors="replace")
    for i, line in enumerate(text.splitlines(), 1):
        # allow history TALKING about the rule ("the SUPERSEDED-marker ban");
        # flag only marker-ceremony lines (bold/heading/date-style statements)
        if SUPERSEDE_PAT.search(line) and (
                line.startswith("#") or line.startswith("*")
                or line.startswith("+") or "**SUPERSEDED" in line
                or re.match(r"^\W*(?:\*+\s*)?(?:\*\*)?(?:SUPERSEDED|DEPRECATED)"
                            r"\b", line, re.IGNORECASE)):
            stale.setdefault(doc.name, []).append((i, line.strip()[:79]))

if not missing:
    print("All doc-referenced paths resolve.")
for doc, bad in missing.items():
    print(f"{doc}:")
    for b in bad:
        print(f"  MISSING: {b}")
for doc, hits in stale.items():
    for ln, txt in hits:
        print(f"{doc}:{ln}: STALE-SUPERSESSION marker in law doc — resolve"
              f" inline: {txt}")