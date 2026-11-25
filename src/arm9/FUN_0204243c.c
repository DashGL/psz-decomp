// FUN_0204243c @ 0x0204243c (0x24, thumb) - ported from FUN_0207049c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0204243c - Indexed fn dispatch (Thumb, recorded size 0x24). idx in [0,5): load *(base + idx*4 + 0xcc), guarded FUN_02046b7c(entry), else 0.
 *
 * verified: FUN_0204243c @ 0x0207049c - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_02046b7c(u32 entry);

u32 FUN_0204243c(u32 base, int idx)
{
    u32 r0;
    if ((int)idx > -1) {
        if (idx < 5) {
            r0 = *(u32 *)((u8 *)base + (idx << 2) + 0xcc);
            if (r0 != 0) {
                return FUN_02046b7c(r0);
            }
        }
    }
    return 0;
}
