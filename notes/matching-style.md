# Matching conventions

Adopted from `sm64ds-decomp` - same standard the N64 `sm64` project and the
whole pret/decomp community holds to.

## What counts as a match

Source that, compiled with the pinned `mwccarm` version and flags, produces
object code **byte-identical** to the real binary - every instruction word,
and every relocation slot pointing at the correct destination (a raw byte
diff alone would wildcard a wrong callee/global sitting in a reloc slot;
`tools/match.py` compares bytes and checks recognized relocation targets). Only the actual four bytes of each relocation
are masked. Aligned-word diagnostic masks can hide neighboring Thumb
instructions; promotion and the source audit additionally require the
exact-byte comparison to pass.

Relocation coverage must also be inspected: compiler helpers and local data
labels without recognized address bindings can be reported as `BLIND` by
`tools/linkcheck.py`. A green exit does not prove those destinations or their
semantics. They require explicit ROM/callee evidence; do not substitute a
signed helper for an unsigned helper merely because the masked bytes agree.
The matcher explicitly binds all19 runtime-helper names verified in the
current census: integer division/multiplication, conversions, float/double
arithmetic and comparisons, and the clear routine. New helper names and
anonymous data labels with unsupported payloads remain subject to separate
evidence. Linkcheck compares complete relocation-free local data objects
(and whole anonymous sections) against their ROM destinations; nested data
relocations, nonzero addends, ambiguous symbol names and implicit-addend REL objects remain BLIND rather than being guessed. The compiled-C link verifier copies ROM relocation slots after checking
recognized targets, so its byte-identical output does not close a `BLIND`
helper binding. Current census and signedness review are recorded in
`notes/sessions/matching-resume2-2026-11-12.md`.

Nothing is "close enough." A function that's off by one instruction is not
matched - keep iterating, or leave it unmatched and move on rather than
committing a near-miss as if it were done.

## Language: original-language rule

**The rule is whatever is found to be the original language, whether it be C or C++.**
The deliverable follows the evidence per function:
- C-lowering functions are written in C (`src/arm9/`, one file per function,
  `FUN_<hexaddr>.c` naming, pinned compiler, byte-match + relocations).
- Functions whose measured machine shapes are C++-only (e.g. the
  receiver-first virtual-dispatch head that no plain-C spelling lowers into,
  or compiler-emitted multiple-inheritance `this`-adjustor thunks)
  are written in C++: native member-call or inheritance spellings with unique
  per-function class declarations and extern "C" linkage, marked `//cpp`, still
  one `FUN_<addr>.c` file, still full true-extent byte matching, every
  relocation check, and all repository gates. For compiler-emitted C++ symbols
  whose Itanium-mangled name cannot carry extern "C" linkage (such as `_ZThn*`
  non-virtual thunks), a `// symbol: <mangled_name>` header marker directs
  `tools/match.py`, `tools/linkcheck.py`, `tools/gen_dsd_project.py`,
  `tools/probes/audit_all_src.py`, and `tools/probes/verify_c_link.py` to
  extract that symbol while verifying its relocation target against the
  address-encoded member name. No guessed runtime bodies,
  no binary data, no counting-input changes.
- The 12 prepared candidates (goal60 cpp-review, validated 651/651 strict
  counted-game + all seven gates in isolation) are the first promoted set
  under this ruling. Per-function scope evidence must precede any new C++
  file; dispatch-pattern counts alone are leads, not verdicts.

The earlier inference that PSZ Mini's ARM9 was established to be C by a
zero-virtual-call census is not supported. A 2026-10-15 reproduction found two
independent defects in `tools/probes/cpp_census.py`:

- Its first virtual-dispatch regex includes the mnemonic `ldr ` but is matched
  against Capstone's operand-only `op_str`, so it cannot detect that pattern.
- It chooses Thumb mode from address bit0, while the exported symbol inventory
  uses aligned code addresses. Known live Thumb functions are decoded as ARM.

The read-only reproduction in `scratch/goal60/audit_dispatch_census.py` detects
previously missed dispatches in `FUN_020637dc`, `FUN_02040de0`, and
`FUN_02046150`. Using the existing census mode data, the corrected recognizer
finds 22 two-level dispatch sites in 18 live functions; see
`scratch/goal60/dispatch-census-recheck.json`. These are dispatch-pattern counts,
not proof of the original source language. Missing RTTI, runtime strings, or
constructor tables also does not establish C rather than C++.

A diagnostic native C++ virtual call reproduces the full 248-byte extent and
every relocation of `FUN_020637dc`, while the current C reconstruction retains
a four-byte receiver-move/load difference. Evidence is in
`scratch/goal60/637dc-cpp-dispatch-proof.json`; the diagnostic is not promoted.
The proposed exception is documented in
`scratch/goal60/language-policy-proposal.txt`. No language-policy exception or
progress credit follows from this diagnostic alone.

Far calls can go through interworking veneers (`ldr r3,[pc,#0]; bx r3`, for
example at `0x020ab578`). Relocation verification determines the real target;
write the veneer address as the callee, not a Ghidra thunk-routed function.

### Function size records vs inter-function padding (2026-08-29)

The function inventory's `size` spans are back-to-back, so a Thumb function
whose body ends at a 2-mod-4 offset records the next 2 bytes (`0000`, a
`movs r0, r0` slot) as its own. That slot is inter-function filler that
belongs to no function: gap objects carry it at link time (why build_all
stays byte-identical). When a function's bytes end in such a pad, match at
its TRUE size (recorded minus the pad halfwords) - see FUN_0204e98c (true
0x2a, recorded 0x2c; matched on all 19 builds, member #0 of the 16x-0x2c
twin cluster). A 0000 tail halfword on an unmatched function is NOT a
compiler feature to hunt - 27 matched functions carry such tails, all of
them pads/pool data outside the instruction stream (census:
scratch/pad_classify.py, 2026-08-29).

## File placement by reachability class

When provenance matters (and it does — stale code was built by the same
toolchain but is not part of the live decomp), place files by the
classification in `progress/reachability/`:

- `src/arm9/` — live functions only.
- `src/arm9/stale/` — byte-matched functions that later proved stale
  (kept committed: the match evidence is real and useful for the
  compiler pin, but they are not decomp-progress targets).
- `drafts/arm9/` — live work-in-progress (campaign evidence trees stay
  beside their topic, e.g. `FUN_0203e874_B_trials/`).
- `drafts/near/<module>/` — the **near tier**: ONE canonical best file per
  parked LIVE function, carrying a `// near:` status header
  (`ndiff=… size=… vers=… next="next lever"`). Rescored on demand by
  `tools/near_audit.py` (`build.bat near`); a PROMOTABLE row (0 mismatches,
  clean relocs) promotes via the normal path. Never linked —
  `gen_dsd_project.py` globs `src/` only. Kept alternates live in
  `variants/` below the function's module dir.
- `drafts/stale_marginal/arm9/` — stale/unknown-class candidates: parked,
  not counting toward progress and never promoted to `src/arm9/` as-is
  (byte-matched overlay files land here until an overlay reachability pass
  classifies them).

## Ledger

The proof-of-record is the committed `src/` files themselves (each carries its
own match header); no separate ledger tool is ported from pictochat
(`sync_ledger.py`/`progress.py` are pictochat-only). Progress =
`ls src/arm9/*.c | wc -l` (`src/arm9/stale/` excluded) against the
2,214-function usable live set (closed live = call_reachable.txt 2,086 +
indirect_only.txt 131 = 2,217, which includes 2 live pre-entry/crt0
functions below the 0x02004800 entry; the other 2 pre-entry functions are
unclassified — corrected 2026-08-28, they are real pre-entry code, NOT
"secure-area noise": stale-code-triage.md
has the full story; minus FUN_020d2054, the junk Ghidra tail symbol
excluded 2026-09-24 — its span crosses the arm9.bin image end and its
"call_reachable" row comes from mid-span BL targets mapping into the
containing() symbol; probe + evidence:
`notes/reference/020d2054-phantom-2026-09-24/`, status.py carries the
exclusion). The local `match/auto/` scratch dir stays untracked
(it holds an empty .gitignore placeholder only; nothing under it is
committed);
candidates land in `drafts/` only when fully verified through match.py incl.
`verify_relocs`, and only into `src/arm9/` if the function is live (see
File placement above).

## Import knowledge, write code

You may use publicly known symbol names, struct layouts, or field offsets
(from community reverse-engineering of PictoChat/NitroSDK/TWL SDK) -
but all code in `src/` must be written from scratch against this project's own
extracted binary. Never paste source from another project.

## Comment separation of concerns (owner, 2026-10-06)

The two layers split documentation work by AUDIENCE, and a detail belongs
in whichever layer's audience needs it:

- **`src/` = maximum documentation for AI/machine legibility** — no care
  for human readability. Every compiler detail and optimization-backend
  fact (flags pins, register coloring, select materialization, scheduling,
  pool/reloc notes, what was tried) is annotated HERE, and newly-discovered
  details about an already-banked function get added/tweaked in the `src/`
  file's header. This is the canonical annotated record.
- **`src-readable/` = human-legibility comments only** (semantics, intent,
  roles — what a human needs to follow the code). Compiler/backend detail
  is NOT duplicated there; if it matters for understanding why the code
  looks the way it does, the readable file carries AT MOST a one-line
  `note:` pointing at the twin, and the detail itself lives in the twin.
- Corollary: a compiler/optimization insight is never added to a readable
  file's comments — it goes to the `src/` twin (readable work edits the
  twin's COMMENTS only when it discovers such a detail; never its code).
- Readable BODY quality (R18, 2026-10-07): a readable file is promoted
  only after the reversed-C sweep
  (`notes/readable-layer.md` §P6: E9 machine vocabulary, W9 `!= 0`
  conditions, W10 result-only temps, W6 decl blocks — the linter is the
  enforcement of the human-written bar; byte-match alone does not make a
  file readable).
- The self-documenting loop (owner, 2026-10-06): src/'s documentation
  exists so no one rethinks or redoes steps already done. When Ghidra/ASM
  must be consulted for a gap src/ didn't cover (normal fallback work),
  the finding is written back into the src/ twin's header — next session,
  src/ answers the same question and the consult isn't needed again.

### ARM-mode functions: the `// flags: -noThumb` marker (census 2026-08-31)

~half the matched corpus is not Thumb: **102 of 214 promoted files are
ARM-mode** and carry the marker; every one has a 4-aligned recorded size
(function + 4-byte pool literal). The remaining 111 are Thumb (unmarked,
default flags) + 1 stale ARM evidence file. Practical rules:

- **Detect before iterating**: a recorded size that is 4-aligned and sits
  next to pool literals almost always means ARM. fdiff defaults to Thumb
  decode and will show plausible-looking garbage for an ARM function —
  re-decode with Capstone `CS_MODE_ARM` (or read live bytes via
  GhidraMCP `/read_memory`, which also proves the executed bytes) before
  iterating on a spell.
- **Declare it in the file** with `// flags: -noThumb` (see
  `FUN_02029670.c`, `FUN_02004eb0.c`): `apply_flags_marker()` strips
  `-thumb` structurally, so the audit's `arm`/`thumb` label comes from
  the effective flags — the audit failing a marker-less ARM file with
  "N words differ / bad relocs" is the gate working.
- ARM-mode and `-interworking` coexist fine; veneers still resolve the
  same way (see the interworking-veneers note above).

### Leading linker veneer: the `// veneer: N` marker

When a Ghidra symbol `FUN_<addr>` starts with a linker interworking veneer
that jumps to the code right after it (ARM 12 bytes: `ldr ip,[pc]; bx ip;
.word addr+12`; Thumb 8 bytes: `ldr r3,[pc]; bx r3; .word (addr+8)|1`),
the file keeps its `FUN_<addr>` name and carries `// veneer: 12` or
`// veneer: 8`. `body_addr()` in `tools/match.py` checks the marker against
the ROM (a stale or wrong marker fails) and the audit, `gen_dsd_project`,
`linkcheck` and `verify_c_link` all match and delink at `addr + N`; the
veneer bytes stay in the carved gap. Precedents: `src/arm9/FUN_0202f950.c`,
`src/arm9/FUN_020a7f6c.c`.

## Workflow

1. Pick an unmatched function from the live set (`progress/reachability/`
   call_reachable.txt / indirect_only.txt), size-bounded by its neighbors in
   `config/arm9/symbols.txt`.
2. Read it: `python -c "import ghidra_client; print(ghidra_client.disassemble(addr))"`
   or `/decompile_function` (see `notes/ghidra-integration.md`; GhidraMCP must
   be running with the ROM loaded).
3. Write **C** for it (see Language section above; small functions: prefer the
   `tools/probes/auto_m2c_v2.py` cleaning pipeline as a starting candidate).
4. `python tools/match.py --c src/arm9/<name>.c --func <name> --addr 0x...
   --size 0x... --module <module>` and iterate until every word matches and
   `verify_relocs` is clean (add `--brief --all` to see which builds agree).
5. Move the finished file into `src/<cpu>/` and re-verify from there.

When iterating a near-miss, reach for the ported sibling tools before
hand-rolling a probe: `tools/fdiff.py` (per-instruction diff, `--compact` /
`--align` modes, Thumb-aware), `tools/frame_shape.py` + `tools/frame_search.py`
(frame-shape gate and cartesian toggle search - FUN_02006138's first stop),
`tools/declorder_search.py` (declaration-order hill climb),
`tools/match_advisor.py` (diff signature -> C-edit hypothesis),
`tools/twin.py` (mechanical twin candidates from the matched corpus). Lever
catalogue: `python tools/levers.py --arch thumb` (drop ARM-only entries).
See `notes/sibling-tools.md` for what was ported, what was consciously not,
and the verification log.

## Gates (what keeps the corpus honest)

Run after any `src/`/`tools/` change; all must stay green (or use
`build.bat` / `build_near.bat`, which run the chain + the ROM splices):

| Command | Proves |
|---|---|
| `python tools/probes/audit_all_src.py` | every banked file recompiles + re-matches (exact-byte compare + relocs, per-file `// flags:`/`// version:` markers honored) |
| `python tools/build_all.py` | whole image delinks + relinks byte-identical (all 35 modules) |
| `python tools/linkcheck.py` | recognized relocation targets agree with the ROM; unrecognized symbols are reported as BLIND and require separate evidence |
| `python tools/probes/verify_c_link.py` | compiled non-relocation bytes slot into the real link after recognized target checks and ROM-slot restoration |
| `python tools/probes/audit_doclinks.py` | every `` `file` `` reference in notes/ + README resolves |
| `python tools/status.py` | banked-vs-live-set census (the only place the progress number lives) |
| `python tools/near_audit.py` (`build.bat near` → `build_near.bat`) | rescores parked near-misses; PROMOTABLE when a parked file reaches 0 mismatches + clean relocs |
| `python tools/shortlist.py` | ranked target list (banked-caller count; `--ghidra` for the original method) |

Chain semantics: build_all's delinked objects are ROM-CARVED, not our
compiled bytes — a green build alone does NOT prove our C. The proof chain
is audit_all_src (our C matches per function) + build_all (layout/gap
integrity) + linkcheck (reloc destinations) + verify_c_link (swap-in,
run when link artifacts change suspiciously).
