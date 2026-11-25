# Stale / dead code triage — Phantasy Star Zero (`C24E`)

Static reachability analysis is computed by `tools/reachability.py` (for ARM9)
and `tools/overlay_reachability.py` (for `ov000..ov031`), writing machine-readable
classifications to `config/reachability/`.

## ARM9 reachability (`config/reachability/summary.txt`)

- **Total ARM9 inventory (`config/arm9/symbols.txt`)**: `8,118` functions
- **Live set (`call_reachable` + `indirect_only`)**: **`8,066` functions** (`99%`)
  - `call_reachable`: `5,249` functions (transitively reachable via `bl`/`blx`/`b`
    from `entry` `0x02000800`, the 37 `.ctor` initializers at
    `0x020F6058..0x020F60EC`, and the 16 DS Protect v1.20 functions at
    `0x020C5464..0x020C61EC`).
  - `indirect_only`: `2,817` functions (referenced by function pointers in
    literal pools, `.rodata`/`.data` vtables/callback tables, or overlay call
    sites, plus their transitive callees).
- **Dead candidates (`dead_candidates.txt`)**: **`52` functions** (`~13 KB`, `<1%`)
  - Unreferenced by any direct branch or 4-byte aligned pointer in ARM9, ITCM,
    DTCM, or any of the 32 overlays.

## Overlay reachability (`config/reachability/overlay_summary.txt`)

- **Total overlay inventory (`config/arm9/overlay_symbols.txt`)**: `6,030`
  functions across `ov000..ov031`
- **Live overlay set**: **`5,693` functions** (`94%`)
- **Dead overlay candidates**: **`337` functions** (`6%`)

## Why `C24E` has <1% dead ARM9 code (vs 61% in `pszm-decomp`)

In `pszm-decomp` (`Phantasy Star Zero Mini`), Sonic Team stripped the full game
down to a single-stage DSiWare demo without enabling linker dead-stripping on the
main module, leaving ~61% of ARM9 unreachable. Here in the full retail game
(`Phantasy Star 0 (USA).nds`, `C24E`), almost every subsystem linked into
`arm9.bin` is actively used by the game or its 32 overlays (`8,066 / 8,118 =
99.36%` live).

## Policy

- Only live functions (`call_reachable` or `indirect_only`) are counted in
  `tools/status.py` and targeted for decompilation in `src/arm9/` and
  `src/ovNNN/`.
- Re-run `python tools/reachability.py` and
  `python tools/overlay_reachability.py` whenever `config/arm9/symbols.txt` or
  `config/arm9/overlay_symbols.txt` is updated.
