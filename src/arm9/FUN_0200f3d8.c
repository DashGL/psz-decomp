// FUN_0200f3d8 @ 0x0200f3d8 (0x2c, arm) - ported from FUN_02029a68 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200f3d8 @ 0x02029a68 (0x2c, ARM), verified 2.0/base. */
/* FUN_0200f3d8 - ARM. Recorded 0x2c; true body 0x2c (exact).
 *
 * 02029a68  e92d4008  push {r3, lr}
 * 02029a6c  e1a02001  mov  r2, r1          ; r2 = arg1 (2nd param)
 * 02029a70  e3a0c000  mov  ip, #0
 * 02029a74  e3a010ff  mov  r1, #0xff       ; 2nd arg = 255
 * 02029a78  e3a03001  mov  r3, #1          ; 4th arg = 1
 * 02029a7c  e58dc000  str  ip, [sp]        ; 5th arg = 0 (stack slot)
 * 02029a80  eb00004f  bl   0x02029bc4
 * 02029a84  e3500000  cmp  r0, #0
 * 02029a88  03000001  moveq r0, #1
 * 02029a8c  13000000  movne r0, #0
 * 02029a90  e8bd8008  pop  {r3, pc}
 *
 * Sibling FUN_02029a94 is byte-identical except the callee is 0x02029ca8.
 * Its return handling (cmp/moveq/movne) is the same shape, so the boolean
 * is written as `== 0` on the callee result: the target yields 1 when the
 * callee returned 0.  Written `== 0` because that is what produces the
 * moveq-then-movne pair (the E3 double-test shape) rather than a
 * single `cmn`-folded `!= 0`.
 *
 * Callee FUN_0200f534 arity read from its OWN body (C8): it pushes
 * {r3,r4,r5,r6,r7,lr} and reads r1/r2/r3 plus a stack slot at +0
 * (`str r0,[sp]` before `bl 0x02029ca8`), i.e. 4 register args + 1
 * stack arg -> five parameters.  The 5th here is the literal 0.
 */
typedef unsigned int u32;

extern u32 FUN_0200f534(u32 a, u32 b, u32 c, u32 d, u32 e);

u32 FUN_0200f3d8(u32 a, u32 b)
{
    return FUN_0200f534(a, 0xff, b, 1, 0) == 0;
}
