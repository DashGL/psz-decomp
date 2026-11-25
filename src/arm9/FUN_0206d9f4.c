// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0206d9f4 @ 0x0206d9f4 (0x10, thumb) - ported from FUN_02057784 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0206d9f4 - Sink dispatch via global ctx (Thumb, recorded size 0x10). FUN_0207816c(*FUN_020780f4(), a1).
 *
 * verified: FUN_0206d9f4 @ 0x02057784 - mwcc-strict 1.1/dsi, arm946e, -O4,p -interworking -thumb; byte match vs extracted/arm9.bin
 */
extern int FUN_020780f4(void);
typedef unsigned int u32;
extern unsigned int FUN_0207816c(int *ctx, u32 a1);

unsigned int FUN_0206d9f4(u32 a0, u32 a1)
{
    return FUN_0207816c((int *)FUN_020780f4(), a1);
}
