// FUN_020c2d38 @ 0x020c2d38 (0x24, thumb) - ported from FUN_020a85fc [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c2d38 @ 0x020a85fc (0x24, Thumb) — release a slot's three optional
 * sub-objects, in the slot's OWN field order (0x3c, 0x40, 0x38 — NOT ascending).
 *
 * Bytes: 10 b5 / 04 1c / e0 6b / 00 28 / 01 d0 / 02 f0 5b fd /
 *        20 6c / 00 28 / 01 d0 / 02 f0 56 fd /
 *        a0 6b / 00 28 / 01 d0 / 02 f0 51 fd / 10 bd
 *   push {r4,lr} ; adds r4,r0,#0 ; then three times
 *   ldr r0,[r4,#K] ; cmp r0,#0 ; beq +2 ; bl 0x020ab0c0 ; pop {r4,pc}
 *
 * Each of the three arms is ONE load, ONE test, ONE call: the loaded pointer
 * is tested and then passed as the callee's own argument, so the arm cannot be
 * two loads. FUN_020ba4d8 is 1-arg, read off its own body at 0x020ab0c0
 * (push {r3,lr}; ldr r1,[pc,#0x2c]; ldr r1,[r1]; cmp r0,r1 inside a linked-list
 * walk — it compares its incoming r0 against each node), NOT from the
 * decompile, which renders all three calls as no-argument `FUN_020ba4d8()`.
 *
 * The load offset order is 0x3c, 0x40, 0x38: descending-ish, and reordering to
 * ascending field order (the descriptor-ctor habit) breaks the byte stream.
 * Each `beq` targets exactly +2 halfwords, i.e. it skips only its own 32-bit
 * call, so the arms are independent `if`s and NOT an else-if chain.
 *
 * `adds r4, r0, #0` pins the argument pointer, not the pointee: the same base
 * register serves all three loads across two calls, so the slot's ADDRESS is
 * what is held live.
 *
 * The 0x24 span is all instruction bytes — no pool, no trailing pad — so
 * recorded == true. No version override needed; the dsi family is the pin.
 */
typedef unsigned int u32;

struct slot {
    u32 pad[14];
    u32 f38;
    u32 f3c;
    u32 f40;
};

extern void FUN_020ba4d8(u32);

void FUN_020c2d38(u32 *a)
{
    struct slot *s = (struct slot *)a;

    if (s->f3c != 0) {
        FUN_020ba4d8(s->f3c);
    }
    if (s->f40 != 0) {
        FUN_020ba4d8(s->f40);
    }
    if (s->f38 != 0) {
        FUN_020ba4d8(s->f38);
    }
}
