// FUN_0206960c @ 0x0206960c (0x1c, arm) - ported from FUN_02030814 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0206960c - Mode-9 wrapped call (ARM, recorded size 0x1c). FUN_020698c0(a0, a1, 9, a2, 1) — 1 pushed as the 5th arg slot; scheduling: a2→r3 moves first.
 *
 * verified: FUN_0206960c @ 0x02030814 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_020698c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4);

void FUN_0206960c(u32 a0, u32 a1, u32 a2, u32 a3)
{
    FUN_020698c0(a0, a1, 9, a2, 1);
}
