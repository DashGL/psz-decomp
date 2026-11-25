// FUN_020c13c8 @ 0x020c13c8 (0x24, thumb) - ported from FUN_020ab430 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_020c13c8 - IRQ-locked list-edit (Thumb, recorded size 0x24). prev = FUN_020683d4(); r = FUN_020121ac(*((u32*)p+2), a1, a2); FUN_020683e8(prev); return r.
 *
 * verified: FUN_020c13c8 @ 0x020ab430 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_020683d4(void);
extern u32 FUN_020683e8(u32 prev);
extern int FUN_020121ac(int *p, int len, int delta);

int FUN_020c13c8(u32 p, u32 a1, u32 a2)
{
    u32 prev = FUN_020683d4();
    int r = FUN_020121ac((int *)*(u32 *)((u8 *)p + 8), (int)a1, (int)a2);
    FUN_020683e8(prev);
    return r;
}
