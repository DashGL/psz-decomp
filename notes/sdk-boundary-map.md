# SDK Boundary Map, Overlay Inventory & Anti-Pattern Baseline

Current-state map of library boundaries, overlay modules, proven symbols, and
code-quality debt across `psz-decomp` (`NTR-C24E-USA`). Machine-readable catalog:
`config/symbol_map.json`. Shared clean-room headers: `include/psz_types.h`,
`include/nitro_sdk.h`, and `include/psz_core.h`.

## 1. ARM9 Library & Porting Boundary Map

Embedded SDK version tags in `arm9.bin` (`0x02000bc4..0x02000c90`):
- `[SDK+UBIQUITOUS:CPS]`, `[SDK+UBIQUITOUS:SSL]`
- `[SDK+NINTENDO:WiFi2.1.30003.0709200229]`
- `[SDK+NINTENDO:BACKUP]`
- `[SDK+NINTENDO:DWC3.1.30001.080708.1933_DWC_3_1_PLUS]`
- `[SDK+Actimagine:Mobiclip SDK V1.0.2]`

| ARM9 Range | Subsystem | Layer | Porting Strategy |
|---|---|---|---|
| `0x02000800..0x0200c960` | MSL_C / CRT0 / ARM EABI runtime | SDK runtime | Replace with standard C library |
| `0x0200c960..0x0202e980` | NitroSystem (`NNS_G2d`/`G3d`/`Snd`/`Fnd`) + NitroWiFi (`CPS`/`SOC`/`SSL`) | SDK middleware | Replace with HAL (SDL2/GPU/Audio/Sockets) |
| `0x0202e980..0x02056490` | **PSZ Core Engine & Game Logic (Part 1)** | **Game logic** | **Port directly** |
| `0x02056490..0x0206b000` | NitroSDK 4.2 (`CARD`, `CP`, `CTRDG`, `FS`, `FX`/`MTX`/`VEC`, `GX`/`G2`/`G3`, `MATH`/`MB`, `MI`, `OS`/`PXI`/`PM`/`RTC`/`SND`/`SPI`/`TP`/`WM`) | SDK hardware | Replace with HAL |
| `0x0206b000..0x020c5464` | **PSZ Game Logic (Part 2)** (combat, actors, quests, items, UI, allocator) | **Game logic** | **Port directly** |
| `0x020c5464..0x020c61ec` | DS Protect v1.20 (14 routines) | DRM | Stub out on native ports |
| `0x020c6200..0x020eb948` | GameSpy (`gp`/`gpi`/`gt2`/`sb`) + DWC 3.1 Plus (`DWCauth`/`http`/`netcheck`) | SDK network | Replace with modern network HAL |

## 2. Overlay Map (`ov000`–`ov031`)

- **Slot 0 (`0x0211e640`, `ov000`–`ov018`):**
  - `ov000`–`ov003`, `ov005`, `ov008`, `ov009`: Boot logos, title screen, backup error, mode/Free Play menus
  - `ov004` (`67 KB`): In-game Field/Battle HUD & pause menu (resident during gameplay alongside Slot 1)
  - `ov006` (`21 KB`): Cutscene / event script runner
  - `ov007`, `ov010`, `ov011`, `ov014`, `ov017`, `ov018`: Friend list, soft keyboard, visual chat, settings, encyclopedia, Wi-Fi matchmaking
  - `ov012` (`133 KB`): Dairen City hub, shops, guild, quest counter
  - `ov015` (`122 KB`): Character creation, dressing room, visual lobby
  - `ov016` (`64 KB`): Actimagine Mobiclip V1.0.2 video player (replace with native video decoder on port)
- **Slot 1 (`0x02197f80`, `ov019`–`ov031`):** 13 Field / Boss / Enemy AI gameplay modules loaded dynamically on top of `ov004`.

## 3. Baseline Anti-Pattern Debt (`src/`, 13,600 files)

Measured with `python tools/probes/lint_readable.py --tree --root src` at 100.00% coverage (`5007d85cd`):

| Rule | Meaning | Baseline Count | Primary Fix |
|---|---|---:|---|
| `X2` | Local `extern` prototypes duplicated per file | 31,663 | Move proven declarations to shared `include/` headers |
| `E2` | Raw hex pointer offset arithmetic (`*(T*)(p + 0x..)`) | 7,727 | Recover shared structs in `include/` |
| `E1` | Body casts | 7,290 | Properly typed parameters & struct fields |
| `E8` | Placeholder `f04`/`f08` field names | 6,667 | Replace with role-named struct fields |
| `W11` | Single-statement brace clutter | 4,657 | Clean idiomatic control flow in `src-readable/` |
| `X1` | Duplicate struct definitions across files | 3,514 | Consolidate into shared `include/` headers |
| `X3` | Raw address casts (`*(T*)0x0400xxxx` / `0x0211xxxx`) | 3,455 | Use `REG_*` macros (`include/psz_types.h`) & named externs |
| `W9` | Redundant `!= 0` boolean context | 3,042 | Clean idiomatic conditions in `src-readable/` |
| `W17` | Doc-block orientation budget | 2,974 | Concise <=3-line human doc in `src-readable/` |
| `E11` | Unnamed parameters | 1,031 | Role-named parameters |
| `W7` | `volatile` in body | 886 | Replace MMIO casts with `REG_*`, isolate scheduler pins |
| **Total** | **All rules across 13,600 files** | **75,021** | Tracked with `lint_readable.py --diff` |
