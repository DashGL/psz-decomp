// FUN_0206da04 @ 0x0206da04 (0x18, thumb) - ported from FUN_02057794 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0206da04 - Queue counter push (Thumb, recorded size 0x18). r4 = *(ctx+0xc); FUN_0207816c(FUN_020780f4(), *(ctx+0x10) - r4 + 1); return r4 + the de30 ret.
 *
 * verified: FUN_0206da04 @ 0x02057794 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern int FUN_020780f4(void);
extern u32 FUN_0207816c(int *ctx, u32 n);

u32 FUN_0206da04(u32 a0, u32 ctx)
{
    u32 r4;
    u32 ret;
    r4 = *(u32 *)((u8 *)ctx + 0xc);
    ret = FUN_0207816c((int *)FUN_020780f4(), *(u32 *)((u8 *)ctx + 0x10) - r4 + 1);
    return r4 + ret;
}
