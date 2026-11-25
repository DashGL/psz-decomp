// FUN_02066ae4 @ 0x02066ae4 (0x1c, arm) - ported from FUN_0202d0e4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02066ae4 @ 0x0202d0e4 (0x1c = 7 ARM words, ARM)
 *
 * Bytes: 10 40 2d e9 | c4 06 00 eb | 00 40 a0 e1 | b1 fe ff eb |
 *        04 00 a0 e1 | c5 06 00 eb | 10 80 bd e8
 *   stmdb sp!,{r4,lr} ; bl 0x0202ec00 ; mov r4,r0 ; bl 0x0202cbbc ;
 *   mov r0,r4 ; bl 0x0202ec14 ; ldmia sp!,{r4,pc}
 *
 * ARM, verified from the encoding: 32-bit ARM prologue (e92d4010) and
 * epilogue (e8bd8010); 0x1c = 28 bytes = exactly 7 words, no literal pool.
 *
 * Semantics from the bytes: the canonical CPSR interrupt-flag save / disable /
 * work / restore sandwich.
 *  - 0x0202ec00 is `mrs r0,cpsr / orr r1,r0,#0x80 / msr cpsr_c,r1 /
 *    and r0,r0,#0x80 / bx lr`: read the flags, FORCE the I bit (0x80) on, and
 *    return the PREVIOUS value of that same bit (0 or 0x80).
 *  - 0x0202ec14 is the mirror: `mrs r1,cpsr / bic r2,r1,#0x80 / orr r2,r2,r0 /
 *    msr cpsr_c,r2 / and r0,r1,#0x80` - restore the I bit from its argument.
 *  - 0x0202cbbc is the work done with interrupts masked.
 *
 * The saved bit is parked in r4 (a callee-saved register, hence the r4 in the
 * push list) because the middle call clobbers r0.
 *
 * Callee arity read off the callees' OWN bodies: 0x0202cbbc opens
 * `stmdb sp!,{r4,r5,r6,lr} / ldr r0,[pool] ...` - it OVERWRITES r0 before any
 * use, so it consumes no argument register and the call must be declared
 * 0-arg; leaving r0 untouched is exactly what the bytes show (there is no
 * `mov r0,#0` before it). 0x0202ec14 consumes r0 (the `orr r2,r2,r0`).
 *
 * This is GAME logic, not CRT: 0x0202ec00/0x0202ec14 are the MSL CPSR
 * intrinsics, but the masked WORK is 0x0202cbbc, which walks the object's
 * vtable-ish list and invokes two indirect hooks - game dispatch, with the
 * library bits used only as the save/restore wrapper around it.
 */
typedef unsigned int u32;

extern u32 FUN_020683d4(void);
extern void FUN_020664d8(void);
extern u32 FUN_020683e8(u32 saved);

void FUN_02066ae4(void)
{
    u32 saved = FUN_020683d4();

    FUN_020664d8();
    FUN_020683e8(saved);
}
