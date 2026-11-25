// FUN_020bc508 @ 0x020bc508 (0x14, thumb) - ported from FUN_020aa8b4 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_020bc508 — type-gated wrapper (Thumb, recorded size 0x14).
 * if (*(u32*)(p+4) != 2) return 0; return FUN_020127c0(p + 8, flag).
 * SIGNATURE: 2 args — Ghidra shows 1 because the body never reads the
 * 2nd, but BOTH callers pass r1 through live (cmp r1,#0xff; beq sentinel
 * check immediately before the BL) and the target's field load colors
 * r2 only when r1 is a reserved param home ([EXTERN-ARRAY-GLOBAL]
 * unused-arg corollary: unused args shift coloring).
 * First-try match after the 2-arg fix, 19/24 versions (dsi/1.1 + 2.0/*).
 * Found via the part-7 static shortlist (unmatched callees of banked code).
 */
typedef unsigned int u32;

extern u32 FUN_020127c0(u32 x, u32 flag);

u32 FUN_020bc508(u32 p, u32 flag) {
    if (*(u32 *)(p + 4) != 2) {
        return 0;
    }
    return FUN_020127c0(p + 8, flag);
}
