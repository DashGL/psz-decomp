# Compiler identification — Phantasy Star Zero (`C24E`)

*Established during initial repository bring-up on `Phantasy Star 0 (USA).nds`
(`NTR-C24E-USA`, MD5 `0ef2ab31b0068c0832bd6a5ef901dd0c`).*

## What the ROM proves

| Signal | Value | Source |
|---|---|---|
| `sdk_version` | `0x04027531` -> **NitroSDK 4.2 patch 30001** | `extracted/config.yaml` (`arm9.bin` build-info block) |
| Original JP release | **2008-12-25** (`NTR-C24J-JPN`) | Retail release date |
| North America release | **2009-11-10** (`NTR-C24E-USA`) | Retail release date |
| Anti-piracy wrapper | **DS Protect v1.20** (16 encrypted ranges in `0x020C5490..0x020C61E8`, decrypted on extraction by `dsd`) | `extracted/arm9/arm9.yaml` |

## Toolchain inventory (`tools/mwccarm/`, 24 builds across 3 families)

| Line | Product | Builds | Runtime dates |
|---|---|---|---|
| `1.2/*` | Metrowerks C/C++ for Embedded ARM v2.0 | 72, 79, 82, 84, 87 | 2005-05 – 2006-04 |
| `2.0/*` | Metrowerks/Freescale C/C++ for Embedded ARM v3.0 | 114–139 (`base`..`sp2p4`) | 2006-03 – 2009-05 |
| `dsi/*` | Freescale C/C++ for Embedded ARM v4.0 | 1018–1051 (`1.1`..`1.6sp2`) | 2008-11 – 2011-07 |

## THE PIN: `2.0/sp2p3` (Metrowerks/Freescale CW 3.0 family)

Byte evidence from the live `u64` LCG RNG step function **`FUN_02071188` @
`0x02071188`** (`0x2c` code + 8-byte pool = `0x34`), which is the exact full-game
counterpart of `pszm-decomp`'s compiler-pin discriminator (`FUN_02047f30`):

- Updates `q[0] = q[2] + q[1] * q[0]` via the runtime 64x64 multiply helper
  `FUN_0200a380` (`_ull_mul`, 352 ARM9 callers), then returns
  `(q[0] >> 32) * 0xfff >> 32`.
- Matched to source `src/arm9/FUN_02071188.c`; sweep of all 24 vendored builds
  (`tools/match.py --all`):

| Family | Result on `src/arm9/FUN_02071188.c` |
|---|---|
| `2.0/*` (all 10 builds, `2.0/base`..`2.0/sp2p4`) | **MATCH** (`0x34` bytes, 0 word diffs, 3/3 relocations verified) |
| `dsi/*` (all 9 builds, `dsi/1.1`..`dsi/1.6sp2`) | **FAIL** (20 non-relocation bytes differ: `dsi/*` keeps pointer `q` in callee-saved `r4` across `bl _ull_mul` and emits two `ldr`s instead of `ldm r3, {r2, r3}` + post-call pool reload `ldr r2, [pc, #0x1c]`) |
| `1.2/*` (all 5 builds, `1.2/base`..`1.2/sp4`) | **FAIL** (size `0x38` / `0x3c` vs `0x34`) |

### How this connects `psz-decomp` (`C24E`) and `pszm-decomp` (`KPSJ`)

This result resolves the compiler history across both projects:
1. **Phantasy Star Zero (full game, `C24E`, NitroSDK 4.2 `0x04027531`)** was
   compiled with **CodeWarrior for Nintendo DS v2.0 (`2.0/*`, CW 3.0)**:
   `FUN_02071188` emits `ldr r3, [pc, #0x28]; ldr r0, [r3, #8]; ldr r1, [r3, #0xc]; ldm r3, {r2, r3}; blx FUN_0200a380; ldr r2, [pc, #0x1c]`,
   which only `2.0/*` produces.
2. When Sonic Team later built the DSiWare demo (**Phantasy Star Zero Mini**,
   `KPSJ`, TWL SDK 5.0 `0x05007535`), they migrated the project to
   **CodeWarrior for TWL (`dsi/1.1`, CW 4.0 b1018)**, which recompiled the same
   RNG function (`FUN_02047f30` in `pszm-decomp`) into the `dsi/*` `r4`-preserved
   pattern while leaving untouched CW 3.0 objects (`FUN_02029e74` in
   `pszm-decomp`) in the link.
3. Within the `2.0/*` family, `2.0/sp2p3` (build 138, 2008-04) is the canonical
   NitroSDK 4.2 compiler release prior to PSZ's original December 2008 launch
   (with `2.0/sp2p4` build 139 dated 2009-05-29 prior to the November 2009 US
   release). Both `2.0/sp2p3` and `2.0/sp2p4` produce identical code on all 5
   initial banked functions; `CANONICAL` is set to `2.0/sp2p3` in
   `tools/match.py` and `tools/probes/audit_all_src.py`.

## Starting flags

```
-O4,p -enum int -lang c99 -char signed -interworking -thumb -proc arm946e -gccext,on -msgstyle gcc
```

Toggle `-noThumb` (`// flags: -noThumb`) for ARM-mode functions or `-O4,s`
(`// flags: -O4,s`) for space-optimized functions (such as `src/arm9/FUN_0208b09c.c`).
Any function that requires a non-canonical compiler version records it via
`// version: <ver>`.
