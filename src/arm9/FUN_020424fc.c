// FUN_020424fc @ 0x020424fc (0x22, thumb) - ported from FUN_020704e4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_020424fc - Indexed 2-arg fn dispatch, VOID (Thumb, 0x24). idx in [0,5), load +0xcc, guarded FUN_02046bdc(entry, a2), ret0 arm = the shared pop.
 *
 * verified: FUN_020424fc @ 0x020704e4 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_02046bdc(u32 entry, u32 a2);

void FUN_020424fc(u32 base, int idx, u32 a2)
{
    u32 r0;
    if ((int)idx > -1) {
        if (idx < 5) {
            r0 = *(u32 *)((u8 *)base + (idx << 2) + 0xcc);
            if (r0 != 0) {
                FUN_02046bdc(r0, a2);
            }
        }
    }
}
