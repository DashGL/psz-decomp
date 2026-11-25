# Project direction — Phantasy Star Zero (`C24E`)

Current-state record of project goals, phases, and priorities for `psz-decomp`.

## 1. Goal

Decompile the full retail game **Phantasy Star Zero** (`NTR-C24E-USA`,
`Phantasy Star 0 (USA).nds`) into **byte-matching C** (`src/arm9/` and
`src/ov000/..src/ov031/`), using the exact verification gates and per-function
architecture proven in `pszm-decomp`:

1. Every banked function in `src/` compiles under `mwccarm` (pinned `2.0/sp2p3`,
   or per-file `// version:`) to bytes and relocations identical to the retail
   binary (`tools/probes/audit_all_src.py`, `tools/linkcheck.py`).
2. Swapping all compiled C objects into the delinked project reproduces
   `extracted/arm9/arm9.bin` byte-for-byte (`tools/probes/verify_c_link.py --all`).
3. Delinking and relinking all 35 modules (`arm9`, `itcm`, `dtcm`, `ov000..ov031`)
   and rebuilding the ROM with `dsd rom build` reproduces `assets/psz-us.nds`
   (`134,217,728` bytes, 0 differing bytes) (`PSZ_BUILD_ROM=1 python tools/build_all.py`).

## 2. Phases

1. **Phase 1 — Byte-matching layer (`src/arm9/`, `src/ovNNN/`)**:
   - One function per file (`FUN_<addr8>.c` in `src/arm9/`,
     `FUN_overlay_N__<addr8>.c` in `src/ovNNN/`).
   - Never rename `FUN_<addr8>` symbols during the matching phase; the hex
     address in the symbol name is how `tools/match.py`, `tools/linkcheck.py`,
     and `tools/gen_dsd_project.py` verify relocation targets and delink spans.
   - Zero inline assembly in `src/` (`tools/probes/audit_asm_policy.py`).
   - Park hard codegen near-misses in `drafts/near/` with a `// near:` header
     once their semantics are understood, rather than sinking sessions into
     register-coloring walls.
2. **Phase 2 — Readable source reconstruction (`src-readable/`)**:
   - Human-readable twins that compile byte-identical to `src/` while passing
     `tools/probes/lint_readable.py` and `tools/probes/audit_readable.py`
     (`notes/readable-layer.md`).
   - Readable-layer gates apply only when explicitly working on `src-readable/`.

## 3. Target selection priority

- **Game logic over SDK/CRT plumbing**: prioritize gameplay, action/combat,
  player/enemy state machines, quest/stage logic, item/drop tables, and network
  protocol logic over NitroSDK (`OS_*`, `GX_*`, `FS_*`, `CARD_*`), CriWare/NNS
  sound/G3D libraries, and MSL C runtime helpers.
- Use `python tools/shortlist.py` to rank live unmatched functions by how many
  already-banked functions call them, and `python tools/twin_cluster.py` to
  surface near-identical function families where solving one seed unlocks
  multiple twins.
