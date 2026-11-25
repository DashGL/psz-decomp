# AGENTS.md — session contract for psz-decomp

Read this before doing anything. It is the short version of everything a
session needs; the long versions live in the files pointed at below.
Out of scope for edits unless explicitly asked: `assets/`, `src/`
(the deliverable itself), `config/`, `match/` (generated — see Gates).

## What this project is

From-scratch decompilation of **Phantasy Star Zero** (`psz-us`, `NTR-C24E-USA`,
`Phantasy Star 0 (USA).nds`, 2009-11-10) into **byte-matching C**. Matching
standard: compiled with the pinned `mwccarm` build (`2.0/sp2p3`), the code +
relocation slots are word-identical to the ROM — see `notes/matching-style.md`.
Function inventory comes from Ghidra exports in `config/arm9/symbols.txt`
(8,118 ARM9 functions, including 15 decrypted DS Protect v1.20 functions at
`0x020C5464..0x020C61EC`) and `config/arm9/overlay_symbols.txt` (6,030 overlay
functions across `ov000..ov031`), read by `tools/funcs.py`.

**Status / progress is computed, never hand-written**: `python tools/status.py`.
It reports banked functions against the **8,066-function live ARM9 set**
(`5,249` call-reachable + `2,817` indirect-only; `52` dead candidates excluded)
and the **5,693-function live overlay set** across `ov000..ov031`.

Current phase: matching layer. Human-readable rewrite comes later — do not
rename or refactor functions while matching is underway (owner decisions:
`notes/project-direction.md`).

## Gates (run after any src/ or tools/ change; all must stay green)

```sh
build.bat                                   # the whole chain below + the normal bootable ROM
build_near.bat                              # same chain + a near-test ROM (candidates live)
build_readable.bat                          # readable-layer gates: lint + byte audit
python tools/probes/audit_all_src.py        # recompiles+re-verifies EVERY banked file
PSZ_BUILD_ROM=1 python tools/build_all.py   # delink+relink whole image; ALL 35 MODULES + ROM BYTE-IDENTICAL
python tools/linkcheck.py                   # reloc-target verification
python tools/probes/verify_c_link.py --all  # swap compiled C objects into the delinked link and verify arm9.bin equality
python tools/probes/audit_doclinks.py       # every `file` ref in notes/ + README resolves
python tools/probes/audit_asm_policy.py     # src/: ZERO inline asm allowed
python tools/status.py                      # banked vs live set
python tools/near_audit.py                  # rescore parked near-misses
```

- Promotion to `src/` requires: `match.py` full pass (word compare +
  `verify_relocs`) under the pinned version(s), then `audit_all_src.py`,
  `linkcheck.py`, `verify_c_link.py --all`, and `PSZ_BUILD_ROM=1 build_all.py`.
- The human-readable layer lives in `src-readable/` (one readable file per
  banked twin; see `notes/readable-layer.md`). Readable-layer rules apply ONLY
  when explicitly working on `src-readable/`.
- **`build_all.py`'s delinked objects are ROM-carved, not our compiled bytes** —
  a green `build_all.py` proves layout/gap/span integrity across all 35 modules,
  while `audit_all_src.py` + `linkcheck.py` + `verify_c_link.py --all` prove our
  compiled C objects match and link identically in place of the carved slices.
- ARM-mode files carry `// flags: -noThumb`; off-version files carry
  `// version: <ver>`. The audit reads both markers.
- **Near files never enter the whole-project link** — their bytes are wrong by
  definition. `near_audit.py` flags `PROMOTABLE` when a parked file reaches
  0 mismatches + clean relocs; promotion then goes through the normal path.

## Where knowledge lives (do not duplicate — point at it)

| Question | File |
|---|---|
| Matching rules, conventions, workflow | `notes/matching-style.md` |
| Compiler pin + per-version reality | `notes/compiler-identification.md` |
| Codegen/spelling levers (index) | `notes/levers.jsonl` via `python tools/levers.py --arch thumb` |
| Codegen narrative + evidence | `notes/mwccarm-codegen.md` |
| Batch-by-batch match record | `notes/match-ledger.md` |
| Long-term direction / phases (owner decisions) | `notes/project-direction.md` |
| Tool inventory: what exists, what it's for | `notes/sibling-tools.md` |
| Reachability / live-set definitions | `notes/stale-code-triage.md`, `config/reachability/summary.txt` |
| Project setup & Linux/Wine environment | `notes/project-setup.md` |
| Whole-project build & DS Protect v1.20 handling | `notes/whole-project-build.md` |
| GhidraMCP + melonDS live loop | `notes/ghidra-integration.md` |
| Human-readable layer | `notes/readable-layer.md` |
| Session narratives (append-only archive) | `notes/sessions/` |

Workflow for a new target: pick from the shortlist (`python tools/shortlist.py`
— rank unmatched functions by banked-caller count), read via GhidraMCP
(`tools/ghidra_client.py`) or disassembly, draft, `tools/match.py`, iterate with
`fdiff.py` + `match_advisor.py` + `levers.py`, twins via `tools/twin.py`,
clusters via `tools/twin_cluster.py`. Full recipe: `notes/matching-style.md`
§Workflow.

## Priorities (per the project owner)

- **Game logic over engine/SDK functions.** Pick targets from
  `python tools/shortlist.py` (unmatched functions ranked by banked-caller
  count; `--ghidra` for the richer ranking when GhidraMCP is up). Within equal
  rank, prefer functions on the game-logic call tree over SDK/CRT layers.
- **Attempt cap: park the moment the function's logic is FULLY understood and
  the only residuals are codegen-level** (register coloring, branch/bool
  materialization shapes, scheduling) — park into `drafts/near/` with its
  `// near:` header rather than grinding indefinitely.

## Session bookkeeping

- Parked state and next levers: `notes/parked-ledger.md` (read relevant rows only).
- Batch/session records: `notes/match-ledger.md` and `notes/sessions/`
  (read only when resuming related work).

Keep this file stable: routine matching, parking, promotion, and session-end
updates belong in those notes, not `AGENTS.md`.

## House rules

- One function per file in `src/arm9/`, named `FUN_<addr8>.c`; the address in
  the name IS ground truth — never rename. Overlay files live in `src/ovNNN/`
  named `FUN_overlay_N__<addr8>.c`.
- Dead-but-verified evidence files go in `src/arm9/stale/`; do not delete them.
- Live-set placement: only call-reachable or indirect-only functions
  (`config/reachability/*.txt`) may be banked into `src/`; dead candidates
  stay unmatched.
- Candidate drafts go to `drafts/arm9/`; **parked near-misses get ONE canonical
  file each in `drafts/near/arm9/`** with a `// near:` status header.
- Law/decision docs are CURRENT-STATE: when a finding changes a rule, edit the
  rule in place rather than appending supersession blocks.
- Clean-room public repo: ROM/BIOS/extracted assets (`assets/`) and proprietary
  compiler binaries (`tools/mwccarm/`, `tools/bin/`) are gitignored and
  user-supplied. Never commit copyrighted binaries or retail assets. The retail
  card in `assets/psz-us.nds` is never modified by any tool.
- No machine-absolute paths: every tracked script/tool derives the repo root
  from `__file__` or uses repo-relative paths; `build_all.py` relativizes
  `match/build/objects.txt` after `dsd lcf`.
