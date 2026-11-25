// FUN_020698c0 @ 0x020698c0 (0x28, arm) - ported from FUN_02030ac8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_020698c0 - Mode-7 arg-shuffle call (ARM, recorded size 0x28). FUN_020698e8(7, a0 | (a4 << 24), a1, a2, a3) — the fifth arg rides as the orr-shifted high byte.
 *
 * verified: FUN_020698c0 @ 0x02030ac8 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_020698e8(u32 mode, u32 r1, u32 r2, u32 r3, u32 r4);

void FUN_020698c0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4)
{
    FUN_020698e8(7, a0 | (a4 << 24), a1, a2, a3);
}
