// FUN_02035408 @ 0x02035408 (0x8, thumb) - ported from FUN_02040608 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_02035408 @ 0x02040608, Thumb, true size 0x8 (recorded 0x8).
 * 3-word setter: p[0..2] = a,b,c (args arrive in r1/r2/r3, straight
 * stores, no prologue). Ghidra's 4-arg signature confirms r3 use.
 * Called by banked FUN_0204f5a4.
 * MATCHED: first draft, FULLY family-neutral — ALL 24 builds.
 * Reloc-free. Found via the fresh shortlist (census-to-bank).
 */
typedef unsigned int u32;

void FUN_02035408(u32 *p, u32 a, u32 b, u32 c) {
    p[0] = a;
    p[1] = b;
    p[2] = c;
}
