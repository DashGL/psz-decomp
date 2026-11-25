// FUN_0209a39c @ 0x0209a39c (0x18, thumb) - ported from FUN_02072bac [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_0209a39c @ 0x02072bac, Thumb, true size 0x18 (recorded 0x18).
 * Byte-flag setter: if idx < 4, p->0xcc |= 1 << idx.
 * Three spellings are load-bearing (v1 ldrb variant ndiff=4):
 *  - the byte read is SIGNED (target ldrsb) -> the +0xcc byte is a
 *    signed char member; read it as *(s8 *)((u8 *)p + 0xcc) at BOTH
 *    sites so MWCC splits the constant offset across registers
 *    (movs r2,#0xcc / ldrsb r3,[r0,r2]; the u8 spelling merges it);
 *  - the mask is an s8-typed intermediate -> lsl#18/asr#18 normalize;
 *  - orrs r1,r3 = mask FIRST (m = (s32)(s8)(1 << idx)) then orr.
 * MATCHED: dsi/1.1 (family-neutral 19/24: all dsi + all 2.0; 1.2 emits
 * a 2-word delta). Found via the scan-0921 queue.
 */
typedef unsigned char u8;
typedef int s32;
typedef signed char s8;
struct B { u8 pad[0xcc]; s8 flags; };

void FUN_0209a39c(struct B *p, s32 idx) {
    s32 m;
    if (idx < 4) {
        m = (s32)(s8)(1 << idx);
        *(s8 *)((u8 *)p + 0xcc) = *(s8 *)((u8 *)p + 0xcc) | m;
    }
}
