# Sibling-repo tools ported into this repo (2026-08-28)

Both upstream projects are MIT and same-convention (sm64ds-decomp is this
framework's grandparent via pictochat-decomp):

- **tangOS-decomps/pictochat-decomp** — tools/ has 101 files; the ones below
  import `match as M` exactly like ours, so the ports were mostly mechanical.
- **tangosdev/sm64ds-decomp** — tools/ has 259 files, but most are C++/TU/RTTI
  machinery irrelevant to this C Thumb title; its value here is the lever
  catalogue and the methodology notes.

Survey context: our automated m2c vein is exhausted (notes/easy-wins-batch4.md);
the remaining ~2,155 live functions are hand-shaped work, and these tools are
the hand-work accelerators the donors used at scale.

## Readable-layer tools (homegrown, 2026-10-06)

| Tool | Purpose |
|---|---|
| `tools/probes/audit_readable.py` | Per-file verifier for `src-readable/`: compiles the byte-matched twin under its own markers, then the readable file under the same, requiring identical code bytes + relocation info. Rejects marker smuggling, wrong twin links, non-matching bodies. |
| `tools/readable_status.py` | Computed readable-layer census: paired/unpaired readable files + game-logic-class join against the game/plumbing refinement CSV. |
| `build_readable.bat` | One-click readable-layer gate chain (audit_all_src → audit_readable → status). |
| `scratch/rdp2_iter.py` | Draft-vs-twin compile rig used while authoring a readable file (no file edits; prints code/reloc verdicts). Scratch-class, kept because the workflow uses it every entry. |

## Progress, regression & debt tooling (inspired by `zeroz41/pso-decomp`, 2026-11-23)

| Tool | Purpose |
|---|---|
| `tools/progress_map.py` | Byte-weighted progress report across ARM9 + `ov000..ov031` + game/plumbing census, emitting a JSON snapshot, an offline sortable HTML browser (`index.html`), an interactive canvas byte-treemap (`treemap.html`), and optional shields.io badges (`--badges`) under `match/progress/`. |
| `tools/report_delta.py` | Address-keyed zero-regression gate comparing two `progress_map.py` snapshots (or a baseline JSON against the live working tree) by `(module, addr)` so renames/moves never hide a lost match or readable file (`--check`, `--strict-tier`). |
| `tools/probes/verify_c_link.py` (`--bisect`) | Link-only $O(k \log N)$ binary search over swapped `.o` files (zero recompiles) when a relinked `arm9.bin` fails or differs from ROM, isolating minimal link-breaking object(s). |
| `tools/probes/lint_readable.py` (`--tree`, `--diff`) | Whole-tree debt ranking and move-invariant Git-revision debt diffing (`--base`/`--head`, `--fail-on-increase`), plus cross-file C-quality checks (`X1` duplicate struct defs across `.c` files, `X2` local `extern` declarations, `X3` raw numeric address casts). |
| `tools/probes/test_pso_tooling.py` | Unit tests covering all four tools above. |

## Ported

| Tool | Donor | Purpose | Adaptations for PSZ Mini |
|---|---|---|---|
| `tools/fdiff.py` | pictochat | Per-instruction diff oracle: `--compact` (mismatch runs) and `--align` (difflib over shape-normalized streams; works across size mismatches - finds "where's the extra/missing instruction") | module default `arm9`; **Thumb-aware disassembly** (donor was ARM-only - ours decodes Thumb by default, `--arm` to override); candidate mode follows effective flags like match.py |
| `tools/frame_shape.py` | pictochat | Push-set + stack-depth probe off raw bytes, target vs candidate, cheap first gate | `--arm` flag; candidate side follows `// flags:` marker; Thumb `push.w`/`stmdb` wide encodings added |
| `tools/frame_search.py` | pictochat | Cartesian search over `@{name}[choiceA\|choiceB]` toggle markers in one seed file, x `-O4,p`/`-O4,s`, ranked by frame-shape then size distance | target probe Thumb by default; candidate probe follows the seed's own flags; saves the top candidates with the winning `-O` embedded in each one's `// flags:` line. First target: FUN_02006138 (batch-4's named candidate) |
| `tools/declorder_search.py` | pictochat | Hill-climbs local declaration order (mwccarm allocates callee-saved regs AND stack slots by declaration order); scoring subprocess = our fdiff `--align` | `--addr`/`--module` explicit; `--arm` passthrough; `--version` defaults to our pin |
| `tools/match_advisor.py` | pictochat | "The diff says these words differ - what do I EDIT?": signature -> C-level hint (SIZE/SLOTS/COLOR/SCHEDULE/WIDTH/CMP1/TERNARY/MASK/RELOC/FRAME) | reads OUR draft header spellings (`// FUN_x @ 0x... (0x2c code + 8-byte pool)` AND `// Target: x @ 0x..., size 0x50` - sizes summed in the component form); function table = tools/funcs.py (Ghidra exports); hints re-cited to OUR near-misses + lever catalogue; TERNARY marked ARM-only (no conditional execution in Thumb) |
| `tools/twin.py` | pictochat | Matches a function by rewriting an already-matched twin's source (same mnemonic skeleton, constants/callees rewritten 1:1); verify via match.py is the only decision-maker | done-set read from the committed src tree (no ledger in this repo); function table = funcs.py; per-function mode from ROM bytes; **dead-candidate filter by default** (reachability triage), `--include-dead` to disable; `--max-verifies` budget; SystemExit-proof against junk Ghidra tail "functions" (e.g. the 0x020d2054+0x19b8c one) |
| `tools/funcs.py` | NEW (stands in for pictochat's funcs.py, which reads a dsd-init JSON we can't produce) | Function inventory: config/arm9/*symbols.txt (module aliasing `main`->arm9, `ov00N`->arm9ov0/1..5), pool-inclusive `true_size()` via neighbor gap (capped 0x400), reachability classes from progress/reachability/, ROM-byte mode detection (cached) |   |
| `notes/levers.jsonl` + `tools/levers.py` | sm64ds | Distilled mwccarm lever catalogue (21 entries, each with symptom -> lever -> evidence source) with per-arch applicability, and its reader | vendored wholesale; re-sync with `python tools/levers.py --repo ../sm64ds-decomp` logic (fetch notes/levers.jsonl from upstream main) when upstream grows. **Use `--arch thumb`**: the catalogue was derived on an all-ARM title and entries marked `inapplicable` for Thumb are dropped |

Also fetched for reading (not committed; they live in the donors' repos —
`sm64ds-decomp` notes/arm9-endgame.md is reached as `notes/mwccarm-codegen.md`
is, by checkout path, not as a file of ours): sm64ds `notes/ask-the-compiler.md`
(a mwccarm debug flag prints each variable's slot assignment WITHOUT changing
codegen - the declaration-order/slot tool to try next), sm64ds notes/arm9-endgame.md,
sm64ds notes/archive/pret-idioms.md, sm64ds notes/research-matching-levers.md,
`notes/mwccarm-pragmas.txt`, `notes/mwccarm-version-archive-search.md`,
pictochat `notes/tooling.md` (67 KB iterate-better canon).

## Consciously NOT ported

- swarm.py/templates.py (34 template rules): the auto-rule vein our batch 4
  showed is exhausted here.
- sm64ds' TU/rombuild/RTTI/dtor machinery, chaos/CI web stack: C++/TU
  infrastructure; this title is C, one function per file.
- ledger.py/progress.py/sync_ledger.py: superseded - the committed src tree is
  the proof-of-record (notes/matching-style.md).
- cross_match.py (byte-identical SDK/MSL functions across repos): matching-style.md
  forbids pasting foreign source into src/; a read-only lead-generator only,
  and it needs the donor's extracted binary. Not worth it today.

## Verification log (2026-08-28, all real runs)

- `levers.py --arch thumb`: 10 Thumb-applicable levers, ARM-only entries dropped.
- `frame_shape.py` on FUN_0203e874: target/candidate agree `{r3,r4,r5,lr}`.
- `fdiff.py` positive control FUN_02047f30 (matched): 0/13. On 0203e874:
  **6/14, every mismatch "same shape - regalloc/coloring only"** - reproduces
  the campaign's documented r4<->r5 wall in one call. On FUN_02004d50 `--align`
  (size 0x5c vs 0x50): localizes the draft's real defect - candidate decomposes
  the .data-value arithmetic into two adds (+#0x384, +#0x3c00) where the target
  has one `add r1,r1,#4`, plus an r1<->r2 loop-role swap.
- `match_advisor.py`: MATCH verdict on the matched control; on 0203e874 fires
  [COLOR] "stream is exact, 12 pure register colour" (matches the campaign
  ledger); on 02004d50 fires [SIZE]+[COLOR]+[RELOC].
- `frame_search.py` on a 3-axis e874 seed (scratch/e874_seed.c): 16 combos,
  8 compiled, valid ones all EXACT FRAME + SIZE, best -> fdiff = 6/14 (the
  wall is phrasing-independent, consistent with the closed campaign).
- `declorder_search.py` on FUN_02004d50's 2-decl block: 3 compiles, no
  improvement (only 2 decls - informative, not a real search).
- `twin.py` full sweep below.

## New results: twin matches (5)

`python tools/twin.py --relax` over all functions (61 matched seeds, skeleton
index 34), constants/callees rewritten, each verified through match.py:

- **FUN_overlay_1__0219f724** <- twin of live FUN_020371d0 (ov001 module,
  ARM-mode): **verified MATCH dsi/1.1**. Class UNDETERMINED - the reachability
  triage is ARM9-only, overlays are outside it (notes/stale-code-triage.md).
  Later BANKED to `src/ov001/` (2026-09-01, user-approved src/ovNNN
  pipeline); the drafts/ copy is superseded history (`scratch/superseded/`).
- FUN_0200b4a0 <- FUN_02027f98, FUN_0203dcf0 <- FUN_020371d0,
  FUN_0205e124 <- FUN_02048c9c, FUN_020af208 <- FUN_02048c9c: all four
  **verify byte-identical under dsi/1.1** AND are DEAD per the triage -
  stale demo-era copies of live functions. Parked at
  `drafts/stale_marginal/arm9/` (the FUN_0200c940 precedent): match evidence
  is real, not decomp progress.

Gotchas learned while placing them (for the next person): twin sources carry
their own `// flags:` line matched to the TARGET's mode - dropping or adding
that line on promotion flips Thumb/ARM and silently un-matches the file; and
twin.py's verify tries both the Ghidra-recorded and neighbor-gap size, so a
one-size manual recheck can false-negative.

## Session results (2026-08-28 evening, tool-shakeout round)

- **BATCH 5 - FUN_0201a694 MATCHED (61st, live).** The deep twin sweep
  (`--relax --min-skel 3 --tries 12`) found `FUN_0201a694 <- FUN_02007230`
  (same store-to-.data shape, different variable). Verified from a
  promotion-ready copy, re-verified after promotion: `src/arm9/
  FUN_0201a694.c` - 61/2,215 (2.75%). A follow-up sweep with the enlarged
  seed corpus found no further live twins.
- **FUN_02006138 signature breakthrough (not yet a match).** The parked
  draft's `(u32,u32)` signature was wrong - the target consumes all four
  argument registers. With the correct `(u64,u64)`, the plain C form reaches
  0x1c of the target 0x20: the EXACT algorithm (umull + 2x mla + move pair),
  colored into {lr,ip} + pop {r3,pc} instead of the target's callee-saved
  {r5,r4} + push {r4,r5,lr} + bx lr. Coloring does not move under any
  opt level, -ipa off, the MSL library flag set, operand order, expression
  vs temp, or manual partial-product decomposition. Full state in the
  draft header; a real, small, precisely-characterized wall (donor notes
  have zero umull-coloring coverage).
- **FUN_02004d50 fold-wall characterized.** The old draft's `DAT_02004d9c`
  extern was a misread of the target's own pool constant 0x800 (= 0x200
  u32 elements; a link-time reloc would hold the runtime ADDRESS; this holds
  a raw constant). Worse, every single-expression base spelling (pool-cast
  literal OR extern object) lets dsi/1.1 fold the entire 7-op chain into ONE
  pool word (0x38/0x3c candidates) under BOTH -O4,p and -O4,s - the ROM's
  unfolded chain needs a fold-resistant source form. volatile closes the
  fold but overspills to 0xa4. Side-fact: 0x800 IS imm12-encodable for this
  compiler, so the ROM's ldr+sub for 0x800 means the source term was not a
  plain literal subtraction. Full campaign state in the draft header.

## Batch 6 (2026-08-28 late): the TEMPLATE tier, run for the first time here

Answer to "doesn't sm64ds use known compiler patterns to eliminate whole
functions?" - yes: `swarm.py` (sm64ds, 90 KB) -> `templates.py` (pictochat,
34 leaf rules). Ported as `tools/templates.py` and adapted: no mode field in
our Ghidra export (each function tried Thumb-then-ARM, oracle rejects wrong
mode), reachability filter (dead candidates skipped), our src-tree
done-set (no ledger), `// flags: -noThumb` baked into ARM-mode banks, and
tailcall hits named by their OWN address (thumbnails of the interworking-
veneer family matching-style.md documents; NOT in Ghidra's table, set
`extend` windows only).

Yield: **76/76 banked, all live** (68 call-reachable + 8 veneers; 16 ARM-mode
candidates had correctly failed the first banker pass until the `// flags:`
line was added - the oracle caught it, as designed). By rule: global_getter
25, set_fields 8, tailcall 11, store/load_field 10, global_store_const 6,
pool_const 5, global_setter 4, empty 6, ret_const 1, + singles
(global_swap, store_const, store_global_addr, two_global_store_const).
Rules misfiring = no candidate, never a wrong file: every bank re-verified
byte-exact from its written path by the audit (138/138 PASS).

Remaining known-unswept pockets: dead candidates (`--include-dead`, 1,320
tiny stubs - parked evidence per doctrine, low priority), overlays (no
reachability triage, placement doctrine undefined), 8 barrel-shifter misses
in the first 300-function smoke (shifted-operand stores the leaf rules
don't cover), wider sizes (0x20-0x80 belt beyond the default window).

## Batch 7 (2026-08-29): the 0x20-0x80 belt swept, overlay matches found

`python tools/templates.py --min 0x20 --max 0x80` over all 3,610 belt-size
functions (full log vendored at
`notes/reference/belt-sweep-2026-08-29.log`): **3 candidates,
all ov001** `set_fields` zero-init helpers, all verified byte-identical
from their written paths (`tools/match.py --module arm9ov1`, dsi/1.1;
matching every one of the 24 builds - trivial full-width store codegen,
no pin discrimination, red-flag check clean). Parked at `drafts/arm9/`
per the FUN_overlay_1__0219f724 precedent (overlays are outside the ARM9
reachability triage; promote to src/ only after an overlay pass):

- FUN_overlay_1__0219f460 (0x40): 16x short + 4x int + 1x char zero-init
- FUN_overlay_1__021a0e2c (0x20): 5x int + 1x short zero-init
- FUN_overlay_1__021a6a98 (0x48): 6x int + 10x short + 1x char zero-init

ARM9 result: **zero template candidates in the whole belt** - the batch-4
exhaustion conclusion extends across the 0x20-0x80 sizes. The belt's live
targets (1,145) are hand-shaped work from here. Same round, the parked
FUN_02006138 umull-coloring wall got 9 new forms (all oracle runs,
recorded in the draft header): wide-typed copies fold away on this shape
(no live-across-code local), correctly-negated -interworking-off and
-ipa file confirm the ledger, and a NEW third codegen shape surfaced
(save-free 0x18 hi/lo decomposition) without reaching the target's
{r4,r5}+push/pop coloring - wall remains compiler-internal, draft updated.

### Batch 7 follow-up (same day): the shifted-operand pocket begins to crack

Reproduced the smoke's misses inside the live belt: **7 functions** with
`ldr/str [rX,rY,lsl #2]` (scaled-index array access - plain C `arr[i]`,
no intrinsics needed). First fruits:

- **FUN_0201c56c MATCHED (139th, live, promoted to src/arm9/).** Method
  helper: `FUN_0201dbac(arg1, self)` (swapped args through a callee-saved
  shadow copy), then `DAT_020cae7c[((u8**)self)[0][7]]` stored to +4.
  The load-bearing discovery: **the LUT must be an EXTERN object** — a
  numeric-literal cast compiles to a 3-op add-chain; the extern's
  link-time reloc pools like the ROM (also verified address-checked by
  verify_relocs, unlike a literal). Failed 1.2/sp2 + 1.2/sp2p3 only,
  pin-consistent. Promotion trap self-inflicted and re-documented: the
  copy to src/ dropped `// flags: -noThumb`, match.py's Thumb fallback
  compiled garbage (6 words + bad reloc) - the flags marker is
  load-bearing on EVERY promotion, verify from the final path first.
- FUN_0201acd0 (0x7c) parked at a 1-slot residual after 6 oracle rounds:
  signature/branch/table/mask-splice all pinned (`(*cell & 0x43) |
  (f << 16) >> 16` reproduces the orr-lsr splice; shared entry table
  0x020cade4 in both branches; cell table 0x020caedc[a]). Wall: the
  compiler reassociates the 4-term or-chain regardless of emission order
  and builds from `b<<14` where the target builds `d<<8` first. Next
  lever queued: the callees receive the table base in r1 — a 2-arg
  callee signature would change register pressure and may restore the
  target's build order. Draft parked with full state; twin at
  0x0201ad4c pending.

## Pipeline round (2026-08-29 evening): strengthening the matching pipeline

Per the strategy review ("strengthen the pipeline where >=2 concrete
instances bumped the same wall, not a platform"):

### tools/match_advisor.py - 3 new diff-signature detectors (validated)

| Detector | Signature -> hint | Validated on |
|---|---|---|
| `BASECHAIN` | candidate materializes a base address as a 2+ add-chain while the target pools it -> rename the numeric cast to an `extern DAT_0xADDR[]` object | FUN_0201c56c v1 (the 0x34-vs-0x30 miss that cost a round) |
| `PREDCOND` | candidate emits 2+ ARM conditional DATA insns (ldrNE/strLE/popLE) over the target's 0 - a construct was predicated; de-sugar to if/else | FUN_02012fa8 v3 early-return (strLE/popLE) |
| `GUARDINIT` | do-while guard/init door trade: target has dedicated init-before-test (`mov #0` before the cond branch), candidate merged guard+back-edge (or mirrored) | FUN_02012fa8 v1-vs-v2 doors |

All three validated positive AND negative (matched files + agreeing-door
controls fire nothing). Two tool bugs found & fixed by that validation,
now documented in-code: capstone `blo/bls` start with "bl" (a naive
bl-filter eats conditional branches), and the advisor decodes at base 0
so branch targets are absolute - backedges must be read from the
SIGN-EXTENDED imm24 encoding, never from the rendered target.

### tools/twin_cluster.py - NEW: near-twin families among UNMATCHED funcs

twin.py needs a matched seed; FUN_0201acd0/0201ad4c are twins of each
other while both unmatched - invisible to the whole existing stack.
twin_cluster.py shape-normalizes every unmatched function's instruction
stream (mode-aware, pool-trimmed, branch targets collapsed) and hashes it
into families. First run over the live 0x20-0x400 belt: **69 clusters
covering 199 functions**; the known pair clusters together correctly
(`[ee5bbdcacc48]` flags the parked draft). Biggest: 16 same-size 0x2c
members, an 8-member 0x64 family, a 7-member 0x30 family. Workflow: solve
one member (by any means), then twin-style rewrite for the rest with the
parked draft as the seed twin.py never had.

### Near-miss closures from the same round (all oracle-run)

- FUN_0201acd0/orr-order wall **FORMALLY CLOSED at 14 rounds**: order
  ROTATIONS ((b,d,e,c),(c,d,b,e),(e,c,d,b)) and a bitfield-struct
  spelling (per-field RMW, no fusion) rejected; source-space exhausted.
  Parked as compiler-internal; both twins wait together.
- FUN_0202fa5c: ternary spelling closes the "one expr = one pool load"
  theory - both arms materialize separately, CSE never merges them;
  alias-vs-ternary is a true fork (shadows vs double-pool). Open theory:
  different lvalue kind (context-struct field).
- FUN_02012fa8: -O4,s also merged-door; early-return = predicated-return
  (documented dead end).