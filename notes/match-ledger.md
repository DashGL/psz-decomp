# Match ledger — Phantasy Star Zero (`C24E`)

Chronological record of byte-matched functions banked into `src/`. For live
progress totals, always run `python tools/status.py`.

## Batch 1 — Initial bring-up & compiler pin (`2026-11-04`, 5 functions)

Established the `2.0/sp2p3` (Metrowerks/Freescale CW 3.0) compiler pin and
verified the full 35-module delink + relink + bootable ROM rebuild gate chain:

| Function | Address | Size | Mode | Flags / Version | Notes |
|---|---|---|---|---|---|
| `FUN_02071188` | `0x02071188` | `0x34` | Thumb | default (`2.0/sp2p3`) | **Compiler-pin discriminator**: 64-bit LCG RNG step (`q[0] = q[2] + q[1]*q[0]`, returns `(q[0] >> 32) * 0xfff >> 32` via `FUN_0200a380` `_ull_mul`). Matches all `2.0/*` builds; fails all `dsi/*` and `1.2/*` builds. Counterpart of `pszm-decomp` `FUN_02047f30`. |
| `FUN_02036c64` | `0x02036c64` | `0x22` | Thumb | default (`2.0/sp2p3`) | Fixed-point Q20.12 multiply `(p[0x12] * p[0xc] + 0x800) >> 12` via `FUN_0200a380`. |
| `FUN_02036c34` | `0x02036c34` | `0x30` | Thumb | default (`2.0/sp2p3`) | Calls `FUN_02036c64(p)` and `FUN_0207f920(p + 0x64)`, returns fixed-point Q20.12 product `((s64)a * b + 0x800) >> 12`. |
| `FUN_020bc5e8` | `0x020bc5e8` | `0x28` | Thumb | default (`2.0/sp2p3`) | In-place fixed-point Q20.12 multiply `*a = ((*a * *b) + 0x800) >> 12`, returning `a`. |
| `FUN_0208b09c` | `0x0208b09c` | `0x16` | Thumb | `// flags: -O4,s` | Frameless 2-element byte scan at `p[2..3]`; the prologue-free leaf function called from `0x0208abca` that required bypassing `dsd init`. |

## Batch 2 — Mechanical coverage harvest (`2026-11-04`, +1,833 functions -> 1,838 total)

Ran the three-stage mechanical harvest across all live functions in `arm9` (`8,066`) and `ov000..ov031` (`5,693`):

1. **Leaf template synthesis (`tools/templates.py --max 0x40 --extend 0x8 --apply` + `tools/convert_placeholders.py --apply`)**:
   - Banked `724` leaf functions across `src/arm9/` (`475`) and `src/ov000..ov031/` (`249`).
   - All placeholder symbols (`G`, `G2`, `A`, `B`) were converted either to literal address casts `#define G ((TYPE *)0xBASE)` or to address-suffixed `extern TYPE G_<BASE>[];` declarations when literal folding altered indexed `G[k]` codegen.
2. **Cross-ROM port from `pszm-decomp` + within-ROM twin cascade (`tools/port_from_pszm.py`)**:
   - Profiled all `1,474` banked `pszm-decomp` functions (`src/arm9/` + `stale/`) and `931` `pszm-decomp` `drafts/near/` + `drafts/arm9/` files, plus newly banked `psz-decomp` functions (`--include-self`).
   - Rewrote literal pool constants, constant-folded RAM base deltas (`#define B 0x02...`), address-bearing symbol names (`G_02...`, `D_02...`, `FUN_02...`), and `BL`/`BLX` call targets across both `arm9` and `ov000..ov031`.
   - Verified every candidate in-process with `M.compare_bytes` (exact relocation bitfield mask) and `M.verify_relocs` (`0` bad relocations, `0` blind relocations).
   - Banked **`1,109` additional functions** (`656` in `src/arm9/`, `453` across `src/ov000..ov031/`), including multi-hundred-byte SDK, engine, math, action, and UI functions up to `0x104` bytes.

### Resulting coverage (`python tools/status.py`)

- **Banked files in `src/`**: **`1,838`** (`1,136` in `src/arm9/`, `702` across `src/ov000..ov031/`)
- **ARM9 coverage**: **`1,136 / 8,066 = 14.08%`**
- **Full coverage (`arm9` + 32 overlays)**: **`1,838 / 13,759 = 13.36%`**
- **Core game logic (`PORT PROGRESS`)**: **`546 / 5,201 = 10.5%`**
- **Verification gates**:
  - `audit_all_src.py`: `1838/1838 PASS`
  - `linkcheck.py`: `1838 files: BENIGN=73, VERIFIED=1765` (`WRONG=0`, `BLIND=0`)
  - `PSZ_BUILD_ROM=1 build_all.py`: all 35 modules + rebuilt 128 MB ROM byte-identical (`134,217,728` bytes, `0` differing)
  - `verify_c_link.py --all`: `arm9 1054848 bytes: IDENTICAL (compiled C + gaps == ROM)`
  - `audit_asm_policy.py`: `PASS` (0 inline asm in `src/`)

## Byte matching — 2026-11-07 checkpoint01-fixed

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint01-fixed.json`.

```text
banked files in src/: 2219  (arm9: 1242, overlays: 977, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 1242/8066 = 15.40%
FULL COVERAGE: 2219/13759 = 16.13%
PORT PROGRESS: 628/5201 = 12.1%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint02

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint02.json`.

```text
banked files in src/: 2669  (arm9: 1389, overlays: 1280, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 1389/8066 = 17.22%
FULL COVERAGE: 2669/13759 = 19.40%
PORT PROGRESS: 727/5201 = 14.0%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint03

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint03.json`.

```text
banked files in src/: 3313  (arm9: 1581, overlays: 1732, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 1581/8066 = 19.60%
FULL COVERAGE: 3313/13759 = 24.08%
PORT PROGRESS: 890/5201 = 17.1%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint04

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint04.json`.

```text
banked files in src/: 4310  (arm9: 1815, overlays: 2495, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 1815/8066 = 22.50%
FULL COVERAGE: 4310/13759 = 31.32%
PORT PROGRESS: 1031/5201 = 19.8%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint05

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint05.json`.

```text
banked files in src/: 5334  (arm9: 2162, overlays: 3172, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 2162/8066 = 26.80%
FULL COVERAGE: 5334/13759 = 38.77%
PORT PROGRESS: 1246/5201 = 24.0%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint06

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint06.json`.

```text
banked files in src/: 5848  (arm9: 2584, overlays: 3264, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 2584/8066 = 32.04%
FULL COVERAGE: 5848/13759 = 42.50%
PORT PROGRESS: 1560/5201 = 30.0%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint07

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint07.json`.

```text
banked files in src/: 6449  (arm9: 3026, overlays: 3423, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 3026/8066 = 37.52%
FULL COVERAGE: 6449/13759 = 46.87%
PORT PROGRESS: 1884/5201 = 36.2%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint08

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint08.json`.

```text
banked files in src/: 7075  (arm9: 3586, overlays: 3489, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 3586/8066 = 44.46%
FULL COVERAGE: 7075/13759 = 51.42%
PORT PROGRESS: 2176/5201 = 41.8%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Byte matching — 2026-11-07 checkpoint09

Promotion manifests and full gate results: `notes/sessions/matching-2026-11-07-checkpoint09.json`.

```text
banked files in src/: 7286  (arm9: 3760, overlays: 3526, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 3760/8066 = 46.62%
FULL COVERAGE: 7286/13759 = 52.95%
PORT PROGRESS: 2239/5201 = 43.0%   (live game logic banked / live game logic)
```

All source, relocation, compiled ARM9 link, full 35-module/retail ROM,
near-test ROM, readable-layer, documentation and asm-policy gates passed.
Original drafts remain as referenced provenance; counts deduplicate live names.

## Continued byte matching — 2026-11-12

Five validated checkpoints added 144 live functions (134 new matches and ten recovered exact drafts with closed ABI evidence), comprising 106 ARM9 and 38 overlay functions. Session narrative and links to all five frozen promotion/gate manifests: `notes/sessions/matching-continue-2026-11-12.md`. Final manifest: `notes/sessions/matching-continue-2026-11-12-checkpoint05.json`.

```text
banked files in src/: 9526  (arm9: 5405, overlays: 4121, stale evidence: 0)
usable live set: 8066 arm9 + 5693 overlay = 13759 total
ARM9 COVERAGE: 5405/8066 = 67.01%
FULL COVERAGE: 9526/13759 = 69.23%
PORT PROGRESS: 3527/5201 = 67.8%   (live game logic banked / live game logic)
```

Every checkpoint passed all twelve gates, including recompilation of every banked source, relocation verification, compiled-C ARM9 linking, byte-identical rebuilding of all 35 modules and the normal ROM, near-test ROM, readable-layer checks, and documentation/asm policy audits. Three inherited C++ evidence holds remain unbanked; their reasons and the completed negative reviews are retained in the session notes.
