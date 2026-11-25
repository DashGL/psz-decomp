// FUN_02066a94 @ 0x02066a94 (0x28, arm) - ported from FUN_0202d094 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02066a94 @ 0x0202d094 (0x28 = 10 ARM words, ARM) — CPSR
 * interrupt-masked field write: set [arg0+0x64] = 1 with interrupts off.
 *
 * Bytes (10 words):
 *   0202d094: 38 40 2d e9   stmdb sp!, {r3, r4, r5, lr}
 *   0202d098: 00 50 a0 e1   mov   r5, r0
 *   0202d09c: d7 06 00 eb   bl    0x0202ec00
 *   0202d0a0: 01 10 a0 e3   mov   r1, #0x1
 * * 0202d0a4: 00 40 a0 e1   mov   r4, r0
 *   0202d0a8: 64 10 85 e5   str   r1, [r5, #0x64]
 *   0202d0ac: c2 fe ff eb   bl    0x0202cbbc
 *   0202d0b0: 04 00 a0 e1   mov   r0, r4
 *   0202d0b4: d6 06 00 eb   bl    0x0202ec14
 *   0202d0b8: 38 80 bd e8   ldmia sp!, {r3, r4, r5, pc}
 *
 * Semantics re-derived from the target bytes: the canonical
 * save-flags / disable / work / restore sandwich, with a field write as the
 * work.
 *  - 0x0202ec00 is `mrs r0,apsr / orr r1,r0,#0x80 / msr cpsr_c,r1 /
 *    and r0,r0,#0x80 / bx lr`: read the flags, force the I bit (0x80) on,
 *    return the PREVIOUS value of that same bit (0 or 0x80).
 *  - 0x0202ec14 mirrors it: `mrs r1,apsr / bic r2,r1,#0x80 / orr r2,r2,r0 /
 *    msr cpsr_c,r2` — restore the I bit from its argument.
 *  - the saved bit is parked in r4 (callee-saved, hence r4 in the push list)
 *    because the middle call clobbers r0. arg0 is separately parked in r5,
 *    because the middle call also clobbers it.
 *  - the WORK is `mov r1,#1 ; str r1,[r5,#0x64]` — a single u32 store of
 *    the literal 1 at offset 0x64. Note r1 is loaded with 1 rather than r0,
 *    which is what MWCC emits when the stored value is a fresh constant and
 *    r0 is live holding the saved flags.
 *
 * CALLEE ARITY (rule C8, from the callees' OWN bodies): 0x0202cbbc opens
 * `push {r4,r5,r6,lr} / ldr r0,[pc,#0xb4]` — it OVERWRITES r0 before any
 * use, so it consumes no argument register and must be declared 0-arg; the
 * absence of a `mov r0,#0` before its `bl` is exactly that. 0x0202ec14
 * consumes r0 (the `orr r2,r2,r0`). 0x0202ec00 returns u32.
 *
 * GAME logic, not CRT: the masked work is a plain store to a caller-owned
 * object at +0x64; the library bits are only the save/restore wrapper. This
 * is the same idiom as banked FUN_0202d0e4 with a field write added.
 *
 * 0x28 = exactly the ten words above; the next word at 0x0202d0bc is
 * `ldr r0,[pc,#0x1c] / ldr r0,[r0,#0x24]` — a fresh body with no prologue
 * because it is a leaf that starts on a pool load, so the recorded span is
 * the TRUE size.
 */
typedef unsigned int u32;

extern u32 FUN_020683d4(void);
extern void FUN_020664d8(void);
extern u32 FUN_020683e8(u32 saved);

void FUN_02066a94(u32 p)
{
    u32 saved = FUN_020683d4();

    *(u32 *)(p + 0x64) = 1;
    FUN_020664d8();
    FUN_020683e8(saved);
}
