// FUN_02015094 @ 0x02015094 (0x40, arm) - ported from FUN_0201a904 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02015094 @ 0x0201a904 (0x40, ARM) — bottom-tested scan over 4 records of
 * 6 BYTES each (three u16 fields); returns arg1 + i*6 (byte arithmetic) at the
 * first record with arg2 <= rec[0] && arg3 <= rec[1], else arg1 + 18.
 *
 * Parked from the interrupted wave-1009 worker w2 (scratch/w1009/w2/), whose
 * draft is preserved alongside as FUN_0201a904_d1.c. SEMANTICS CONFIRMED
 * against the target bytes; the byte-stride reading is proved by the target
 * itself: `movle r1,#6` + `mlale r0,ip,r1,r0` computes arg1 + i*6, and the
 * miss path `add r0,r0,#0x12` (=18 = 3*6) is the same arithmetic pre-folded.
 * w2's draft read the stride as 3 u16 units, which is why it came out 0x1c
 * bytes too long.
 *
 * STRUCTURE, read off the target bytes (not the Ghidra decompile):
 *   push {r3,lr}; mov lr,r0 (arg1 pinned in lr); mov ip,#0 (counter)
 *   loop: ldrh r3,[lr] ; cmp r1,r3 ; ldrhle r3,[lr,#2] ; cmple r2,r3 ;
 *         movle r1,#6 ; mlale r0,ip,r1,r0 ; pople {r3,pc}
 *   cont: add ip,ip,#1 ; cmp ip,#4 ; add lr,lr,#6 ; blt loop
 * The whole hit-arm is ONE fused compare/mul chain (ldrhle -> cmple -> movle ->
 * mlale) — there is no branch to a separate success block.
 *
 * RESIDUAL: best of 5 cells is ndiff=11 (recorded basis: near_audit fdiff
 * WORD basis, 11/16). The fused conditional-mule chain is the blocker: MWCC
 * will not fold `arg1 + i*6` into a conditional multiply-accumulate, so every
 * spelling splits the arm and grows the frame.
 *
 * NEXT LEVERS, in order: (a) declare the stride as a named `u32 stride = 6;`
 * so the mul operand is a variable rather than a literal and MWCC materializes
 * it into r1 the way the target's `movle r1,#6` does; (b) a ternary returning
 * `arg1 + i*6` under the single condition, to force one fused arm; (c) only if
 * both fail, revisit the banked caller FUN_0201adc8's proven prototype
 * (`u32 *FUN_02015094(u16 *, u32, u32)`) with stride 3 u16 and `arg1 + 9` —
 * that spelling is what w2 tried and it is the WORST of the five.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

u8 *FUN_02015094(u8 *arg1, int arg2, int arg3)
{
    int i;
    u8 *p;
    p = arg1;
    i = 0;
    do {
        if (arg2 <= *(u16 *)p && arg3 <= *(u16 *)(p + 2))
            return arg1 + i * 6;
        i++;
        p += 6;
    } while (i < 4);
    return arg1 + 18;
}
