# Phantasy Star Zero Decompilation (`psz-us` / `C24E`)

A from-scratch, clean-room decompilation of **Phantasy Star Zero** (`NTR-C24E-USA`,
`Phantasy Star 0 (USA).nds`, MD5 `0ef2ab31b0068c0832bd6a5ef901dd0c`, released
2009-11-10 in North America) into **byte-matching C/C++**.

> **Clean-room notice:** This public repository contains **no** copyrighted game
> ROMs, extracted game assets, disassembled ROM assembly (`.s`), Nintendo DS BIOS
> dumps, or proprietary compiler binaries. To build and verify the ROM locally,
> supply your own legally obtained copy of *Phantasy Star Zero (USA)*, DS ARM7
> BIOS, `dsd`, and CodeWarrior ARM (`mwccarm`).

## Progress

Computed directly from pure C/C++ in `src/` against the live function inventory (`python tools/status.py`
and `python tools/progress_map.py`):

| Scope | Functions Matched | Byte Coverage |
|---|---:|---:|
| **Total Live (pure C/C++)** | **13,600 / 13,750 (98.91%)** | **1,310,899 / 1,348,953 B (97.18%)** |
| **ARM9 Main** | 7,916 / 8,057 (98.25%) | 827,284 / 862,150 B (95.96%) |
| **Overlays (`ov000`–`ov031`)** | 5,684 / 5,693 (99.84%) | 483,615 / 486,803 B (99.35%) |
| **Game Logic (census)** | 5,144 / 5,197 (98.98%) | 682,948 / 705,864 B (96.75%) |
- **C-origin functions matched:** **13,600 / 13,616 (99.88%)** (`1,310,899 / 1,327,753 B`, **0 inline asm**, **0 `.s` files in git**)
- **ROM-extracted hand-written assembly** (`config/orig_asm.txt`, metadata only): **134** functions (`21,200` B — NitroSDK CP15/SWI/MI/MTX, MSL CRT, `ov016` codec, DS Protect v1.20), carved locally from your legally supplied ROM at build time via `dsd` / `tools/orig_asm.py`.

- Active parked near-misses (`drafts/near/`): `13` functions (`8,330` B)
- Inline assembly in `src/`: **0** (`tools/probes/audit_asm_policy.py`)
- Disassembled `.s` files in repository: **0** (`config/orig_asm.txt` stores metadata only; `tools/orig_asm.py` extracts locally into gitignored `match/orig_asm/` from your ROM)

## What "Matching" Means

Source that, compiled with the pinned `mwccarm` version and flags, produces
object code **byte-identical** to the retail binary — every non-relocation byte
identical across the function's full extent, and every relocation slot verified
against the ROM destination (`tools/match.py`, `tools/linkcheck.py`). Nothing is
"close enough". See [`notes/matching-style.md`](notes/matching-style.md).

**Canonical compiler pin** ([`notes/compiler-identification.md`](notes/compiler-identification.md)):
`2.0/sp2p3` (Metrowerks/Freescale CodeWarrior for Nintendo DS v2.0 SP2 patch 3,
CC build 138, paired with NitroSDK 4.2 `0x04027531`). Off-pin functions carry an
explicit `// version: <ver>` header; ARM-mode functions carry `// flags: -noThumb`;
C++ units carry `//cpp` (and `// symbol: <mangled>` for compiler-emitted
multiple-inheritance thunks).

Starting flags:

```text
-O4,p -enum int -lang c99 -char signed -interworking -thumb -proc arm946e -gccext,on -msgstyle gcc
```

## Setup (Bring Your Own ROM & Toolchain)

### 1. Python dependencies

```sh
python3 -m venv .venv
source .venv/bin/activate
pip install pyelftools capstone pyyaml
```

### 2. Place your ROM & BIOS (gitignored under `assets/`)

Place your legally obtained files at:

- `assets/psz-us.nds` — *Phantasy Star 0 (USA)* (`134,217,728` bytes, MD5 `0ef2ab31b0068c0832bd6a5ef901dd0c`)
- `assets/bios7.bin` — Nintendo DS ARM7 BIOS (required by `dsd rom extract` / `dsd rom build` for DS Protect v1.20)

### 3. Install `dsd` and extract the ROM

Install [`dsd` (AetiasHax/ds-decomp)](https://github.com/AetiasHax/ds-decomp) v0.12.0+
(place the binary in `tools/bin/dsd/` or set `DSD_DIR`), then extract:

```sh
dsd rom extract \
    --rom assets/psz-us.nds \
    --arm7-bios assets/bios7.bin \
    --output-path assets/extracted/
```

### 4. Supply CodeWarrior ARM (`mwccarm` / `mwldarm`)

Place your CodeWarrior ARM toolchains under `tools/mwccarm/` (or point `MWCCARM_DIR`
at your existing install directory containing `2.0/sp2p3/mwccarm.exe`,
`dsi/1.1/mwldarm.exe`, and `license.dat`).

On Linux or macOS, run the Windows executables via [wibo](https://github.com/decompals/wibo)
or 32-bit Wine:

```sh
export MWCCARM_DIR=/path/to/mwccarm
export MWCCARM_LAUNCHER=wibo      # or: wine
export MWLDARM_LAUNCHER=wibo      # or: wine
```

See [`notes/project-setup.md`](notes/project-setup.md) for detailed Linux setup notes.

## Verification Gates

| Command | Proves |
|---|---|
| `python tools/probes/audit_all_src.py` | Every banked file in `src/` recompiles and byte-matches with verified relocations |
| `python tools/linkcheck.py` | Every relocation slot resolves to the exact ROM target (`0 WRONG`) |
| `PSZ_BUILD_ROM=1 python tools/build_all.py` | All 35 modules (`arm9`, `itcm`, `dtcm`, `ov000`–`ov031`) delink + relink identically, and `dsd rom build` reproduces `assets/psz-us.nds` (`0` differing bytes out of `134,217,728`) |
| `python tools/probes/verify_c_link.py --all` | Every compiled ARM9 C/C++ object swapped into the delinked link reproduces `arm9.bin` byte-identically |
| `python tools/probes/audit_asm_policy.py` | Zero inline assembly in `src/` |
| `python tools/status.py` | Live banked-vs-inventory coverage summary |
| `python tools/progress_map.py` | Byte-weighted progress table & HTML treemap (`match/progress/`) |
| `python tools/near_audit.py` | Rescores parked near-misses in `drafts/near/` |

## Layout

```text
src/arm9/          Matched C/C++ for ARM9, one function per file (`FUN_<addr8>.c`)
src/ov000..ov031/  Matched C/C++ for overlays (`FUN_overlay_<N>__<addr8>.c`)
include/           Shared headers
config/            Ghidra function inventories (`config/arm9/`) and reachability sets (`config/reachability/`)
drafts/near/       Active parked near-misses awaiting final codegen/regalloc breakthroughs
tools/             Matching, reloc verification, whole-ROM build, progress map, and probe scripts
notes/             Matching conventions, compiler pin evidence, codegen levers, and build docs
assets/            (gitignored — user-supplied ROM, BIOS, and `dsd rom extract` output)
match/             (gitignored — generated delink/link objects and rebuilt ROM)
```

## Credits & Legal

- **Special thanks to rozaline** for the `pszm-decomp` repository structure,
  tooling foundation, and matching work that this project was built upon.
- **MIT License** ([`LICENSE`](LICENSE)) for all original decompilation code in `src/`,
  documentation in `notes/`, and original tooling in `tools/`.
- Framework and verification architecture adapted from
  [tangOS-decomps/pictochat-decomp](https://github.com/tangOS-decomps/pictochat-decomp)
  (MIT, `sm64ds-decomp` lineage); ROM extraction/delinking/rebuilding uses
  [AetiasHax/ds-decomp (`dsd`)](https://github.com/AetiasHax/ds-decomp) (MIT).
- *Phantasy Star Zero* is copyright SEGA. No retail assets, binaries, or
  proprietary SDK/compiler files are included in this repository.
