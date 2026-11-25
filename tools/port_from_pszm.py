#!/usr/bin/env python3
"""Cross-ROM mechanical harvester: port byte-matched C (and drafts/near) from
pszm-decomp into psz-decomp.

For every function in pszm-decomp/src/arm9/*.c (and optionally drafts/near/ and
drafts/arm9/), we profile its instruction skeleton, immediate operands,
PC-relative literal pool words, and BL/BLX call targets from pszm-decomp's
extracted/arm9/arm9.bin.

We then match those profiles against every live unmatched function in
psz-decomp (ARM9 + 32 overlays), rewrite:
  1. Pool words and immediates (both hex/decimal literals AND symbol names
     encoding hex addresses such as G_020F0740 / D_020F0740 / data_020f0740)
  2. Direct BL/BLX callee names (FUN_<old> -> FUN_<new>, including Thumb/ARM
     interworking target alignment)
  3. The function's own name (FUN_<old> -> FUN_<new>)
  4. Preserving the donor's `// flags:` marker (e.g. -O4,s, -noThumb)

Every rewritten candidate is compiled in-process with mwccarm (trying
CANONICAL 2.0/sp2p3 first, and falling back to donor version if needed) and
verified via match.py's word-compare + verify_relocs:
  - Exact 0-diff + clean relocs -> banked to src/arm9/ (or src/ovNNN/)
  - Near-miss (same size, 1..8 word diffs, clean relocs) -> parked in
    drafts/near/arm9/ with a `// near:` header so Argon has a ready-made draft.
"""
import argparse
import pathlib
import re
import sys
import tempfile

import capstone

REPO = pathlib.Path(__file__).resolve().parent.parent
PSZM = pathlib.Path("/home/kion/projects/pszm-decomp")
sys.path.insert(0, str(REPO / "tools"))
import funcs as F   # noqa: E402
import match as M   # noqa: E402

HEX = re.compile(r"#?(?:0x[0-9a-fA-F]+|\b\d+\b)")
COND = ("eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
        "hi", "ls", "ge", "lt", "gt", "le", "hs", "lo")
SYM_ADDR_RE = re.compile(r"\b([A-Za-z_][A-Za-z0-9_]*?_)?([0-9a-fA-F]{8})\b")

_MD_THUMB = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
_MD_ARM = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)


def norm(mn):
    for c in COND:
        if mn.endswith(c) and len(mn) > len(c) + 1:
            mn = mn[:-len(c)]
            break
    return mn[:-1] if mn.endswith("s") and len(mn) > 2 else mn


def profile_bytes(code: bytes, addr: int, mode: str):
    if len(code) < 4:
        return None
    md = _MD_THUMB if mode == "thumb" else _MD_ARM
    insns = list(md.disasm(code, addr))
    if not insns:
        return None
    end = 0
    for i, ins in enumerate(insns):
        if ins.mnemonic in ("bx", "pop", "b") or ins.mnemonic.startswith("ldm") \
                or ins.mnemonic.startswith("pop."):
            end = i + 1
    insns = insns[:end] if end else insns
    if len(insns) < 2:
        return None
    skel, consts, calls, pools = [], [], [], []
    for ins in insns:
        skel.append(ins.mnemonic)
        if ins.mnemonic in ("bl", "blx") and "#" in ins.op_str:
            try:
                tgt = int(ins.op_str.rsplit("#", 1)[-1], 0)
                calls.append(tgt & ~1)
                continue
            except ValueError:
                pass
        for tok in HEX.findall(ins.op_str):
            consts.append(int(tok.lstrip("#"), 0))
    for ins in insns:
        if ins.mnemonic.startswith("ldr") and "pc" in ins.op_str:
            m = re.search(r"\[pc,?\s*#(-?\d+|0x[0-9a-fA-F]+)\]", ins.op_str)
            if not m:
                continue
            off = int(m.group(1), 0)
            base = ((ins.address + 4) & ~3) if mode == "thumb" else (ins.address + 8)
            rel = (base + off) - addr
            if 0 <= rel + 4 <= len(code):
                w = int.from_bytes(code[rel:rel + 4], "little")
                consts.append(w)
                pools.append(w)
    return tuple(skel), consts, calls, pools


def load_pszm_donors(include_drafts=False):
    rom = (PSZM / "extracted" / "arm9" / "arm9.bin").read_bytes()
    base = 0x02004000
    syms = {}
    all_addrs = []
    for line in (PSZM / "config" / "arm9" / "symbols.txt").read_text().splitlines():
        if line.startswith("name="):
            parts = dict(kv.split("=") for kv in line.split())
            a = int(parts["addr"], 16)
            s = int(parts["size"], 16)
            syms[parts["name"]] = (a, s)
            all_addrs.append(a)
    all_addrs.sort()
    next_addr = {all_addrs[i]: (all_addrs[i + 1] if i + 1 < len(all_addrs) else 0x020e8fa0)
                 for i in range(len(all_addrs))}

    dirs = [(PSZM / "src" / "arm9", "banked"), (PSZM / "src" / "arm9" / "stale", "stale")]
    if include_drafts:
        dirs += [(PSZM / "drafts" / "near" / "arm9", "near"),
                 (PSZM / "drafts" / "arm9", "draft")]

    donors = []
    seen = set()
    for d, tier in dirs:
        if not d.is_dir():
            continue
        for p in sorted(d.glob("FUN_*.c")):
            name = p.stem
            if name in seen or name not in syms:
                continue
            text = p.read_text(encoding="utf-8", errors="ignore")
            if "NONMATCHING" in text and tier == "banked":
                continue
            seen.add(name)
            addr, g_size = syms[name]
            true_sz = max(g_size, next_addr[addr] - addr)
            # Check header span if present
            m_span = re.search(r"//\s*FUN_[0-9a-fA-F]{8}\s*@\s*0x[0-9a-fA-F]+\s*\(0x([0-9a-fA-F]+)", text)
            span = int(m_span.group(1), 16) if m_span else true_sz
            mode = "arm" if "-noThumb" in text else "thumb"
            code = rom[addr - base: addr - base + span]
            prof = profile_bytes(code, addr, mode)
            if prof:
                donors.append({
                    "name": name,
                    "addr": addr,
                    "span": span,
                    "mode": mode,
                    "tier": tier,
                    "path": p,
                    "text": text,
                    "prof": prof,
                })
    return donors


def extract_flags_line(text: str, target_mode: str) -> str:
    for line in text.splitlines():
        if line.startswith("// flags: "):
            fl = line
            if target_mode == "arm" and "-noThumb" not in fl:
                fl += " -noThumb"
            elif target_mode == "thumb" and "-noThumb" in fl:
                fl = fl.replace("-noThumb", "").strip()
            return fl + "\n" if fl != "// flags:" else ""
    return "// flags: -noThumb\n" if target_mode == "arm" else ""


def strip_comments_keep_code(text: str) -> str:
    out = []
    for line in text.splitlines():
        if line.strip().startswith("//"):
            continue
        out.append(line)
    return "\n".join(out).strip()


def rewrite_source(body: str, old_name: str, new_name: str,
                   const_pairs: list[tuple[int, int]],
                   call_pairs: list[tuple[int, int]],
                   pool_pairs: list[tuple[int, int]],
                   by_addr: dict[int, dict]) -> str | None:
    # 1. Build combined replacement map for constants AND address-bearing symbols
    table = {}
    addr_map = {}
    for old_v, new_v in const_pairs:
        if old_v == new_v:
            continue
        for sp in (f"0x{old_v:x}", f"0x{old_v:X}", f"0x{old_v:08x}", f"0x{old_v:08X}", str(old_v)):
            table.setdefault(sp, new_v)
        if old_v > 0x7FFFFFFF:
            table.setdefault(str(old_v - (1 << 32)), new_v)
        if 0x01FF0000 <= old_v < 0x04200000:
            addr_map[f"{old_v:08x}".lower()] = new_v

    # 1b. Recover constant-folded RAM base addresses (e.g. `#define B 0x0210db80`
    # where the literal pool stores `B + 0x2088 = 0x0210fc08`).
    ram_deltas = [(op, np - op) for op, np in pool_pairs
                  if 0x01FF0000 <= op < 0x03000000 and 0x01FF0000 <= np < 0x03000000]
    if ram_deltas:
        for tok in set( re.findall(r"0x02[0-9a-fA-F]{6}\b", body) ):
            val = int(tok, 16)
            if tok in table:
                continue
            # Find closest pool word within 64 KB
            best = min(ram_deltas, key=lambda item: abs(item[0] - val))
            if abs(best[0] - val) <= 0x10000 and best[1] != 0:
                nv = val + best[1]
                for sp in (f"0x{val:x}", f"0x{val:X}", f"0x{val:08x}", f"0x{val:08X}"):
                    table.setdefault(sp, nv)
                addr_map.setdefault(f"{val:08x}".lower(), nv)

    for old_c, new_c in call_pairs:
        nf = by_addr.get(new_c) or by_addr.get(new_c & ~1)
        if nf is None:
            return None
        addr_map[f"{old_c:08x}".lower()] = nf["addr"]
        addr_map[f"{(old_c & ~1):08x}".lower()] = nf["addr"]

    # First replace symbol names containing 8-hex-digit addresses (FUN_..., G_..., D_..., data_...)
    def sub_sym(m):
        prefix = m.group(1) or ""
        hex8 = m.group(2)
        low = hex8.lower()
        if prefix == "FUN_" and f"FUN_{low}" == old_name.lower():
            return new_name
        if low in addr_map:
            nv = addr_map[low]
            if prefix == "FUN_":
                nf = by_addr.get(nv)
                return nf["name"] if nf else f"FUN_{nv:08x}"
            fmt = f"{nv:08X}" if hex8.isupper() else f"{nv:08x}"
            return f"{prefix}{fmt}"
        return m.group(0)

    body = SYM_ADDR_RE.sub(sub_sym, body)

    # Next replace numeric constants in one pass
    if table:
        pat = re.compile(r"\b(" + "|".join(re.escape(k) for k in
                                           sorted(table, key=len, reverse=True)) + r")\b")

        def sub_num(m):
            k = m.group(1)
            v = table[k]
            if k.startswith("0x"):
                return f"0x{v:x}"
            return str(v)

        body = pat.sub(sub_num, body)

    body = re.sub(rf"\b{re.escape(old_name)}\b", new_name, body)
    return body


def try_compile_and_verify(c_text: str, func_name: str, module: str,
                           addr: int, target_span: int, g_size: int):
    flags = M.apply_flags_marker(M.DEFAULT_FLAGS, c_text)
    is_thumb = "-thumb" in flags
    with tempfile.NamedTemporaryFile("w", suffix=".c", encoding="utf-8", delete=False) as tf:
        tf.write(c_text)
        cpath = pathlib.Path(tf.name)
    try:
        obj = M.compile_c(cpath, M.CANONICAL, flags)
    finally:
        cpath.unlink(missing_ok=True)
    if obj is None:
        return None
    code, relocs, rinfo = M.extract_func(obj, func_name)
    if code is None or len(code) == 0:
        return None
    # Check that compiled size fits within true_size and matches ROM bytes at len(code)
    if len(code) > target_span:
        return None
    try:
        tgt = M.target_bytes(module, addr, len(code))
    except SystemExit:
        return None
    ok, ndiff = M.compare_bytes(tgt, code, rinfo)
    checks = M.verify_relocs(addr, tgt, rinfo, is_thumb)
    # Require every relocation symbol to carry an address (len(checks) == len(rinfo))
    # and have zero false targets so linkcheck.py is guaranteed VERIFIED/BENIGN
    bad = [r for r in checks if r[4] is not True]
    blind = len(rinfo) - len(checks)
    return ok, ndiff, len(bad) + blind, len(code), "thumb" if is_thumb else "arm"


def load_self_donors(funcs):
    f_by_name = {f["name"]: f for f in funcs}
    donors = []
    for p in sorted((REPO / "src").glob("*/*.c")):
        name = p.stem
        f = f_by_name.get(name)
        if not f:
            continue
        text = p.read_text(encoding="utf-8", errors="ignore")
        if "NONMATCHING" in text:
            continue
        addr = f["addr"]
        m_span = re.search(r"//\s*FUN_[A-Za-z0-9_]+\s*@\s*0x[0-9a-fA-F]+\s*\(0x([0-9a-fA-F]+)", text)
        span = int(m_span.group(1), 16) if m_span else f["size"]
        mode = "arm" if "-noThumb" in text else "thumb"
        try:
            code = M.target_bytes(f["module"], addr, span)
        except SystemExit:
            continue
        prof = profile_bytes(code, addr, mode)
        if prof:
            donors.append({
                "name": name,
                "addr": addr,
                "span": span,
                "mode": mode,
                "tier": "psz-self",
                "path": p,
                "text": text,
                "prof": prof,
            })
    return donors


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--relax", action="store_true",
                    help="normalize condition/s suffixes on mnemonics")
    ap.add_argument("--include-drafts", action="store_true",
                    help="also use pszm-decomp drafts/near and drafts/arm9 as donors")
    ap.add_argument("--include-self", action="store_true",
                    help="also use already-banked psz-decomp src/ functions as twin donors")
    ap.add_argument("--overlays", action="store_true",
                    help="also scan live overlay functions (ov000..ov031)")
    ap.add_argument("--park-near", action="store_true",
                    help="park 1..6-word near-misses with clean relocs into drafts/near/")
    ap.add_argument("--min-skel", type=int, default=2)
    ap.add_argument("--tries", type=int, default=4)
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()

    def key(skel):
        return tuple(norm(m) for m in skel) if args.relax else skel

    funcs = F.load_funcs()
    donors = load_pszm_donors(include_drafts=args.include_drafts)
    if args.include_self:
        donors.extend(load_self_donors(funcs))
    index = {}
    for d in donors:
        skel = d["prof"][0]
        if len(skel) >= args.min_skel:
            index.setdefault((d["mode"], key(skel)), []).append(d)
    print(f"loaded {len(donors)} donors ({len(index)} distinct skeletons)")

    arm9_by_addr = {f["addr"]: f for f in funcs if f["module"] == "arm9"}
    ov_by_mod_addr = {}
    next_addr_by_mod = {}
    by_mod = {}
    for f in funcs:
        by_mod.setdefault(f["module"], []).append(f)
    for mod, mfuncs in by_mod.items():
        if mod not in M.MODULES:
            continue
        maddrs = sorted(f["addr"] for f in mfuncs)
        rel_path, mod_base = M.MODULES[mod]
        if mod == "arm9":
            end_a = 0x020f6058
        else:
            ov_sz = (M.DSD_EXTRACT / rel_path).stat().st_size
            end_a = mod_base + ov_sz
            ov_by_mod_addr[mod] = {**arm9_by_addr, **{f["addr"]: f for f in mfuncs}}
        next_addr_by_mod[mod] = {maddrs[i]: (maddrs[i + 1] if i + 1 < len(maddrs) else end_a)
                                 for i in range(len(maddrs))}

    reach = F.load_reach()
    live_ov = set()
    for fn in ("overlay_call_reachable.txt", "overlay_indirect_only.txt"):
        p = REPO / "config" / "reachability" / fn
        if p.exists():
            for line in p.read_text().splitlines():
                if line.strip() and not line.startswith("#"):
                    live_ov.add(line.split()[-1])

    done = {p.stem for p in (REPO / "src").glob("*/*.c")}
    near_done = {p.stem for p in (REPO / "drafts" / "near").glob("*/*.c")} if (REPO / "drafts" / "near").is_dir() else set()
    mod_bins = {"arm9": (0x02000000, (REPO / "assets" / "extracted" / "arm9" / "arm9.bin").read_bytes())}
    if args.overlays:
        for mod in by_mod:
            if mod != "arm9" and mod in M.MODULES:
                rel_path, mod_base = M.MODULES[mod]
                mod_bins[mod] = (mod_base, (M.DSD_EXTRACT / rel_path).read_bytes())

    banked = 0
    parked = 0
    compiles = 0
    for f in funcs:
        mod = f["module"]
        if mod not in mod_bins:
            continue
        name = f["name"]
        addr = f["addr"]
        if name in done:
            continue
        if mod == "arm9":
            if reach.get(addr) not in ("call_reachable", "indirect_only"):
                continue
            by_addr = arm9_by_addr
        else:
            if name not in live_ov:
                continue
            by_addr = ov_by_mod_addr[mod]
        true_sz = next_addr_by_mod[mod][addr] - addr
        if true_sz <= 0:
            true_sz = f["size"]
        mode = F.mode_of(f)
        mod_base, rom = mod_bins[mod]
        # Try both Ghidra size and true_size when profiling the target
        cand_donors = []
        seen_donors = set()
        for sz in sorted({f["size"], true_sz}):
            if sz < 4 or addr - mod_base + sz > len(rom):
                continue
            prof = profile_bytes(rom[addr - mod_base: addr - mod_base + sz], addr, mode)
            if not prof or len(prof[0]) < args.min_skel:
                continue
            for d in index.get((mode, key(prof[0])), ()):
                if d["name"] not in seen_donors:
                    seen_donors.add(d["name"])
                    cand_donors.append((d, prof))

        if not cand_donors:
            continue

        tried = 0
        best_near = None
        for d, prof in cand_donors:
            if tried >= args.tries:
                break
            dp = d["prof"]
            if len(dp[1]) != len(prof[1]) or len(dp[2]) != len(prof[2]):
                continue
            raw_body = strip_comments_keep_code(d["text"])
            rewritten = rewrite_source(raw_body, d["name"], name,
                                       list(zip(dp[1], prof[1])),
                                       list(zip(dp[2], prof[2])),
                                       list(zip(dp[3], prof[3])),
                                       by_addr)
            if rewritten is None:
                continue
            flags_hdr = extract_flags_line(d["text"], mode)
            full_c = f"{flags_hdr}{rewritten}\n"
            tried += 1
            compiles += 1
            res = try_compile_and_verify(full_c, name, mod, addr, true_sz, f["size"])
            if res is None:
                continue
            ok, ndiff, nbad, code_len, cmode = res
            dir_mod = "arm9" if mod == "arm9" else f"ov{int(mod.replace('arm9ov', '').replace('ov', '')):03d}"
            if ok and ndiff == 0 and nbad == 0:
                banked += 1
                print(f"  MATCH [{dir_mod}] {name} @ 0x{addr:08x} (0x{code_len:x}, {cmode}) <- {d['name']} [{d['tier']}]")
                if args.apply:
                    hdr = (f"// {name} @ 0x{addr:08x} (0x{code_len:x}, {cmode}) - "
                           f"ported from {d['name']} [{d['tier']}], "
                           f"verified via tools/match.py (word compare + verify_relocs).\n")
                    out_dir = REPO / "src" / dir_mod
                    out_dir.mkdir(parents=True, exist_ok=True)
                    out_path = out_dir / f"{name}.c"
                    out_path.write_text(hdr + full_c, encoding="utf-8", newline="\n")
                    done.add(name)
                    if args.include_self:
                        new_prof = profile_bytes(rom[addr - mod_base: addr - mod_base + code_len], addr, cmode)
                        if new_prof and len(new_prof[0]) >= args.min_skel:
                            index.setdefault((cmode, key(new_prof[0])), []).append({
                                "name": name, "addr": addr, "span": code_len,
                                "mode": cmode, "tier": "psz-cascade",
                                "path": out_path, "text": hdr + full_c, "prof": new_prof,
                            })
                break
            elif args.park_near and nbad == 0 and 1 <= ndiff <= 6 and code_len in (f["size"], true_sz):
                if best_near is None or ndiff < best_near[0]:
                    best_near = (ndiff, code_len, cmode, d, full_c, dir_mod)
        else:
            if best_near is not None and name not in near_done:
                ndiff, code_len, cmode, d, full_c, dir_mod = best_near
                parked += 1
                print(f"  NEAR  [{dir_mod}] {name} @ 0x{addr:08x} (ndiff={ndiff}/{code_len//4}, 0x{code_len:x}) <- {d['name']}")
                if args.apply:
                    near_dir = REPO / "drafts" / "near" / dir_mod
                    near_dir.mkdir(parents=True, exist_ok=True)
                    hdr = (f"// {name} @ 0x{addr:08x} (0x{code_len:x}, {cmode})\n"
                           f"// near: ndiff={ndiff}/{code_len//4} size=0x{code_len:x} vers={M.CANONICAL} "
                           f"next=\"ported from {d['name']} ({d['tier']}); resolve 2.0/sp2p3 vs dsi/1.1 residual\"\n")
                    (near_dir / f"{name}.c").write_text(hdr + full_c, encoding="utf-8", newline="\n")
                    near_done.add(name)

    print(f"\nport_from_pszm summary: {banked} exact matches, {parked} near-misses "
          f"({compiles} compile checks){' [APPLIED]' if args.apply else ' [DRY-RUN]'}")


if __name__ == "__main__":
    main()
