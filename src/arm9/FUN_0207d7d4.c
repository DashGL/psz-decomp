// FUN_0207d7d4 @ 0x0207d7d4 (0x70, thumb) - ported from FUN_02054c08 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_0207d7d4 @ 0x02054c08 (true 0x70, recorded 0x70, Thumb) — live game-side
 * mode/owner setup. Clamps the requested channel to a minimum of 2 for the
 * sub-init (an UNSIGNED range test, mode-2 <= 2), then maps the GRID's +0x54
 * class to a state code depending on the requested channel:
 *   class 0x1d ->  9 (channel 0) or 10 (channel 1)
 *   class 0x1e -> 11 (channel 0) or 12 (channel 1)
 *   anything else -> -1
 * Finally writes +0x9c = 1, +0xa0 = that code, +0xa4 = -1, and sets bit 27 of
 * the +0xe4 flag word.
 *
 * Two shape notes, both required for the match:
 *  - the dispatch is a SWITCH on the channel, not an if/else-if chain: the
 *    switch lowering is what emits the per-arm mode re-test and the
 *    b-to-end cascade the target has, and keeps the +0x54 load INSIDE each
 *    arm (the target loads it twice, once per arm, rather than hoisting it);
 *  - the class comes from the GRID argument (+0x54), not from obj — reading it
 *    off obj costs the r4 pin the target holds across the sub-init call.
 */
/*
 * FUN_0207d7d4 @ 0x02054c08 (true 0x70, recorded 0x70, Thumb) — live game-side
 * mode/owner setup. Clamps the requested channel to a minimum of 2 for the
 * sub-init (as an UNSIGNED range test on mode-2), then maps the grid's +0x54
 * class (0x1d / 0x1e) to a state code depending on the requested channel:
 *   class 0x1d -> 9 (channel 0) or 10 (channel 1)
 *   class 0x1e -> 11 (channel 0) or 12 (channel 1)
 *   anything else -> -1
 * Finally writes +0x9c = 1, +0xa0 = that code, +0xa4 = -1, and sets bit 27 of
 * the +0xe4 flag word.
 */
/*
 * R28 (2026-10-07, readable-layer benchmark under the R27 priority):
 * readable form promoted -- typed role structs (Owner/Grid; the u8*
 * byte-pointer + per-use casts are gone), same switch (the dispatch
 * cascade re-confirmed from Ghidra's listing: cmp/beq/beq/b forward
 * arms; a nested if/else-if emits the shorter nested-branch form and
 * MISSES by -2, so the switch is machine-confirmed, not twin habit).
 * Grid->cls / Owner->armed/code/mode_code/flags named; bit 27 spelled
 * 1 << 27; the sub-init clamp stays the unsigned range test (mode-2u
 * <= 2u; >= && <= / ternary respells shift the schedule +4). The
 * twin's own dead `s32 cls;` local flagged (never read -- the arms
 * reload +0x54 per compare, per the per-arm-load note).
 *
 * R30 (structure decode, family census): the object is the class whose
 * vtable sits at DAT_0204e4b4 -> 020e639c methods {0204da71,
 * 0204e4d9, 0204e4e4, 02064d28 (per-frame dispatch, +0ac mode-ish),
 * 02064f08 (release), 0204e520 (activate: gates on +0x104==0, scales
 * +0x108 <<12 into FUN_02071014 -- a timer/amount)}. +0x104/+0x108
 * are also mode slots (FUN_02047690 stores the fixed-up mode at
 * +0x108; FUN_0204e254 copies grid+0x1c -> +0xe4 and grid+0x60 ->
 * +0x100). grid+0x54 = a class id (0x1d/0x1e are the two values this
 * function handles); the state codes 9..12 = the 2-class x 2-mode
 * table (9 + class_index*2 + mode). NOT YET RECOVERED: the +0xa0
 * state-code consumer (no banked reader; the raw ldr census was
 * noise) and the game concept behind 0x1d/0x1e. Hedged names
 * Grid/cls/Entity/state stay until a census fills them.
 *
 * R30 constant taxonomy (owner rule): mode - 2u <= 2u = unsigned RANGE
 * TEST; 0x1d/0x1e = enum values (grid class ids); 9/10/11/12 = enum
 * values (initial state codes, 2 classes x 2 modes, base 9); -1 =
 * sentinel; 1 << 27 = BITMASK (flag word); +0x54/+0x9c/+0xa0/+0xa4/
 * +0xe4 = structure offsets. NOT a size: 0x110 in the caller is a DSP
 * command id (FUN_020ab528 is a command submit), not the object's
 * footprint -- corrected after the taxonomy pass.
 */
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;

extern void FUN_02047690(u32 obj, u32 grid, u32 mode);

void FUN_0207d7d4(u32 *obj, u32 *grid, u32 mode)
{
    u8 *p = (u8 *)obj;
    s32 code;
    s32 cls;
    u32 sub;

    sub = mode;
    if (mode - 2 <= 2) {
        sub = 2;
    }
    FUN_02047690((u32)obj, (u32)grid, sub);

    code = -1;
    switch (mode) {
    case 0:
        if (*(s32 *)((u8 *)grid + 0x54) == 0x1d) {
            code = 9;
        } else if (*(s32 *)((u8 *)grid + 0x54) == 0x1e) {
            code = 11;
        }
        break;
    case 1:
        if (*(s32 *)((u8 *)grid + 0x54) == 0x1d) {
            code = 10;
        } else if (*(s32 *)((u8 *)grid + 0x54) == 0x1e) {
            code = 12;
        }
        break;
    default:
        break;
    }

    *(u32 *)(p + 0x9c) = 1;
    *(u32 *)(p + 0xa0) = (u32)code;
    *(u32 *)(p + 0xa4) = 0xffffffff;
    *(u32 *)(p + 0xe4) |= 0x8000000;
}
