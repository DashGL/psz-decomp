// FUN_0209ef80 @ 0x0209ef80 (0x26, thumb) - ported from FUN_02040450 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x28, but the real body is 0x26 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x26.
 */
/* FUN_0209ef80 @ 0x02040450 (true body 0x26 of a recorded 0x28, THUMB) -
 * live game-logic slot validator: index the unit table, range-check the index,
 * then report whether the s16 at that slot is positive.
 *
 * Bytes: 10 b5 04 1c 00 f0 10 f8 00 28 0a db 48 28 08 da 21 6b 40 00
 *       08 5e 00 28 01 dd 01 20 10 bd 00 20 10 bd 00 20 10 bd 00 00
 *   02040450: 10b5     push  {r4, lr}
 *   02040452: 041c     adds  r4, r0, #0        ; r4 = self
 *   02040454: f8f010f8 bl    0209efa8          ; idx = FUN_0209efa8(self, arg1)
 *   02040458: 0028     cmp   r0, #0
 *   0204045a: 0adb     blt   0209efa2          ; idx < 0   -> the SHARED exit
 *   0204045c: 4828     cmp   r0, #0x48
 *   0204045e: 08da     bge   0209efa2          ; idx >= 72 -> the SAME exit
 *   02040460: 216b     ldr   r1, [r4, #0x30]   ; r1 = self->table_30
 *   02040462: 4000     lsls  r0, r0, #1        ; byte offset = idx * 2
 *   02040464: 085e     ldrsh r0, [r1, r0]      ; signed load
 *   02040466: 0028     cmp   r0, #0
 *   02040468: 01dd     ble   0209ef9e          ; <= 0 -> the NEAR exit
 *   0204046a: 0120     movs  r0, #1
 *   0204046c: 10bd     pop   {r4, pc}          ; return 1
 *   0209ef9e: 0020     movs  r0, #0            ; NEAR exit (in-range, not > 0)
 *   02040470: 10bd     pop   {r4, pc}
 *   0209efa2: 0020     movs  r0, #0            ; SHARED exit (out of range)
 *   02040474: 10bd     pop   {r4, pc}
 *   02040476: 0000     movs  r0, r0            ; 2-byte inter-function pad
 *
 * MODE - THUMB by stride, NOT by the 4-aligned recorded size: every body
 * instruction is 16-bit, the `bl` is a Thumb-2 f8f0 pair, and the terminator
 * is 10bd. No marker.
 *
 * TRUE SIZE 0x26, recorded 0x28. The last two bytes are the `0000` halfword
 * align pad; the next function FUN_0209efa8 begins at 0x02040478, so the
 * recorded span over-runs by that 2-byte pad. Match at 0x26.
 *
 * SEMANTICS FROM THE BYTES: both range tests share ONE exit block while the
 * value test gets its own, so the nesting is `if (in range) { return v > 0 }
 * return 0` and not three sibling `return 0` statements - three siblings would
 * need three separate tail blocks. The signed load (ldrh/ldrsh pair 0x5e) means
 * the table is s16, so a negative entry correctly reports 0.
 *
 * FUN_0209efa8's own body is `adds r4,r1,#0; ldrsh r1,[r4,r1]; ...` - it reads
 * its SECOND argument as an array, so this call is genuinely two-argument and
 * arg1 is passed through live (r1 is untouched across the call here).
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef short s16;
typedef int s32;

extern u32 FUN_0209efa8(u32 self, u32 tab);

u32 FUN_0209ef80(u8 *self, u32 tab)
{
    u32 idx;
    idx = FUN_0209efa8((u32)self, tab);
    if ((s32)idx >= 0 && (s32)idx < 0x48) {
        if (*(s16 *)(*(u32 *)(self + 0x30) + idx * 2) > 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
