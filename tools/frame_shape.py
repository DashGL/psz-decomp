"""Prologue/epilogue shape probe: what register-save set and stack-frame size
does a function actually use, read straight off raw bytes (target ROM or a
compiled candidate) - no full match/fdiff run needed.

Why this exists: on a large function, mwccarm's `-O4` register allocator's
behavior (which locals live in registers vs get spilled to the stack) is
driven by how much stack frame + how many callee-saved registers the
function ends up needing. If a hand-written candidate's C shape implies
fewer live temporaries than the real function, the compiler picks a smaller
frame and a different push-set, and the *entire* body gets colored
differently - not a few isolated instructions, but a function-wide mismatch
that shows up in fdiff.py as hundreds of scattered word diffs with no
obvious single cause.

This tool reads the answer directly instead of inferring it by iteration:
the ROM's own prologue (`push {...}` / `stmdb sp!, {...}` then `sub sp, sp,
#N`) tells you up front how many words of register-save + frame the target
actually has, before you write a single line of candidate C.

Ported from tangOS-decomps/pictochat-decomp (MIT), adapted for PSZ Mini:
module default arm9, the probe decodes Thumb by default (this title's
norm; pictochat's was ARM-only), and the candidate side follows the
effective flags like match.py does.

Usage:
    # Target (ROM) shape:
    python tools/frame_shape.py --addr 0x0203e874 --size 0x118

    # Candidate shape (compiles it, extracts the same function, same probe):
    python tools/frame_shape.py --c draft.c --func FUN_0203e874 \
        --addr 0x0203e874 --size 0x118

    # Side-by-side (both in one call):
    python tools/frame_shape.py --c draft.c --func FUN_0203e874 \
        --addr 0x0203e874 --size 0x118 --compare

    # ARM-mode function:
    python tools/frame_shape.py --addr 0x02026c1c --size 0x8 --arm
"""
import argparse
import pathlib
import sys

sys.path.insert(0, str(pathlib.Path(__file__).resolve().parent))
import match as M  # noqa: E402

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB  # noqa: E402


def probe(code: bytes, thumb: bool, max_insns: int = 16):
    """Scan the first few instructions for one or more leading push/stmdb
    (register-save set) and a following sub sp,sp,#N (extra frame). Returns
    (pushed_regs: list[str], frame_bytes: int, insns_scanned: int).

    Some functions emit TWO leading pushes, not one: `push {r0,r1,r2,r3}`
    to spill all incoming argument registers to fixed stack slots (seen on
    pictochat/sm64ds's FUN_022d5a64 - a real, large register-pressure
    signal, not noise), immediately followed by the normal
    `push {r4-fp,lr}` callee-saved frame push. Accumulate every consecutive
    leading push before the first non-push/non-sub instruction.

    Thumb wrinkle: Thumb-1 `push {r4, lr}` is `pop`'s mirror (0xb410|regs)
    and the return is `pop {r3, pc}` style - both decode fine here; Thumb-2
    wide saves use literal `push.w` / `stmdb` mnemonics capstone reports as
    `push.w`/`stmdb`, covered by the startswith + set below."""
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB if thumb else CS_MODE_ARM)
    md.detail = True
    pushed_groups, frame = [], 0
    n = 0
    for insn in md.disasm(code[:max_insns * 4], 0):
        n += 1
        mnem = insn.mnemonic
        if mnem in ("push", "stmdb", "stmfd") or mnem.startswith("push.") or mnem.startswith("stmdb."):
            ops = [o.strip() for o in insn.op_str.split("{")[-1].rstrip("}").split(",")]
            pushed_groups.append([o.strip() for o in ops if o.strip()])
        elif (mnem == "sub" or mnem.startswith("sub.")) and pushed_groups \
                and "sp" in insn.op_str.split(",")[0]:
            imm = insn.op_str.rsplit("#", 1)[-1]
            try:
                frame = int(imm, 0)
            except ValueError:
                pass
            break
        elif pushed_groups:
            # first non-frame-setup instruction after the push(es) - prologue's over
            break
        if n >= max_insns:
            break
    pushed = [r for group in pushed_groups for r in group]
    return pushed, frame, n


def report(label: str, code: bytes, thumb: bool):
    pushed, frame, n = probe(code, thumb)
    total = len(pushed) * 4 + frame
    print(f"{label}: pushed {{{', '.join(pushed) or '(none)'}}} "
          f"({len(pushed)} reg{'s' if len(pushed) != 1 else ''} = 0x{len(pushed) * 4:x} bytes)"
          f" + sub sp,#0x{frame:x}  => total stack depth 0x{total:x} bytes"
          f"  [scanned {n} insn(s), {'thumb' if thumb else 'arm'}]")
    return pushed, frame


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="arm9", choices=list(M.MODULES))
    ap.add_argument("--addr", type=lambda x: int(x, 0), required=True)
    ap.add_argument("--size", type=lambda x: int(x, 0), required=True)
    ap.add_argument("--arm", action="store_true", help="target is ARM mode (default: Thumb)")
    ap.add_argument("--c", default=None, help="candidate C file to compile and compare")
    ap.add_argument("--func", default=None, help="function name in the candidate (required with --c)")
    ap.add_argument("--version", default=M.CANONICAL)
    ap.add_argument("--flags", default=None)
    ap.add_argument("--compare", action="store_true", help="also print a match/mismatch verdict")
    args = ap.parse_args()

    target = M.target_bytes(args.module, args.addr, args.size)
    t_pushed, t_frame = report("TARGET   ", target, not args.arm)

    if args.c:
        if not args.func:
            ap.error("--func is required with --c")
        flags = args.flags or (M.DEFAULT_FLAGS_ARM7 if args.module == "arm7" else M.DEFAULT_FLAGS)
        src_text = pathlib.Path(args.c).read_text(encoding="utf-8")
        flags = M.apply_flags_marker(flags, src_text, allow_thumb_heuristic=not args.flags)
        obj = M.compile_c(pathlib.Path(args.c), args.version, flags)
        if obj is None:
            sys.exit(1)
        code, _, _ = M.extract_func(obj, args.func)
        if code is None:
            sys.exit(f"symbol '{args.func}' not found in compiled object")
        cand_thumb = "-thumb" in flags
        c_pushed, c_frame = report("CANDIDATE", code, cand_thumb)
        if args.compare:
            same = t_pushed == c_pushed and t_frame == c_frame
            print(f"\n{'MATCH' if same else 'MISMATCH'}: "
                  f"{'frame shapes agree' if same else 'candidate needs to imply more/fewer live locals to reach the target shape'}")


if __name__ == "__main__":
    main()