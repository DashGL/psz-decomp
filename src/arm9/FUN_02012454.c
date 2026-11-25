// FUN_02012454 @ 0x02012454 (0x34, arm) - ported from FUN_02016f94 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_02012454 - ring TAKE/RELEASE dispatch (ARM, recorded size 0x34).
 * Rounds the span (max(1,size), upper-round-4) then dispatches on the
 * align sign: align >= 0 = TAKE via FUN_0201231c, align < 0 = RELEASE
 * via FUN_02012378 with the negated align; ring base = arg + 0x24.
 *
 * verified: FUN_02012454 @ 0x02016f94 - mwcc-strict 1.1/dsi, arm946e,
 *           -O4,p -interworking -noThumb; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_0201231c(u32 *ring, u32 size, u32 align);
extern u32 FUN_02012378(u32 *ring, u32 size, u32 align);

u32 FUN_02012454(u32 *ring, u32 size, int align)
{
    u32 *base;
    u32 r1;
    if (size == 0) {
        size = 1;
    }
    r1 = (size + 3) & ~3u;
    base = (u32 *)((u8 *)ring + 0x24);
    if (align >= 0) {
        return FUN_0201231c(base, r1, align);
    }
    return FUN_02012378(base, r1, -align);
}
