// FUN_020c39b4 @ 0x020c39b4 (0x14, thumb) - ported from FUN_020a9b38 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_020c39b4 - Guarded +4 selector (Thumb, recorded size 0x14). FUN_020c39e4(a0); ret 0 or a0+4.
 *
 * verified: FUN_020c39b4 @ 0x020a9b38 - mwcc-strict 1.1/dsi, arm946e, -O4,p -interworking -thumb; byte match vs extracted/arm9.bin
 */
typedef unsigned int u32;

extern u32 FUN_020c39e4(u32 a);

u32 FUN_020c39b4(u32 a0)
{
    u32 r4 = a0;
    if (FUN_020c39e4(r4) == 0) {
        return 0;
    }
    return r4 + 4;
}
