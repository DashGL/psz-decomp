// FUN_02033dec @ 0x02033dec (0x20, thumb) - ported from FUN_020a5070 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_02033dec - forward two fields of a looked-up record (Thumb).
 * Recorded size 0x20; true body 0x20 (next prologue exactly at 0x020a5090).
 *
 * 020a5070  10b5       push {r4, lr}
 * 020a5072  0c1c       adds r4, r1, #0     ; keep arg1
 * 020a5074  111c       adds r1, r2, #0     ; arg2 -> 2nd callee arg
 * 020a5076  fff767ff   bl   0x020a4f48      ; rec = FUN_02033cbc(arg0, arg2)
 * 020a507a  021c       adds r2, r0, #0
 * 020a507c  002c       cmp  r4, #0
 * 020a507e  06d0       beq  0x2033e0a
 * 020a5080  002a       cmp  r2, #0
 * 020a5082  04d0       beq  0x2033e0a
 * 020a5084  917c       ldrb r1, [r2, #0x12]
 * 020a5086  d268       ldr  r2, [r2, #0xc]
 * 020a5088  201c       adds r0, r4, #0
 * 020a508a  cbf72bf9   bl   0x020702e4
 * 02033e0a  10bd       pop  {r4, pc}
 *
 * Reads from the bytes: void fn(void *a, void *b, void *c) {
 *     void *rec = FUN_02033cbc(a, c);
 *     if (b != 0 && rec != 0) {
 *         FUN_020422fc(b, *(u32 *)((u8 *)rec + 0xc), *(u8 *)((u8 *)rec + 0x12));
 *     }
 * }
 * Note the third argument is passed in r1 but the WORD field is loaded
 * second, so the call argument order is (b, word@0xc, u8@0x12) - the
 * scheduler hoisted the narrow load. Both null tests are separate `cmp`s,
 * so the guard is two `if`s, not one `&&`.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void *FUN_02033cbc(void *key, void *sel);
extern void FUN_020422fc(void *dst, u32 tag, u32 word);

void FUN_02033dec(void *a, void *b, void *c)
{
    u8 *rec = FUN_02033cbc(a, c);

    if (b != 0) {
        if (rec != 0) {
            FUN_020422fc(b, *(u8 *)(rec + 0x12), *(u32 *)(rec + 0xc));
        }
    }
}
