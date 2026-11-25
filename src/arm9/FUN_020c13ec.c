// FUN_020c13ec @ 0x020c13ec (0x1e, thumb) - ported from FUN_020ab454 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x20, but the real body is 0x1e -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x1e.
 */
/* FUN_020c13ec @ 0x020ab454 (true 0x1e, recorded 0x20 incl. 2-byte pad, THUMB)
 * — live game-logic guarded update: run FUN_020121dc under a saved-flag
 * window, but only when the second argument is non-zero.
 *
 * Bytes (Thumb, stride 2):
 *   020ab454: 70b5     push {r4, r5, r6, lr}
 *   020ab456: 051c     adds  r5, r0, #0       ; r5 = arg0
 *   020ab458: 0c1c     adds  r4, r1, #0       ; r4 = arg1, SETS FLAGS
 *   020ab45a: 09d0     beq   0x20c1408       ; if (arg1 == 0) return
 *   020ab45c: 83f7d0eb blx  0x0202ec00        ; read APSR carry -> r6
 *   020ab460: 061c     adds  r6, r0, #0
 *   020ab462: a868     ldr   r0, [r5, #8]     ; r0 = arg0->field_08
 *   020ab464: 211c     adds  r1, r4, #0       ; r1 = arg1
 *   020ab466: 6bf75aec blx  0x02016d1c
 *   020ab46a: 301c     adds  r0, r6, #0
 *   020ab46c: 83f7d2eb blx  0x0202ec14        ; write APSR carry back
 *   020c1408: 70bd     pop  {r4, r5, r6, pc}
 *   020ab472: 0000     (inter-function pad)
 *
 * C3 NOTE: `adds r4, r1, #0` is the FLAG-SETTING copy (Ghidra would print
 * `add r4, r1, #0`); the `beq` immediately consumes exactly those flags, so
 * the source really is `if (arg1 == 0) return;` and NOT a separate compare.
 * That flag reuse is also why arg1 lives in r4 (it must survive the call)
 * yet is still tested by the copy's own flags.
 *
 * The save/restore pair is the CPSR flag window:
 *   FUN_020683d4 ARM body = `mrs r0,apsr; orr r1,r0,#0x80; msr cpsr_c,r1;
 *   and r0,r0,#0x80; bx lr`  -> 0 args, returns the C flag.
 *   FUN_020683e8 ARM body = `mrs r1,apsr; bic r2,r1,#0x80; orr r2,r2,r0;
 *   msr cpsr_c,r2; ...`      -> 1 arg, restores it.
 * FUN_020121dc ARM body does `sub r4, r1, #0x10; mov r5, r0` -> 2 live args.
 *
 * ARITY CROSS-CHECK (requested): this function was CALLED BY a banked caller
 * that derived 2 live args from its body. CONFIRMED 2 live args — r0 is read
 * at [r5,#8] and r1 is both tested and passed on. No mismatch.
 *
 * C2 SIZE: MATCHES AT 0x1e, NOT at the recorded 0x20 — the recorded span
 * includes the 2-byte inter-function pad halfword at 0x020ab472. The body is
 * 0x1e (final `pop {r4, r5, r6, pc}` at 0x20c1408).
 */
typedef unsigned int u32;

extern u32 FUN_020683d4(void);
extern void FUN_020121dc(u32, u32);
extern void FUN_020683e8(u32);

void FUN_020c13ec(u32 *self, u32 v)
{
    u32 flags;

    if (v == 0) {
        return;
    }
    flags = FUN_020683d4();
    FUN_020121dc(self[2], v);
    FUN_020683e8(flags);
}
