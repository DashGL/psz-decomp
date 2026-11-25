# Project setup — Phantasy Star Zero (`C24E`)

This project shares the architecture and tooling of `pszm-decomp` and
[tangOS-decomps/pictochat-decomp](https://github.com/tangOS-decomps/pictochat-decomp)
(MIT-licensed tooling, attributed in `LICENSE`).

## Why `dsd init` is bypassed (and what we do instead)

Running `dsd init` on `assets/extracted/config.yaml` fails with:

```
Error: Local function call from 0x0208abca in ARM9 main to 0x0208b09c leads to no function
```

`FUN_0208b09c` (`src/arm9/FUN_0208b09c.c`, `0x16` bytes, Thumb `-O4,s`) is a
frameless leaf function (`movs r0, #0; b #0x208b0aa ... bx lr`) with no `push`
prologue, so `dsd init`'s prologue scanner misses it when resolving the `bl`
from `0x0208abca`.

Instead of relying on `dsd init`:
- `dsd rom extract` extracts the ROM into `assets/extracted/` (decompressing `arm9.bin`
  and all 32 overlays, and decrypting all 16 DS Protect v1.20 ranges).
- Function boundaries come from our Ghidra inventory in
  `config/arm9/symbols.txt` (`8,118` ARM9 functions in `0x02000800..0x02101880`,
  including the 15 decrypted DS Protect v1.20 functions at
  `0x020C5464..0x020C61EC`) and `config/arm9/overlay_symbols.txt` (`6,030`
  overlay functions across `ov000..ov031`).
- `tools/gen_dsd_project.py` generates `match/dsdproj/arm9/` (`config.yaml`,
  `delinks/*.txt`, `symbols/*.txt`) directly from `assets/extracted/` and `src/`.

## Module Memory Map (`assets/extracted/`)

| Module | Base Address | Code Size | `.bss` Size | Notes |
|---|---|---|---|---|
| `arm9` | `0x02000000` | `1,054,848` (`0x101880`) | `118,208` (`0x1CDC0`) | Entry `0x02000800`; `.text` `0x02000000..0x020F6058`, `.ctor` `0x020F6058..0x020F60F0`, `.rodata`/`.data` `0x020F60F0..0x02101880`, `.bss` `0x02101880..0x0211E640` |
| `itcm` | `0x01FF8000` | `960` (`0x3C0`) | `0` | Autoload `Itcm` (`0x01FF8000..0x01FF83C0`) |
| `dtcm` | `0x027E0000` | `96` (`0x60`) | `32` (`0x20`) | Autoload `Dtcm` (`0x027E0000..0x027E0080`) |
| `ov000..ov018` | `0x0211E640` | `416`..`132,640` | `32`..`430,784` | Overlay slot 0 (immediately after `arm9` `.bss`) |
| `ov019..ov031` | `0x02197F80` | `12,352`..`39,712` | `640`..`1,824` | Overlay slot 1 (immediately after `ov004` `.bss` end `0x02197F80`) |
| `arm7` | `0x02380000` | `159,528` (`0x26F28`) | `49,624` (`0xC1D8`) | Standard NTR ARM7 binary |

## Linux setup

On Ubuntu 24.04, `mwccarm.exe` and `mwldarm.exe` run under 32-bit Wine:

```sh
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install --no-install-recommends wine wine32:i386 wine64
python3 -m venv "${XDG_CACHE_HOME:-$HOME/.cache}/pszm-decomp/venv"
. "${XDG_CACHE_HOME:-$HOME/.cache}/pszm-decomp/venv/bin/activate"
python -m pip install pyelftools capstone pyyaml
export WINEPREFIX="${XDG_CACHE_HOME:-$HOME/.cache}/pszm-decomp/wine"
export WINEARCH=win32 WINEDEBUG=-all
export WINEDLLOVERRIDES=explorer.exe=d
export MWCCARM_LAUNCHER=wine MWLDARM_LAUNCHER=wine
wineserver -p
wineboot -u
```

From the repository root, run the full verification chain:

```sh
python tools/probes/audit_all_src.py
python tools/linkcheck.py
python tools/probes/verify_c_link.py --all
python tools/probes/audit_doclinks.py
python tools/probes/audit_asm_policy.py
PSZ_BUILD_ROM=1 python tools/build_all.py
python tools/status.py
python tools/near_audit.py
```

The rebuilt ROM is written to `match/build/PSZERO-built.nds` and verified
byte-identical (`134,217,728` bytes, 0 diffs) against `assets/psz-us.nds`.
