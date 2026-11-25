# Parked ledger — Phantasy Star Zero (`C24E`)

Tracks near-miss candidates parked in `drafts/near/` (`// near:` header). Run
`python tools/near_audit.py` to rescore all parked candidates against the ROM.

## Batch 2 — Cross-ROM & self-twin near-miss harvest (`2026-11-04`, 65 functions)

`tools/port_from_pszm.py --park-near` parked **65** size-matched, relocation-verified near-miss candidates (`1..5` word diffs under `2.0/sp2p3`) across `drafts/near/arm9/` (`55` files) and `drafts/near/ov004..ov022/` (`10` files).

Every file in `drafts/near/` has a structured `// near:` header (`ndiff=W/N size=0x... vers=2.0/sp2p3 next="..."`) and is ready for Argon (`match-loop`) to close via `tools/fdiff.py`, `tools/match_advisor.py`, or `tools/levers.py`. Run `python tools/near_audit.py` to list and rescore all 65 candidates.

## USA draft coverage loop — 2026-11-04 (15 functions)

Reconstructed from this repository's USA image; all compile under 2.0/sp2p3.
Measured against code plus referenced literal pools; 999 denotes a size
mismatch, not a count of differing words. Each canonical file carries its
next lever. Session record: `notes/sessions/draft-coverage-2026-11-04.md`.

| Function | Target / candidate bytes | Word / exact-byte differences |
|---|---|---|
| FUN_020beeb0 | 0x34 / 0x20 | 999 / 999 |
| FUN_02052de4 | 0x18 / 0x18 | 4 / 12 |
| FUN_020befd0 | 0x28 / 0x18 | 999 / 999 |
| FUN_020bce18 | 0xc / 0xc | 2 / 3 |
| FUN_020ba4d8 | 0x34 / 0x34 | 1 / 1 |
| FUN_020855bc | 0x40 / 0x40 | 1 / 1 |
| FUN_02037dd4 | 0x58 / 0x4c | 999 / 999 |
| FUN_02033c6c | 0x30 / 0x28 | 999 / 999 |
| FUN_020bef74 | 0x22 / 0x16 | 999 / 999 |
| FUN_020a7710 | 0x20 / 0x20 | 3 / 8 |
| FUN_020a76c0 | 0x28 / 0x28 | 3 / 9 |
| FUN_0209e390 | 0x1c / 0x1c | 1 / 1 |
| FUN_02046390 | 0x28 / 0x28 | 8 / 27 |
| FUN_020380a8 | 0x2c / 0x2c | 4 / 6 |

## Parallel coverage continuation — 2026-11-04

Additional canonical near files and next codegen levers are recorded by the
parallel campaign's frozen per-batch manifests and session notes. See
`notes/sessions/coverage-campaign-2026-11-04.md` for ownership, verification
commands and the computed committed census. Read a function's near header
and its batch evidence before resuming; explicit ABI repair records may move
a former near file into the matching draft tier without src promotion.

## Draft coverage continuation — 2026-11-05

See `notes/sessions/coverage-2026-11-05.md` for checkpoint records and the
reproducible live-set census. New canonical near headers retain measured
extents and next levers; each worker's linked session note preserves ABI
findings and validation independent of local scratch artifacts.

- FUN_0204d870: promoted to `src/arm9/FUN_0204d870.c` (effect construction;
  earlier parked notes in `notes/sessions/coverage-low-game-2026-11-05.md`).
- FUN_0203bcc4: promoted to `src/arm9/FUN_0203bcc4.c` (facing-cone resource
  gate; earlier parked notes in `notes/sessions/coverage-low-game-2026-11-05-cone.md`).
- FUN_0207e904: promoted to `src/arm9/FUN_0207e904.c` (actor initialization;
  earlier parked notes in `notes/sessions/coverage-high-game-batch307-2026-11-05.md`).
- FUN_0207be40 and FUN_0208b0b4: canonical files under `drafts/near/arm9/`;
  each has one word/four byte differences and clean relocations. Next:
  independent-shift ordering and indexed-load address materialization,
  respectively. Details:
  `notes/sessions/coverage-high-game-batch308-2026-11-05.md`.

## Continuous loop — 2026-11-05

`notes/sessions/coverage-loop-2026-11-05.md` indexes each new checkpoint's
parked functions and links its complete ABI, measured extents and next-lever
record. Each parked function has one canonical near file with its status header.

## Parallel matching continuation — 2026-11-12

Current batch evidence and per-function language proofs are recorded in
`notes/sessions/matching-low-2026-11-12.md`,
`notes/sessions/matching-upper-2026-11-12.md`, and
`notes/sessions/matching-overlays-2026-11-12.md`. Promoted near files leave
this tier only after full-extent byte and relocation verification; the
coordinator checkpoint manifests record the subsequent whole-project gates.

- FUN_02039534: promoted to `src/arm9/FUN_02039534.c` across its complete
  0x26-byte extent via two sub-struct assignments (`struct Prefix { unsigned char b[4]; }`
  and `struct Values { unsigned int w[3]; }`) under `-O4,s`.
- FUN_overlay_12__021225b0: promoted to `src/ov012/FUN_overlay_12__021225b0.c`
  (selection-list rebuild; distinct unexported initializer at 0x021228bc
  remains separate).
- The inherited FUN_020bd1b0 native-call experiment remains parked. Its
  recorded header was rescored to candidate 0x34 versus target 0x36; it is
  not an accepted language proof or a banked match.
- Upper ARM9 dispatch/layout investigations matched FUN_02098b48 (`src/arm9/FUN_02098b48.c`)
  after swapping its two local vector stack slots, and improved canonical
  FUN_0208f2f8, FUN_020b2e04, and FUN_020b9e28, with remaining
  stack-slot, predicate, or register-scheduling differences. Their headers
  carry current measurements; the upper session note records the concrete
  ABI evidence and why further codegen attempts stopped.
