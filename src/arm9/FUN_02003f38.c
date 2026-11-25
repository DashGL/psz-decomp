// FUN_02003f38 @ 0x02003f38 (0x34, arm) - ported from FUN_02039654 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02003f38 @ 0x02039654 (recorded 0x34, true 0x34, ARM)
 *
 * C1 mode proof: stride 4, both exits e12fff1e (bx lr) in ARM form. ARM.
 * 0x34 = 13 words exactly; the next symbol is not adjacent so there is no
 * pool or pad question.
 *
 * Bytes (ARM):
 *   02039654: e3520000 cmp   r2,#0
 *   02039658: 0a000008 beq   0x2003f64
 *   02003f40: e1c010cd ldrb  ip,[r1],#1
 *   02039660: e4d03001 ldrb  r3,[r0],#1
 *   02039664: e153000c cmp   r3,ip
 *   02039668: e16c0003 subne r0,r3,ip
 *   0203966c: 1eff2f11 bxne  lr
 *   02039670: e3530000 cmp   r3,#0
 *   02039674: 0a000002 beq   0x2003f64
 *   02039678: e2522001 subs  r2,r2,#1
 *   0203967c: 1afffff6 bne   0x2003f40
 *   02003f64: e3a00000 mov   r0,#0
 *   02039684: e12fff1e bx    lr
 *
 * Semantics from the bytes: a BOUNDED STRING COMPARE, r0 = first string,
 * r1 = second string, r2 = maximum length. Walk both byte cursors with
 * post-increment; on the first differing byte return (u8)a[i] - (u8)b[i]
 * (r0 is reused as the difference because the cursor is already advanced);
 * if the bytes match AND the byte was NUL, both strings ended, so return 0;
 * otherwise consume one of the budget and repeat. Exhausting the budget
 * also returns 0.
 *
 * Loop form, read off the bytes rather than guessed: the entry test at
 * 0x02039654 guards once and exits to the SHARED return-0 tail, while the
 * back edge at 0x203967c targets the BODY (0x2003f40), not the test. That
 * is the rotated-by-break shape (break at the head, bottom test), not a
 * plain while loop - a plain while emits its own test on the back edge.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

s32 FUN_02003f38(u8 *a, u8 *b, u32 n)
{
    if (n != 0) {
        do {
            u32 x;
            u32 y;

            y = *b++;
            x = *a++;
            if (x != y) {
                return (s32)(x - y);
            }
            if (x == 0) {
                break;
            }
            n--;
        } while (n != 0);
    }
    return 0;
}
