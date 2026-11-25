# Whole-project build — Phantasy Star Zero (`C24E`)

`tools/build_all.py` runs the complete whole-project pipeline end to end:
1. `tools/gen_dsd_project.py` generates `match/dsdproj/arm9/` (`config.yaml`,
   `delinks/*.txt`, `symbols/*.txt`) for all 35 modules (`arm9`, `itcm`, `dtcm`,
   `ov000..ov031`).
2. `dsd delink` carves relocatable `.o` files for every matched file in `src/`
   and gap `.o` files (`_dsd_gap@*.o`) for all unmatched ranges.
3. `dsd lcf` generates `match/build/arm9.lcf` and `match/build/objects.txt`
   (which `build_all.py` relativizes to repo-relative paths).
4. `tools/fix_delink_align.py` patches `.text` section alignment on delinked
   `.o` files from 4 to 2 so 2-byte-aligned Thumb functions link without
   spurious padding.
5. `build_all.py` patches `match/build/arm9.lcf` (`ALIGNALL(2);`, zero `.bss`
   fill, and overlay slot 1 `AFTER(ov004)`) and invokes `mwldarm.exe` to link all
   35 modules.
6. Every linked module binary (`match/build/build/*.o`) is byte-compared
   against `assets/extracted/`.
7. When `PSZ_BUILD_ROM=1` is set, `build_all.py` invokes `dsd rom build` to
   pack the linked modules into `match/build/PSZERO-built.nds` and verifies that
   the resulting 134,217,728-byte ROM is 100% byte-identical to
   `assets/psz-us.nds`.

## Result: all 35 modules and full 128 MB ROM byte-identical

```
  arm9  1054848 bytes: IDENTICAL
  itcm      960 bytes: IDENTICAL
  dtcm       96 bytes: IDENTICAL
  ov000    4384 bytes: IDENTICAL
  ...
  ov031   20768 bytes: IDENTICAL

WHOLE-PROJECT LINK: ALL 35 MODULES BYTE-IDENTICAL TO THE ROM

[7/6] rebuild bootable ROM (dsd rom build from linked modules)
  ROM IDENTICAL to assets/psz-us.nds (134,217,728 bytes, 0 differing)
```

## Key technical details for PSZ (`C24E`)

1. **DS Protect v1.20 handling across `dsd delink` vs `dsd rom build`**:
   - `dsd rom extract` decrypts all 16 DS Protect v1.20 ranges
     (`0x020C5490..0x020C61E8`, 1,546 bytes across 14 wrapper functions) in
     `assets/extracted/arm9/arm9.bin` and records `dsprot_state: unencrypted:` in
     `assets/extracted/arm9/arm9.yaml`.
   - If `dsd delink` sees `dsprot_state: unencrypted:`, `ds-rom` re-encrypts
     those 16 ranges when carving gap `.o` files, causing `arm9.o` to differ by
     1,546 bytes from `assets/extracted/arm9/arm9.bin`.
   - `tools/build_all.py` temporarily rewrites `dsprot_state: None` in
     `assets/extracted/arm9/arm9.yaml` during step `[2/6] dsd delink` (and restores it
     in a `finally:` block). That way `dsd delink` carves the decrypted ARM
     instructions directly, `mwldarm` links `arm9.o` 100% byte-identical to
     `assets/extracted/arm9/arm9.bin`, and step `[7/6] dsd rom build` sees
     `dsprot_state: unencrypted:` in `assets/extracted/arm9/arm9.yaml` and re-encrypts
     the 16 DS Protect ranges into the final `.nds` ROM.
2. **Two overlay slots in `arm9.lcf`**:
   - Overlays `ov000..ov018` load at `0x0211E640` (`AFTER(main)`).
   - Overlays `ov019..ov031` load at `0x02197F80` (`AFTER(ov004)`, immediately
     following `ov004`'s `.bss` end `0x0211E640 + 67200 + 430784 = 0x02197F80`).
   - `dsd lcf` emits `AFTER(main)` for all overlays; `tools/build_all.py`
     rewrites the `AFTER(main)` header on `overlay 19`..`overlay 31` to
     `AFTER(ov004)` before running `mwldarm`.
3. **ARM9 `.ctor` terminator**:
   - In `assets/extracted/arm9/arm9.bin`, `.ctor` spans `0x020F6058..0x020F60F0` (`0x98`
     bytes = 37 initializer pointers + 1 trailing `0x00000000` terminator word).
   - Because `0x020F60EC..0x020F60F0` is already inside the `.ctor` slice,
     `tools/build_all.py` strips `WRITEW(0);` from `arm9.lcf` so `mwldarm` does
     not append a duplicate terminator word.
