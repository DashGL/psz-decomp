// FUN_02069f68 @ 0x02069f68 (0x24, arm) - ported from FUN_02031190 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02069f68 @ 0x02031190 (true 0x24, recorded 0x24, ARM) — live game-logic
 * flag-window wrapper: run FUN_0206a11c on the second argument with the CPSR
 * carry flag saved and restored around it.
 *
 * C1 mode proof: stride 4 and every word carries condition 0b1110; the
 * prologue is `e92d4050` (`push {r3, r4, r5, lr}`) and the epilogue
 * `e88d8038` (`pop {r3, r4, r5, pc}`) — ARM, not Thumb, despite the
 * 4-aligned span.
 *
 * Bytes (ARM):
 *   02031190: e92d4050 push  {r3, r4, r5, lr}
 *   02031194: e1a05001 mov   r5, r1          ; r5 = arg1
 *   02031198: ebffff98 bl    0x0202ec00      ; read APSR carry
 *   0203119c: e1a04000 mov   r4, r0          ; r4 = saved flags
 *   020311a0: e1a00005 mov   r0, r5
 *   020311a4: eb000066 bl    0x02031344
 *   020311a8: e1a00004 mov   r0, r4
 *   020311ac: ebffff98 bl    0x0202ec14      ; restore APSR carry
 *   020311b0: e88d8038 pop   {r3, r4, r5, pc}
 *
 * r0 (arg0) is never read — the first parameter exists but is unused, which is
 * why the live argument sits in r1. Recorded 0x24 == true 0x24 (the next entry,
 * 0x020311b4, opens `e92d4070`).
 *
 * Callee arity from each callee's OWN body:
 *   FUN_020683d4 — ARM, `mrs r0,apsr ... and r0,r0,#0x80; bx lr`: 0 args.
 *   FUN_0206a11c — ARM, `and r2, r0, #0xff` then scales r0: 1 live arg.
 *   FUN_020683e8 — ARM, `orr r2, r2, r0` from r0: 1 live arg.
 */
typedef unsigned int u32;

extern u32 FUN_020683d4(void);
extern void FUN_0206a11c(u32);
extern void FUN_020683e8(u32);

void FUN_02069f68(void *self, u32 v)
{
    u32 flags;

    flags = FUN_020683d4();
    FUN_0206a11c(v);
    FUN_020683e8(flags);
}
