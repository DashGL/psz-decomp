"""Whole-project build + verify: link ALL of Phantasy Star Zero (USA, C24E)
ARM9 + ITCM + DTCM + 32 overlays with mwldarm and byte-compare every module
against the extracted ROM.

Pipeline:
  1. tools/gen_dsd_project.py   -> dsd project (config.yaml, delinks, symbols)
  2. dsd delink -c match/dsdproj/arm9/config.yaml
     (with dsprot_state temporarily suppressed so dsd carves the decrypted
     ARM9 bytes that mwccarm targets, rather than re-encrypting DS Protect)
  3. dsd lcf -c ...             -> build/arm9.lcf + build/objects.txt
  4. tools/fix_delink_align.py  -> set executable section alignment to 2
  5. mwldarm -proc arm946e -nostdlib -interworking -main ""
       @objects.txt arm9.lcf -o arm9_linked.o
  6. byte-compare each module .o against extracted/*.bin
  [7/6] (only with PSZ_BUILD_ROM=1): dsd rom build from the linked module
     binaries (re-encrypting DS Protect v1.20 and BLZ-compressing ARM9 + 32
     overlays) -> match/build/PSZERO-built.nds and verify byte-identical
     against assets/psz-us.nds.
"""
import os
import re
import subprocess
import sys
from pathlib import Path

import yaml

REPO = Path(__file__).resolve().parent.parent
MWCCARM_DIR = Path(os.environ.get("MWCCARM_DIR") or
                   (REPO / "tools" / "mwccarm")).expanduser().resolve()
MWLDARM = MWCCARM_DIR / "dsi" / "1.1" / "mwldarm.exe"
LICENSE = MWCCARM_DIR / "license.dat"
CONFIG = REPO / "match" / "dsdproj" / "arm9" / "config.yaml"
BUILD = REPO / "match" / "build"


def prefix_from_env(var: str) -> list[str]:
    val = os.environ.get(var)
    if val is not None:
        return val.split()
    if os.name != "nt":
        if var == "MWCCARM_LAUNCHER":
            wibo = REPO / "tools" / "bin" / "wibo"
            if wibo.is_file():
                return [str(wibo)]
        if var == "MWLDARM_LAUNCHER":
            return ["wine"]
    return []


def resolve_dsd() -> list[str]:
    launcher = prefix_from_env("DSD_LAUNCHER")
    names = ["dsd-linux-x86_64" if os.name != "nt" else "dsd-windows-x86_64.exe",
             "dsd-windows-x86_64.exe", "dsd-linux-x86_64"]
    env = os.environ.get("DSD_DIR")
    candidates = []
    bases = ([Path(env)] if env else []) + [REPO / "tools" / "bin" / "dsd"]
    for base in bases:
        candidates += [base / n for n in names]
    for exe in candidates:
        if exe.is_file():
            return launcher + [str(exe)]
    searched = "\n".join(f"  - {c}" for c in candidates)
    raise SystemExit(
        "ERROR: dsd (AetiasHax/ds-decomp) not found. Searched:\n"
        f"{searched}"
    )


MODULES = {
    "arm9": "assets/extracted/arm9/arm9.bin",
    "itcm": "assets/extracted/arm9/itcm.bin",
    "dtcm": "assets/extracted/arm9/dtcm.bin",
}
for _oid in range(32):
    MODULES[f"ov{_oid:03d}"] = f"assets/extracted/arm9_overlays/ov{_oid:03d}.bin"


def sh(cmd, **kw):
    r = subprocess.run(cmd, capture_output=True, text=True, **kw)
    return r.returncode, r.stdout + r.stderr


def build_rom_from_linked_modules(built_rom: Path) -> None:
    """Create a rom_config.yaml in match/build/ that wires the freshly linked
    match/build/build/{arm9,itcm,dtcm,ov000..ov031}.o binaries into dsd rom
    build (with assets/extracted/arm9/arm9.yaml's dsprot_state intact so DS Protect
    v1.20 is re-encrypted and BLZ-compressed identically to retail)."""
    ext = REPO / "assets" / "extracted"
    linked_dir = BUILD / "build"

    ov_data = yaml.safe_load((ext / "arm9_overlays" / "overlays.yaml").read_text(encoding="utf-8"))
    for o in ov_data["overlays"]:
        oid = o["id"]
        o["file_name"] = f"ov{oid:03d}.o"
    ov_yaml_path = linked_dir / "overlays_linked.yaml"
    ov_yaml_path.write_text(yaml.safe_dump(ov_data, sort_keys=False), encoding="utf-8", newline="\n")

    cfg_data = yaml.safe_load((ext / "config.yaml").read_text(encoding="utf-8"))
    rel_ext = os.path.relpath(ext, linked_dir).replace("\\", "/")
    cfg_data["header"] = f"{rel_ext}/header.yaml"
    cfg_data["header_logo"] = f"{rel_ext}/header_logo.png"
    cfg_data["arm9_bin"] = "arm9.o"
    cfg_data["arm9_config"] = f"{rel_ext}/arm9/arm9.yaml"
    cfg_data["arm7_bin"] = f"{rel_ext}/arm7/arm7.bin"
    cfg_data["arm7_config"] = f"{rel_ext}/arm7/arm7.yaml"
    cfg_data["itcm"]["bin"] = "itcm.o"
    cfg_data["itcm"]["config"] = f"{rel_ext}/arm9/itcm.yaml"
    cfg_data["dtcm"]["bin"] = "dtcm.o"
    cfg_data["dtcm"]["config"] = f"{rel_ext}/arm9/dtcm.yaml"
    cfg_data["arm9_overlays"] = "overlays_linked.yaml"
    cfg_data["banner"] = f"{rel_ext}/banner/banner.yaml"
    cfg_data["files_dir"] = f"{rel_ext}/files/"
    cfg_data["path_order"] = f"{rel_ext}/path_order.txt"
    cfg_data["arm9_hmac_sha1_key"] = f"{rel_ext}/arm9/hmac_sha1_key.bin"

    rom_cfg_path = linked_dir / "rom_config.yaml"
    rom_cfg_path.write_text(yaml.safe_dump(cfg_data, sort_keys=False), encoding="utf-8", newline="\n")

    rc, out = sh([*resolve_dsd(), "rom", "build",
                  "--config", str(rom_cfg_path),
                  "--arm7-bios", str(REPO / "assets" / "bios7.bin"),
                  "--rom", str(built_rom)])
    if rc != 0:
        raise SystemExit(out)


def main():
    env = dict(os.environ, LM_LICENSE_FILE=str(LICENSE))

    print("[1/6] generate dsd project")
    rc, out = sh([sys.executable, str(REPO / "tools" / "gen_dsd_project.py"),
                  str(REPO / "match" / "dsdproj")])
    if rc != 0:
        raise SystemExit(out)
    print(out.strip())

    print("[2/6] dsd delink")
    arm9_yaml_path = REPO / "assets" / "extracted" / "arm9" / "arm9.yaml"
    orig_arm9_yaml = arm9_yaml_path.read_text(encoding="utf-8")
    try:
        # Suppress dsprot_state during delink so dsd carves the decrypted
        # ARM9 instructions from assets/extracted/arm9/arm9.bin rather than
        # re-encrypting the 16 DS Protect ranges into the gap objects.
        patched_yaml = re.sub(r"\ndsprot_state:[\s\S]*$", "\ndsprot_state: None\n", orig_arm9_yaml)
        arm9_yaml_path.write_text(patched_yaml, encoding="utf-8", newline="\n")
        rc, out = sh([*resolve_dsd(), "delink", "-c", str(CONFIG)])
    finally:
        arm9_yaml_path.write_text(orig_arm9_yaml, encoding="utf-8", newline="\n")
    if rc != 0:
        raise SystemExit(out)
    print("  ok")

    print("[3/6] dsd lcf")
    rc, out = sh([*resolve_dsd(), "lcf", "-c", str(CONFIG)])
    if rc != 0:
        raise SystemExit(out)

    obj_txt = BUILD / "objects.txt"
    lines = obj_txt.read_text(encoding="utf-8").splitlines()
    proj = REPO / "match" / "dsdproj" / "arm9"
    prefix = str(proj)
    prefix_f = prefix.replace("\\", "/")
    rel = "match/dsdproj/arm9"
    lines = [ln.replace(prefix, rel).replace(prefix_f, rel) for ln in lines]
    left = [ln for ln in lines if ":\\" in ln or ln.startswith("/")]
    if left:
        raise SystemExit(
            "objects.txt still carries absolute paths after relativization:\n"
            + "\n".join(left[:5]))
    obj_txt.write_text("\n".join(lines) + "\n",
                       encoding="utf-8", newline="\n")
    print(f"  ok (objects.txt relativized: {len(lines)} repo-relative entries)")

    print("[4/6] patch delinked object alignments (Thumb: 2, not 4)")
    rc, out = sh([sys.executable, str(REPO / "tools" / "fix_delink_align.py")],
                 cwd=str(REPO))
    print(" ", out.strip())

    print("[5/6] patch arm9.lcf + mwldarm link")
    build_dir = REPO / "match" / "build"
    lcf_path = build_dir / "arm9.lcf"
    t = lcf_path.read_text(encoding="utf-8")
    t = (t.replace("ALIGNALL(4)", "ALIGNALL(2)")
          .replace("WRITEW(0);", ""))
    lcf_path.write_text(t, encoding="utf-8", newline="\n")
    rc, out = sh([*prefix_from_env("MWLDARM_LAUNCHER"),
                  str(MWLDARM),
                  "-proc", "arm946e", "-nostdlib", "-interworking",
                  "-msgstyle", "gcc", "-main", "", "-o",
                  "match/build/arm9_linked.o",
                  "@match/build/objects.txt",
                  "match/build/arm9.lcf"], env=env, cwd=str(REPO))
    if rc != 0:
        raise SystemExit(out)
    print(" ", out.strip() or "linked")

    print("[6/6] byte-compare every module against the ROM")
    ok = True
    for mod, rel in MODULES.items():
        rom = (REPO / rel).read_bytes()
        linked = (REPO / "match" / "build" / "build" / f"{mod}.o").read_bytes()
        same = linked[:len(rom)] == rom
        n = min(len(linked), len(rom))
        diff = sum(1 for a, b in zip(linked[:n], rom[:n]) if a != b)
        verdict = "IDENTICAL" if same else f"{diff} bytes differ"
        print(f"  {mod:5} {len(rom):>7} bytes: {verdict}")
        ok &= same
    print("\nWHOLE-PROJECT LINK: " + ("ALL 35 MODULES BYTE-IDENTICAL TO THE ROM"
                                    if ok else "MISMATCHES REMAIN"))
    if not ok:
        return 1

    if not os.environ.get("PSZ_BUILD_ROM"):
        print("\n(bootable ROM not built - set PSZ_BUILD_ROM=1 to rebuild "
              "match/build/PSZERO-built.nds and verify against assets/psz-us.nds)")
        return 0

    print("\n[7/6] rebuild bootable ROM (dsd rom build from linked modules)")
    built_rom = BUILD / "PSZERO-built.nds"
    build_rom_from_linked_modules(built_rom)
    retail_rom = REPO / "assets" / "psz-us.nds"
    b1 = retail_rom.read_bytes()
    b2 = built_rom.read_bytes()
    if b1 == b2:
        print(f"  ROM IDENTICAL to {retail_rom.relative_to(REPO)} ({len(b2):,} bytes, 0 differing)")
        return 0
    diff = sum(1 for a, b in zip(b1, b2) if a != b) + abs(len(b1) - len(b2))
    print(f"  ROM MISMATCH: {diff} bytes differ vs {retail_rom.relative_to(REPO)}")
    return 1


if __name__ == "__main__":
    sys.exit(main())
