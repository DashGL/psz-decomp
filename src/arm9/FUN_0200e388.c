// FUN_0200e388 @ 0x0200e388 (0x30, arm) - ported from FUN_020289b8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200e388 @ 0x020289b8 (TRUE SIZE 0x30, recorded 0x2c, ARM) - live game leaf.
 * "set bit `idx` of a shift-mapped bitfield; out of range is a no-op that
 * returns the object unchanged".
 *
 * Bytes: 08 40 2d e9 50 30 90 e5 01 30 43 e2 03 00 51 e1 08 72 bd c8
 *       01 00 72 e0 54 00 d0 e5 01 30 a0 e3 02 10 a0 e1 13 00 a0 e1
 *       e9 1f 00 eb 08 72 bd e8
 *   020289b8: e92d4008 push  {r3, lr}
 *   020289bc: e5903050 ldr   r3, [r0, #0x48] ; r3 = self->f50 (count)
 *   020289c0: e2433001 sub   r3, r3, #1      ; r3 = count - 1
 *   020289c4: e1510003 cmp   r1, r3
 *   020289c8: c8bd8008 popgt {r3, pc}        ; idx > count-1 -> return self (r0 intact)
 *   020289cc: e0800001 add   r0, r0, r1      ; r0 = self + idx
 *   020289d0: e5d00054 ldrb  r0, [r0, #0x4c] ; r0 = self->f54[idx]  (u8, +0x4c folded)
 *   020289d4: e3a03001 mov   r3, #1
 *   020289d8: e1a01002 mov   r1, r2          ; r1 = our 3rd parameter
 *   020289dc: e1a00  ... lsl r0, r3, r0      ; r0 = 1 << shift
 *   020289e0: eb001fe9 bl    0x0203098c      ; FUN_02069784(1 << shift, val)
 *   020289e4: e8bd8008 pop   {r3, pc}
 *
 * MODE - ARM. Stride 4, `e92d4008` push, `eb......` bl.
 *
 * RECORDED-vs-TRUE SIZE: the recorded 0x2c stops at 0x020289e4, which is where
 * the final `pop {r3, pc}` BEGINS. The real body is 0x30 (12 instructions).
 * Matching at 0x2c would truncate the terminator (C2).
 *
 * SEMANTICS FROM THE BYTES: `sub r3,r3,#1` then `cmp r1,r3` with `popgt` is a
 * SIGNED `idx > count - 1` guard - `gt`, not `hi`, so both the count and idx
 * are signed. The early return leaves r0 = the incoming `self`, so the
 * function's return type is a POINTER and the out-of-range path is literally
 * `return self;`.
 *
 * f54 is a u8 SHIFT TABLE (a byte array at +0x4c, indexed by idx, base offset
 * folded into the ldrb immediate) - not a bitmask. The value read becomes the
 * shift amount of a `1 <<`, materialised with `mov r3,#1` + register-shift
 * because the amount is a runtime byte.
 *
 * FUN_02069784 is ARM too: `push {r3,lr}; mov r2,r1; mov r3,#0; mov r1,r0;
 * mov r0,#0x15; str r3,[sp]; bl 0x02030b10; pop` - two register args plus one
 * stack arg, forwarding to 0x02030b10 (C8).
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

/* f54 is a byte ARRAY member at +0x4c, not a base+index expression. The target
 * computes `add r0, r0, r1` (self + idx) and then `ldrb r0, [r0, #0x4c]`,
 * i.e. the field offset stays an ldrb immediate. Spelling the read as
 * `self[idx + 0x4c]` makes MWCC fold the 0x4c into the INDEX instead
 * (`add r1, r1, #0x4c` / `ldrb r0, [r0, r1]`) - that was the 2-word residual. */
typedef struct Obj {
    u8 pad[0x4c];
    u8 f54[1];
} Obj;

extern u8 *FUN_02069784(u32 mask, s32 val);
u8 *FUN_0200e388(u8 *self, s32 idx, s32 val)
{
    if (idx > *(s32 *)(self + 0x48) - 1) {
        return self;
    }
    return FUN_02069784(1 << ((Obj *)self)->f54[idx], val);
}
