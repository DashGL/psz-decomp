// FUN_0204a000 @ 0x0204a000 (0x26, thumb) - ported from FUN_02050e18 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1017 promotion): the inventory records this
 * span as 0x28, but the real body is 0x26 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x26.
 */
/* FUN_0204a000 @ 0x02050e18 (0x28, Thumb) - live game-logic leaf
 * allocate -> construct -> apply a parameter blob; returns the object.
 *
 * Bytes: 38 b5 05 1c 47 20 80 00 5a f0 82 fb 04 1c 02 d0 00 f0
 *       0a f8 04 1c 00 2c 03 d0 20 1c 29 1c 00 f0 31 f8 20 1c
 *       38 bd 00 00
 *   02050e18: b538 push   {r3, r4, r5, lr}
 *   02050e1a: 1c05 adds   r5, r0, #0        ; r5 = arg0  (2nd arg, parked)
 *   02050e1c: 2047 movs   r0, #0x47         ; 0x47 = 71
 *   02050e1e: 0080 lsls   r0, r0, #2        ; r0 = 71 * 4 = 284
 *   02050e20: fb82f05a bl  0x020ab528        ; FUN_020ba894(284) = allocate
 *   02050e24: 1c04 adds   r4, r0, #0        ; r4 = result
 *   02050e26: d002 beq    0x204a016        ; if (r4 == 0) SKIP the constructor
 *   02050e28: f80af000 bl  0x02050e40        ; FUN_0204a028(r0)  <- r0 still the ptr
 *   02050e2c: 1c04 adds   r4, r0, #0        ; r4 = ctor result
 *   0204a016: 2c00 cmp    r4, #0
 *   02050e30: d003 beq    0x204a022        ; if (r4 == 0) SKIP the apply
 *   02050e32: 1c20 adds   r0, r4, #0        ; r0 = r4
 *   02050e34: 1c29 adds   r1, r5, #0        ; r1 = arg0
 *   02050e36: f831f000 bl  0x02050e9c        ; FUN_0204a084(obj, arg0)
 *   0204a022: 1c20 adds   r0, r4, #0        ; return r4
 *   02050e3c: bd38 pop    {r3, r4, r5, pc}
 *   02050e3e: 0000 movs   r0, r0           ; 2-byte pad
 *
 * MODE - Thumb. 2-byte stride, 32-bit bl pairs (fb82f05a / f80af000 /
 * f831f000), b538 push {r3,r4,r5,lr}, bd38 pop. No marker line.
 *
 * SEMANTICS FROM THE BYTES: a three-step build. Allocate 284 bytes (71 * 4 -
 * the movs/lsls pair is MWCC's lowering of a small constant times four, so the
 * original wrote a count of 71 times a 4-byte element), then a constructor
 * that takes the fresh pointer and RETURNS it (FUN_0204a028's own body ends
 * `add r0,r4,#0; pop {r4,pc}` - it returns its argument), then a two-argument
 * apply that takes the object and arg0 (FUN_0204a084's own body immediately
 * does `add r5,r1,#0; add r4,r0,#0`, confirming arity 2 and the r0/r1 order).
 * The object pointer is returned on all paths.
 *
 * NOTE the constructor call site: it is `bl` immediately after `adds r4,r0,#0`
 * with NO `adds r0,r4,#0` in between, because r0 still holds the pointer. That
 * is why the two branches merge through r4 but the ctor takes r0 raw.
 *
 * CALLEE ARITY was read from the callees' own bodies, not from Ghidra's
 * decompile: FUN_020ba894 (`push{..}; add r5,r0,#0; blx ..`) is a 1-argument
 * allocator wrapper, FUN_0204a028 is 1-arg, FUN_0204a084 is 2-arg.
 *
 * The 0x47 constant: `movs r0,#0x47; lsls r0,r0,#2` is the register form of
 * 0x11c. Spelled below as `71 * 4` because that is the shape MWCC lowers to
 * that exact pair.
 *
 * Recorded 0x28 vs true body: instructions end at 0x02050e3e after the bd38,
 * then a 2-byte pad (0000). 0x26 + pad 0x2 = recorded 0x28. Match at 0x28.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_020ba894(u32 size);
extern u32 FUN_0204a028(u32 p);
extern void FUN_0204a084(u32 obj, u32 arg);

u32 FUN_0204a000(u32 arg)
{
    u32 obj;

    obj = FUN_020ba894(71 * 4);
    if (obj != 0) {
        obj = FUN_0204a028(obj);
    }
    if (obj != 0) {
        FUN_0204a084(obj, arg);
    }
    return obj;
}
