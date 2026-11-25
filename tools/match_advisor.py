#!/usr/bin/env python3
"""Compile a draft, diff it against the ROM, and say what to CHANGE IN THE C.

The auto-m2c pipeline (tools/probes/auto_m2c_v2.py) produced reading aids;
match.py/fdiff.py show you WHERE two instruction streams differ. The gap
between those - \"the diff says these four words differ, so what do I
edit?\" - has been closed by hand every time, here and in the sibling
projects, and the same handful of causes keep recurring. This encodes them.

Each check below is a signature that was actually diagnosed by hand - in
this repo (see notes/mwccarm-codegen.md), or in the donors this repo's
knowledge base was mined from (tangosdev/sm64ds-decomp notes; their
match_advisor.py is the direct ancestor of this file, MIT). It is an
ADVISOR: every hint is a hypothesis to test with tools/match.py, not a
fact. Cross-check a fired hint's lever against `tools/levers.py --arch
thumb` before trusting it on Thumb code - most of these were derived on
all-ARM titles and this project is predominantly Thumb.

    python tools/match_advisor.py --c src/arm9/FUN_0209e5f0.c
    python tools/match_advisor.py --c drafts/arm9/FUN_02004d50.c
    python tools/match_advisor.py --c draft.c --arm      # ARM-mode target
    python tools/match_advisor.py --c draft.c --sweep    # also probe PINNED builds

Coordinates come from the draft's own header line - accepted spellings:

    // FUN_0203e874 @ 0x0203e874 (0x30 code + 4-byte pool) ...
    // Target: FUN_02004d50 @ 0x02004d50, size 0x50 (...)

The function table (tools/funcs.py, from the Ghidra exports) supplies the
module and the pool-inclusive true_size(); a `(0xNN` size in the header
overrides it. `// flags:` lines in the file apply exactly as in match.py
(`-noThumb` -> ARM mode).
"""
import argparse
import collections
import difflib
import pathlib
import re
import sys

REPO = pathlib.Path(__file__).resolve().parent.parent
sys.path.insert(0, str(REPO / "tools"))
import match as M      # noqa: E402
import funcs as F      # noqa: E402
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB  # noqa: E402

REG = re.compile(r"\b(r\d+|sb|sl|fp|ip|lr|sp)\b")
SP_OFF = re.compile(r"\[sp,\s*#(0x[0-9a-fA-F]+|\d+)\]")

BRANCH = ("bl", "blx")

# Accepted draft-header spellings (this repo's convention; grep-verified).
# The parenthesized span may be a single working size ("(0x84)") OR
# components ("(0x2c code + 8-byte pool)", "(0x48 code + 2 pool words)") -
# the working --size is the SUM in the component case.
MARKER_RE = re.compile(
    r"//\s*(?:Target:\s*)?(FUN_[0-9a-fA-F]{8}|[A-Za-z_]\w*)\s+@\s+0x([0-9a-fA-F]+)"
    r"(?:\s*(?:,|-)?\s*(?:size\s+)?(0x[0-9a-fA-F]+|\d+)?\s*(\([^)]*\))?)?", re.I)
_NUM_RE = re.compile(r"0x[0-9a-fA-F]+|\d+", re.I)


def marker_size(span: str):
    """Working compare size from the header's size/paren span: a lone number
    is the size itself; a 'code + pool' decomposition is summed (pool given
    in words multiplies by 4)."""
    if not span:
        return None
    if span.startswith("("):
        nums = [int(x, 0) for x in _NUM_RE.findall(span)]
        if not nums:
            return None
        if len(nums) >= 2 and "+" in span:
            pool = nums[1] * 4 if "word" in span else nums[1]
            return nums[0] + pool
        return nums[0]
    return int(span, 0)


def norm(i):
    """Instruction with register names, sp-offsets and branch targets abstracted
    away, so an alignment ignores pure colour/slot/relocation churn and lines up
    real structure.

    Order matters: the sp-offset pattern must be applied BEFORE registers are
    renamed, or REG rewrites the `sp` inside `[sp,#N]` first and the offset is
    never recognised. Branch targets are blanked because a freshly compiled
    object leaves call sites unrelocated (offset 0) while the ROM has real
    displacements - a difference that means nothing, and which match.py
    wildcards for exactly that reason."""
    if i.mnemonic in BRANCH:
        return i.mnemonic + " T"
    ops = SP_OFF.sub("[sp,#S]", i.op_str)
    return i.mnemonic + " " + REG.sub("R", ops)


def disasm(code, mode):
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB if mode == "thumb" else CS_MODE_ARM)
    return list(md.disasm(code, 0))


RET = ("bx", "pop", "ldm", "ldmia")


def trim_pool(ins):
    """Drop the trailing literal pool. capstone happily decodes pool WORDS as
    instructions, and they then read as bogus differences (the target's pool
    holds real addresses; a fresh object leaves them as reloc placeholders).
    Cut after the last return-ish instruction."""
    last = max((k for k, i in enumerate(ins)
                if i.mnemonic in RET or (i.mnemonic.startswith("pop"))), default=len(ins) - 1)
    return ins[:last + 1]


def advise(tgt_ins, cand_ins, tgt, cand, relocs, matched_versions):
    hints = []
    tgt_ins, cand_ins = trim_pool(tgt_ins), trim_pool(cand_ins)
    tn = [norm(i) for i in tgt_ins]
    cn = [norm(i) for i in cand_ins]
    sm = difflib.SequenceMatcher(a=tn, b=cn, autojunk=False)
    ops = sm.get_opcodes()
    diffs = [o for o in ops if o[0] != "equal"]

    # --- whole-file shape -------------------------------------------------
    if len(cand) != len(tgt):
        d = len(cand) - len(tgt)
        hints.append(("SIZE", f"candidate is {abs(d)} byte(s) {'longer' if d>0 else 'shorter'} "
                      f"than the target ({len(cand):#x} vs {len(tgt):#x}). If every "
                      "instruction already lines up, suspect the SIZE, not the C: "
                      "Ghidra's boundary can exclude the function's trailing literal "
                      "pool - pass the pool-inclusive size (funcs.true_size(); batch 4 "
                      "hit exactly this on FUN_0209e5f0: 0x18 true vs 0x84 padded)."))

    # --- everything left is register colour and/or stack-slot numbering ----
    # norm() deliberately abstracts BOTH away so the alignment tracks real
    # structure, which means these never show up as non-equal blocks. Walk the
    # aligned-equal regions and compare the RAW text to find them.
    slot_diffs = reg_diffs = 0
    for tag, i1, i2, j1, j2 in ops:
        if tag != "equal":
            continue
        for a, b in zip(tgt_ins[i1:i2], cand_ins[j1:j2]):
            if a.op_str == b.op_str:
                continue
            ta, tb = SP_OFF.search(a.op_str), SP_OFF.search(b.op_str)
            if ta and tb and ta.group(1) != tb.group(1):
                slot_diffs += 1
            else:
                reg_diffs += 1
    if slot_diffs:
        hints.append(("SLOTS", f"{slot_diffs} "
                      f"difference(s) are stack-SLOT numbers (same instruction, different "
                      f"[sp,#N])" + (f", {reg_diffs} are register colour" if reg_diffs else "")
                      + (" - and the instruction stream is otherwise EXACT" if not diffs else "")
                      + ". Declaration order drives slot assignment on mwccarm: run "
                      "tools/declorder_search.py. Note fdiff collapses register renames "
                      "but NOT slot renumbering, so one wrong order inflates the count "
                      "across the whole function."))
    elif reg_diffs:
        hints.append(("COLOR", f"the instruction stream is exact; {reg_diffs} difference(s) "
                      "are pure register colour. Declaration order sets callee-saved "
                      "assignment - swap the declarations of the two competing locals, one "
                      "pair at a time (the FUN_0203e874 r4<->r5 coupling has this shape, "
                      "though its campaign plateaued - see notes/mwccarm-codegen.md)."))

    # --- an instruction that merely MOVED --------------------------------
    inserted = [cn[j] for tag, _, _, j1, j2 in diffs if tag == "insert" for j in range(j1, j2)]
    deleted = [tn[i] for tag, i1, i2, _, _ in diffs if tag == "delete" for i in range(i1, i2)]
    moved = collections.Counter(inserted) & collections.Counter(deleted)
    if moved:
        what = ", ".join(sorted(moved))
        hints.append(("SCHEDULE", f"{sum(moved.values())} instruction(s) are present in BOTH "
                      f"streams but at different positions ({what}) - a scheduling difference, "
                      "not a missing or extra operation. Move the corresponding STATEMENT in "
                      "the C rather than changing what it computes; statement order and "
                      "recompute-vs-reuse both shift it."))

    # --- truncation pair present in target, absent in candidate ------------
    def has_trunc(ins):
        return any(a.mnemonic in ("lsl", "lsls") and "#0x10" in a.op_str
                   and b.mnemonic in ("lsr", "lsrs") and "#0x10" in b.op_str
                   for a, b in zip(ins, ins[1:]))
    if has_trunc(tgt_ins) and not has_trunc(cand_ins):
        hints.append(("WIDTH", "the target truncates a value explicitly (lsl #16 ; lsr #16) "
                      "where the candidate does not. A u16 local never needs that, so the "
                      "real source's variable is WIDER (int/unsigned) and narrows on "
                      "assignment into a u16. Widen the local that feeds those stores "
                      "(the mask/narrowing lever in notes/mwccarm-codegen.md 1a - widen "
                      "to plain `int`, keeping explicit narrowing casts at the USE sites)."))
    if has_trunc(cand_ins) and not has_trunc(tgt_ins):
        hints.append(("WIDTH", "the candidate truncates (lsl #16 ; lsr #16) where the target "
                      "does not - a narrowing the real source does not perform. Often a "
                      "`(unsigned short)` cast on a value the ROM just stores with strh, or "
                      "a u32 parameter that should be u16."))

    # --- compare-against-1 vs compare-against-0 ----------------------------
    t1 = sum(1 for i in tgt_ins if i.mnemonic == "cmp" and re.search(r",\s*#1$", i.op_str))
    c1 = sum(1 for i in cand_ins if i.mnemonic == "cmp" and re.search(r",\s*#1$", i.op_str))
    if t1 > c1:
        hints.append(("CMP1", f"target has {t1} `cmp rX,#1` where the candidate has {c1}. "
                      "mwcc emits that for an explicit `== 1`, and `cmp rX,#0` for a bare "
                      "truthiness test - so write `if (flag == 1)`, not `if (flag)`. Check "
                      "the lever catalogue first: `tools/levers.py --arch thumb --match cmp`."))

    # --- predicated select with swapped arms --------------------------------
    # (ARM-mode only - classic Thumb has no conditional execution; on Thumb
    # targets the same symptom presents as inverted branch arms instead, i.e.
    # the branch-store-order lever.)
    def sel_pairs(ins):
        return [(a.op_str, b.op_str) for a, b in zip(ins, ins[1:])
                if a.mnemonic in ("moveq", "movne") and b.mnemonic in ("moveq", "movne")
                and a.mnemonic != b.mnemonic]
    ts, cs2 = sel_pairs(tgt_ins), sel_pairs(cand_ins)
    if ts and cs2 and len(ts) == len(cs2) and any(t != c for t, c in zip(ts, cs2)):
        hints.append(("TERNARY", "a predicated select (moveq/movne pair) has its arms in the "
                      "other order. Flip the ternary's operands AND its test together - "
                      "`flag == 0 ? a : b` instead of `flag != 0 ? b : a`. ARM-mode only: "
                      "on Thumb, the analogous fix is inverting the conditional branch "
                      "(the branch-store-order lever; `tools/levers.py --arch thumb`)."))

    # --- masking style ------------------------------------------------------
    if any(i.mnemonic == "ands" for i in cand_ins) and not any(i.mnemonic == "ands" for i in tgt_ins) \
            and any(i.mnemonic in ("lsrs", "lsls") for i in tgt_ins):
        hints.append(("MASK", "candidate emits `ands` where the target uses a shift pair with "
                      "flags (`lsl`/`lsrs`). The ROM tests the SHIFTED value, not the masked "
                      "one - test the result variable (`if (chunkLen == 0)`) rather than the "
                      "mask expression (`if ((hdr & 0xff) == 0)`)."))

    # --- base-address ADD-CHAIN vs literal-pool load (extern spelling) -----
    # dsi/1.1 materializes a numeric-literal table base as consecutive
    # large-immediate adds; the ROM pools it via a pc-relative ldr + reloc.
    # The two spellings produce different SIZES and code shapes, so this
    # signature means "right value, wrong lvalue kind".
    def _base_chain(ins):
        run = 0
        for i in ins:
            if i.mnemonic in ("add", "sub", "adds", "subs") and \
                    re.search(r"#0x[0-9a-fA-F]{5,}", i.op_str):
                run += 1
                if run >= 2:
                    return True
            else:
                run = 0
        return False
    if _base_chain(cand_ins) and not _base_chain(tgt_ins):
        hints.append(("BASECHAIN", "the candidate MATERIALIZES a base address with an "
                      "add-chain (2+ consecutive large-immediate add/sub) where the target "
                      "does not. The ROM pools table/base addresses: declare the object as "
                      "an extern (`extern u32 DAT_0xADDR[];`) instead of casting a numeric "
                      "literal `((u32 *)0xADDR)[i]` - the extern's link-time reloc pools "
                      "like the ROM, and verify_relocs then ADDRESS-CHECKS the table "
                      "pointer. (2026-08-29, FUN_0201c56c: 0x34 add-chain vs 0x30 pooled "
                      "extern.)"))
    elif _base_chain(tgt_ins) and not _base_chain(cand_ins):
        hints.append(("BASECHAIN", "the TARGET materializes a base address via an "
                      "add-chain where the candidate pools it - the ROM loaded this "
                      "constant as a literal, so spell the numeric `(u32 *)0xADDR` cast "
                      "and take the wildcards off that slot only if match.py accepts it."))

    # --- ARM predicated execution present in one stream only --------------
    # ARM conditions are also a SOURCE-SHAPE signal: dsi/1.1 emits
    # conditional data instructions (ldrNE, movEQ, strLE, popLE) when the
    # source spelled the operation as a guard expression inside one
    # statement - a ternary, an early return, or a masked bit test. If the
    # candidate predicates where the target branches, de-sugar the contruct
    # (separate statements under if/else). The reverse: an unconditional
    # candidate next to a predicated target wants the value combined INTO
    # one expression (ternary / early return).
    _ARM_COND = ("eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc",
                 "hi", "ls", "ge", "lt", "gt", "le", "al", "lo", "hs")
    def _cond_data(ins):
        n = 0
        for i in ins:
            m = i.mnemonic
            if len(m) > 3 and m[:3] in ("ldr", "str", "mov", "pop", "add",
                                        "sub", "orr", "and", "bic", "mvn") \
                    and m[3:] in _ARM_COND:
                n += 1
        return n
    tc, cc = _cond_data(tgt_ins), _cond_data(cand_ins)
    if cc - tc >= 2:
        hints.append(("PREDCOND", f"the candidate ARM-compiles to {cc} conditional data "
                      f"instructions where the target has {tc} - a control-flow construct "
                      f"got lowered to predicated execution (early `return`, ternary, or "
                      f"masked bit-test). RE-SHAPE THE SOURCE: split the construct into "
                      f"plain statements under if/else, or drop the early return - dsi/1.1 "
                      f"then emits ordinary branches (verified FUN_02012fa8: the "
                      f"early-return spelling came out as strLE/popLE)."))

    # --- guard/init door trade (do-while with a count guard) --------------
    # mwccarm either merges the count guard with the loop back-edge (ble to
    # the exit) or keeps TWO tests (init, cmp/bls skip, body, cmp/blo loop).
    # Which one you get follows WHERE the counter init sits relative to the
    # guarded region: inside = merged, hoisted above the if = two tests.
    def _first_cond_idx(ins):
        for k, i in enumerate(ins):
            m = i.mnemonic
            if m.startswith("b") and m not in ("bx", "bl", "blx") and m[1:] in _ARM_COND:
                return k
        return None
    def _first_zero_init_idx(ins):
        for k, i in enumerate(ins):
            if i.mnemonic in ("mov", "movs") and re.match(r"^r\d+,\s*#0$", i.op_str):
                return k
        return None
    def _has_backedge(ins):
        # capstone renders ARM branch targets ABSOLUTE, and the advisor
        # decodes both streams at base 0 - a ROM back-edge then reads as a
        # huge unsigned target, so compare on the ENCODING: sign-extended
        # imm24 < 0 means the branch goes backwards. Careful with the
        # mnemonics: `blo`/`bls` start with "bl" but are CONDITIONAL
        # branches (lo/ls) - exclude only exact bl/blx/bx.
        for i in ins:
            m = i.mnemonic
            if m[0] == "b" and m not in ("bl", "blx", "bx"):
                x = int.from_bytes(i.bytes, "little") & 0x00FFFFFF
                d = x - 0x1000000 if x >= 0x800000 else x
                if d < 0:
                    return True
        return False
    ti, ci = _first_cond_idx(tgt_ins), _first_cond_idx(cand_ins)
    tzi, czi = _first_zero_init_idx(tgt_ins), _first_zero_init_idx(cand_ins)
    t_side = ti is not None and tzi is not None and tzi < ti
    c_side = ci is not None and czi is not None and czi < ci
    if (ti is not None and ci is not None and _has_backedge(tgt_ins)
            and _has_backedge(cand_ins) and t_side != c_side):
        if t_side:
            hints.append(("GUARDINIT", "guard/init door mismatch: the target initializes the "
                          "loop counter BEFORE the count test (dedicated `mov #0` + `cmp` + "
                          "branch-skip, back-edge separate) while the candidate MERGED the "
                          "guard with the loop exit. Hoist the counter init out of the `if` "
                          "region. Doors trade: the hoisted form keeps two tests, the "
                          "init-inside form merges them; also note an early-return guard "
                          "lowers to a PREDICATED return on dsi/1.1 (see PREDCOND), and a "
                          "decrementing counter frees the counter register role. "
                          "(FUN_02012fa8 campaign, 2026-08-29.)"))
        else:
            hints.append(("GUARDINIT", "guard/init door mismatch: the candidate initializes "
                          "the counter BEFORE the count test (dedicated init + branch-skip) "
                          "but the target inits inside the guarded region (its guard and "
                          "back-edge are one merged test) - move the counter init into the "
                          "`if`. (FUN_02012fa8 campaign, 2026-08-29.)"))

    # --- relocations --------------------------------------------------------
    syms = [r for r in relocs if r.get("sym")]
    if len(syms) > len([i for i in tgt_ins if i.mnemonic in ("bl", "blx")]) + 1:
        hints.append(("RELOC", f"the object emits {len(syms)} relocation(s): "
                      f"{', '.join(sorted({r['sym'] for r in syms}))}. Byte comparison "
                      "WILDCARDS reloc slots, so a spurious one still 'matches' while "
                      "linking to the wrong symbol. This matters doubly here: far calls "
                      "route through interworking veneers (~0x020ab578 `ldr r3,[pc,#0]; "
                      "bx r3`) - write the veneer address as the callee, not Ghidra's "
                      "thunk-routed function (notes/matching-style.md, Language section). "
                      "If the ROM loads a bare constant, write it as a literal "
                      "`(u32 *)0x...`, not as `&DAT_02004d98`-style extern."))

    # --- frame shape --------------------------------------------------------
    def frame(ins):
        push = next((i for i in ins[:3] if i.mnemonic == "push" or i.mnemonic.startswith("push.")), None)
        sub = next((i for i in ins[:4] if i.mnemonic == "sub" and "sp" in i.op_str), None)
        return (push.op_str if push else None), (sub.op_str if sub else None)
    tf, cf = frame(tgt_ins), frame(cand_ins)
    if tf != cf:
        hints.append(("FRAME", f"frame differs - target push={tf[0]} sub={tf[1]}; "
                      f"candidate push={cf[0]} sub={cf[1]}. Frame shape responds to the "
                      "OPT LEVEL far more than to phrasing: sweep -O4,s vs -O4,p "
                      "(tools/frame_shape.py --compare shows just this, cheaply), then "
                      "tools/frame_search.py cartesian-toggles the live-local hypotheses. "
                      "Note a Thumb push sets can differ purely in high-register encoding."))

    if matched_versions and M.CANONICAL not in matched_versions:
        hints.append(("VERSION", f"does not match the pinned {M.CANONICAL} but DOES match "
                      f"{', '.join(matched_versions)}. Investigate before banking - the pin "
                      "is evidence-backed (notes/compiler-identification.md; dsi builds have "
                      "been codegen-identical so far, so a dsi-family-only split is unusual)."))
    return hints


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--c", required=True)
    ap.add_argument("--version", default=None, help=f"default: {M.CANONICAL}")
    ap.add_argument("--arm", action="store_true", help="force ARM-mode disassembly of the target")
    ap.add_argument("--sweep", action="store_true", help="also report which PINNED builds match")
    a = ap.parse_args()

    cfile = pathlib.Path(a.c)
    src = cfile.read_text(encoding="utf-8", errors="ignore")
    m = MARKER_RE.search(src[:800])
    if not m:
        sys.exit("no recognized function header in the draft - expected e.g.\n"
                 "  // FUN_0203e874 @ 0x0203e874 (...)\n"
                 "  // Target: FUN_02004d50 @ 0x02004d50, size 0x50 (...)")
    name = m.group(1)
    addr = int(m.group(2), 16)
    marker_size_v = marker_size(m.group(3) or m.group(4))

    # Resolve the function in the table: exact name match first (names encode
    # their own module: FUN_<hex> = main, FUN_overlay_N__<hex> = overlays),
    # then main-module addr, then any module's addr.
    table = F.load_funcs()
    f = F.by_name(table).get(name)
    if f is None:
        same_addr = [x for x in table if x["addr"] == addr]
        f = next((x for x in same_addr if x["module"] == "main"), None) or \
            (same_addr[0] if same_addr else None)
    if f is None:
        sys.exit(f"{name} @ {addr:#x} not in the function table (config/arm9/*symbols.txt)")
    module, addr = f["module"], f["addr"]
    size = marker_size_v or F.true_size(f, table)

    version = a.version or M.CANONICAL
    flags = M.apply_flags_marker(
        M.DEFAULT_FLAGS_ARM7 if module == "arm7" else M.DEFAULT_FLAGS,
        src, allow_thumb_heuristic=True)
    obj = M.compile_c(cfile, version, flags)
    if obj is None:
        sys.exit(f"{name}: did not compile under {version} (flags: {flags})")
    code, relocs, info = M.extract_func(obj, name)
    if code is None:
        sys.exit(f"{name}: compiled, but the object defines no such symbol")
    tgt = M.target_bytes(module, addr, size)

    ok, ndiff = M.compare(tgt, code, relocs, verbose=False)
    print(f"{name}  {module}  {addr:#010x}  size {size:#x} "
          f"(Ghidra says {f['size']:#x})  {version}")
    if ok:
        print("\nMATCH - byte-identical. Nothing to advise.")
        return 0

    matched = []
    if a.sweep:
        for v in M.PINNED:
            o = M.compile_c(cfile, v, flags)
            if not o:
                continue
            c2, r2, _ = M.extract_func(o, name)
            if c2 is not None and len(c2) == len(tgt) and M.compare(tgt, c2, r2, verbose=False)[0]:
                matched.append(v)

    # Mode: --arm wins; else the effective flags decide the CANDIDATE stream,
    # and we show the target stream in the same mode (a mode disagreement
    # would make every hint nonsense anyway).
    mode = "arm" if a.arm or "-thumb" not in flags else "thumb"
    hints = advise(disasm(tgt, mode), disasm(code, mode),
                   tgt, code, info, matched)
    print(f"{ndiff} differing word(s), {len(code):#x} vs {len(tgt):#x} bytes\n")
    if not hints:
        print("No known signature fired. Fall back to reading the two linear")
        print("disassemblies side by side - that is what found every rule above:")
        print(f"  python tools/fdiff.py --c {a.c} --func {name} --addr {addr:#x} "
              f"--size {size:#x} --module {module}" + (" --arm" if mode == "arm" else ""))
        return 1
    for tag, text in hints:
        print(f"[{tag}] {text}\n")
    return 1


if __name__ == "__main__":
    sys.exit(main())