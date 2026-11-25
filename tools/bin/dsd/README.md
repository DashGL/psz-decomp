# dsd tooling (AetiasHax/ds-decomp 0.12.0)

This directory is GITIGNORED (`tools/bin/` in .gitignore) — the dsd binary is
third-party. Drop the binary for your platform here, or set the `DSD_DIR`
environment variable to any location that contains it.

- `dsd-windows-x86_64.exe` — Windows host
- `dsd-linux-x86_64`     — Linux host (chmod +x)

`tools/build_all.py` picks the right one by host (`os.name`), falling back to
either name in either place. On a non-Windows host running the Windows exe,
also set `DSD_LAUNCHER` (e.g. `DSD_LAUNCHER=wine`).

Used by `tools/build_all.py` steps 2-3 (`dsd delink`, `dsd lcf`) to regenerate
per-function relocatable objects and linker scripts. NOT needed for anything
else: `match.py`, `build_all.py`'s mwldarm link + byte-compare, and every other
tool in `tools/` run without it, and `match/dsdproj/` (the generated project)
and `match/build/` (the linked outputs) are regenerable on demand.

Upstream: https://github.com/AetiasHax/ds-decomp (MIT). Release binaries are
published on its GitHub releases page.