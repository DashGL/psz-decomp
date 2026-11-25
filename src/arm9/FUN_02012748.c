// FUN_02012748 @ 0x02012748 (0x28, arm) - ported from FUN_02017288 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02012748 @ 0x02017288 (0x28 = 10 ARM words, ARM) — two-argument
 * existence check then flag write, returning 0/1.
 *
 * Bytes (10 words):
 *   02017288: 10 40 2d e9   stmdb sp!, {r4, lr}
 *   0201728c: 00 40 a0 e1   mov   r4, r0
 *   02017290: 7c d5 ff eb   bl    0x0200c888
 *   02017294: 00 00 50 e3   cmp   r0, #0
 *   02017298: 00 00 a0 03   moveq r0, #0
 *   0201729c: 10 80 bd 08   popeq {r4, pc}
 *   020172a0: 04 00 a0 e1   mov   r0, r4
 *   020172a4: e0 cb ff eb   bl    0x0200a22c
 *   020172a8: 01 00 a0 e3   mov   r0, #1
 *   020172ac: 10 80 bd e8   ldmia sp!, {r4, pc}
 *
 * Semantics re-derived from the target bytes:
 *  - arg0 is parked in r4 (hence {r4,lr}) because the first call clobbers
 *    r0 and the second call needs arg0 again.
 *  - r0 is passed UNCHANGED into the first call, so the callee takes arg0
 *    as-is from the incoming register (r0), not from r4.
 *  - the first call's result is tested; if it is 0 the function returns 0
 *    through a SINGLE merged exit (`moveq r0,#0 ; popeq {r4,pc}` — the
 *    conditional pop, not a branch). So the source is
 *    `if (!helper(arg0)) return 0;` with the zero already in r0.
 *  - otherwise arg0 is reloaded and passed to the second callee, and 1 is
 *    returned. So the two calls take arg0, and the value 1 is the success
 *    return.
 *
 * CALL DIRECTION (rule C8): 0x0200c888 is NOT one of this wave's targets —
 * it is a two-word import THUNK (`ldr ip,[pc] / bx ip` with pool word
 * 0x0200a32c), so it is not a candidate and not CRT. 0x0200a32c itself
 * opens `push {r4,r5,r6,r7,r8,lr} / mov r5,r0` and tests `[r0+0x14] & 2`,
 * so it takes ONE argument. 0x0200a22c opens `push {r4,lr} / mov r4,r0` and
 * compares r4 against a global, so it also takes ONE argument. Both
 * arities agree with the call sites, which set nothing but r0.
 *
 * Not CRT: no loop, no fill/compare shape, no library symbol; the bodies
 * walk a caller-supplied object's field list and dispatch.
 *
 * 0x28 = exactly the ten words above; the next word at 0x020172b0 is a
 * fresh `push {r3,r4,r5,lr} / sub sp,sp,#0x48` prologue, so the recorded
 * span is the TRUE size.
 */
extern int FUN_0205988c(int a);
extern void FUN_02059798(int a);

int FUN_02012748(int a)
{
    if (!FUN_0205988c(a)) {
        return 0;
    }
    FUN_02059798(a);
    return 1;
}
