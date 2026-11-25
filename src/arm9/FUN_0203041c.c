// FUN_0203041c @ 0x0203041c (0x16, thumb) - ported from FUN_02071918 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x18, but the real body is 0x16 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x16.
 */
/* FUN_0203041c @ 0x02071918 (0x18 recorded / 0x16 body, THUMB) — a two-stage
 * teardown on an object: if the sub-object hanging off +0x10 is non-null,
 * hand THAT POINTER to FUN_0204492c, then unconditionally hand the object
 * itself to FUN_020349e0.
 *
 * Bytes: 10 b5 04 1c 20 69 00 28 01 d0 01 f0 77 fa 20 1c 01 f0 5e fd 10 bd
 *       00 00
 *   02071918: 10b5     push  {r4, lr}
 *   0207191a: 041c     adds  r4, r0, #0        ; r4 = arg0 (callee-saved copy)
 *   0207191c: 2069     ldr   r0, [r4, #0x10]   ; r0 = obj->sub_10
 *   0207191e: 0028     cmp   r0, #0
 *   02071920: 01d0     beq   0203042a          ; null sub -> skip stage 1
 *   02071922: 01f077fa bl    0204492c          ; stage 1, arg0 = the sub-object
 *   0203042a: 201c     adds  r0, r4, #0        ; r0 = arg0 again
 *   02071928: 01f05efd bl    020349e0          ; stage 2, arg0 = the object
 *   0207192c: 10bd     pop   {r4, pc}
 *   0207192e: 0000     movs  r0, r0           ; inter-function pad, not body
 *
 * MODE — THUMB. The 4-aligned 0x18 recorded size does NOT imply ARM; first
 * halfword 0xb510 is Thumb `push {r4,lr}`, and both calls are Thumb-2 BLX at
 * 2-mod-4 sites. NO marker line — this file must compile Thumb.
 *
 * THE POINTER IS PASSED ON, NOT ITS TARGET. The load at +0x04 produces the
 * value that is BOTH tested and passed as arg0 to stage 1 — the register is
 * live across the compare into the call, so stage 1 receives `obj->sub_10`
 * itself, a DOUBLE indirection through the object, not `*obj->sub_10`.
 * Reading the field twice (once for the test, once as the argument) folds the
 * two loads into one and loses the target's single `ldr`.
 *
 * Both stages are spelled on the SAME named parameter `self`, and no copy
 * local is introduced. r4 exists because arg0 must survive the first call
 * and r0 is that call's argument register; the second stage's
 * `adds r0, r4, #0` is the saved value being reloaded. A copy local would
 * change which home the epilogue restores.
 *
 * Both callees are game logic, read off their own bodies: FUN_0204492c
 * clears the sub-object's +0x20 word to 0 and stores 0 to a computed global
 * byte before re-entering its own sub-chain; FUN_020349e0 allocates, then
 * conditionally dispatches on the result. Neither has a CRT/SDK signature.
 *
 * Body is 0x16 (11 halfwords) ending on `pop {r4,pc}`; the recorded span's
 * last halfword is the alignment pad.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

extern void FUN_0204492c(void *sub);
extern void FUN_020349e0(void *self);

void FUN_0203041c(void *self) {
    if (*(void **)((u8 *)self + 0x10) != 0) {
        FUN_0204492c(*(void **)((u8 *)self + 0x10));
    }
    FUN_020349e0(self);
}
