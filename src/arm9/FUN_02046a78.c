// FUN_02046a78 @ 0x02046a78 (0x2c, thumb) - ported from FUN_02070ef8 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02046a78 @ 0x02070ef8, recorded 0x2c, THUMB. No literal pool.
 *
 * Semantics read off the bytes:
 *   r5 = arg0  (obj)                     (adds r5, r0, #0)
 *   r4 = arg2                            (adds r4, r2, #0)
 *   r6 = obj->[0x18]   (saved)           (ldr r6,[r5,#0x18])
 *   r7 = FUN_020469dc(obj, arg1)         (bl / adds r7,r0,#0)
 *   if (r7 != 0) obj->[0x04] |= 8;      (beq / ldr r1,[r5,#4] / movs r0,#8 /
 *                                        orrs r0,r1 / str r0,[r5,#4])
 *   if (arg2 == 0) obj->[0x20] = saved;  (cmp r4,#0 / beq / str r6,[r5,#0x20])
 *   else FUN_02046aa4(obj, arg2);        (adds r0,r5,#0 / adds r1,r4,#0 / bl)
 *   return r7;                           (adds r0,r7,#0)
 *
 * ADDS-TEST FUSION: the beq straight after `adds r7, r0, #0` consumes the
 * flags of the call result's own copy, so the result must stay in its own
 * statement (an `if ((r = call()))` spelling re-fuses to a cmp).
 * ARM ORDER IS LOAD-BEARING: the `b != 0` (CALL) arm must be written FIRST.
 * The store-first spelling `if (b == 0) {store} else {call}` emits the same
 * size and the same mnemonics but a SIGN test (`ands r3,r3,#0x80000000`)
 * where the target has `beq`, costing 3 words. See REPORT.md.
 * Byte-arithmetic offsets, per repo convention.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 FUN_020469dc(void *obj, u32 a);
extern void FUN_02046aa4(void *obj, u32 b);

u32 FUN_02046a78(void *obj, u32 a, u32 b) {
    u32 saved = *(u32 *)((u8 *)obj + 0x18);
    u32 res = FUN_020469dc(obj, a);
    if (res != 0) {
        *(u32 *)((u8 *)obj + 4) |= 8;
    }
    if (b != 0) {
        FUN_02046aa4(obj, b);
    } else {
        *(u32 *)((u8 *)obj + 0x20) = saved;
    }
    return res;
}
