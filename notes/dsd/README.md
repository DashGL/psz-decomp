# dsd file-format documentation (vendored)

Copied 2026-08-29 from AetiasHax/ds-decomp 0.12.0
(`src/ds-decomp-main/docs/` + `assets/`), MIT License, Copyright (c) 2025
Aetias. Unmodified except this README.

- `delinks.md` — `delinks.txt` format: module section map + per-file ranges +
  the `complete:` flag that swaps a delinked gap object for the real compiled
  source object in the link
- `symbols.md` — `symbols.txt` format (function/label/data/bss kinds +
  attributes)
- `relocs.md` — `relocs.txt` format (arm_call/thumb_call/interworking kinds,
  addends, link_time_const)
- `arm9.lcf.template` — the TinyTemplate that `dsd lcf` fills to produce
  `arm9.lcf` for mwldarm; kept vendored because our pipeline applies three
  post-patches to its output (see `tools/build_all.py` step 5):
  ALIGNALL(4)->(2), ADDR(DTCM)->ADDR(AUTOLOAD_1), strip WRITEW(0)

These document the exact syntax of the files `tools/gen_dsd_project.py`
generates and `dsd delink`/`dsd lcf` consume. Upstream:
https://github.com/AetiasHax/ds-decomp