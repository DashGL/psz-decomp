// FUN_0204a2f0 @ 0x0204a2f0 (0x28, thumb) - ported from FUN_02051110 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0204a2f0 - Component create v3 (Thumb, recorded size 0x28). 4e180-family: alloc 0x104 (FUN_020ba894), conditional sub-init (FUN_0204a318) inside if (r4 != 0), attach type = 0 via FUN_020473e8, shared r4 return tail.
 *
 * verified: FUN_0204a2f0 @ 0x02051110 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_020ba894(u32 size);
extern u32 FUN_0204a318(u32 obj);
extern void FUN_020473e8(u32 *base, u32 *input, int type);

u32 FUN_0204a2f0(u32 a0)
{
    u32 r4;
    u32 r5;
    r5 = a0;
    r4 = FUN_020ba894(0x104);
    if (r4 != 0) {
        r4 = FUN_0204a318(r4);
    }
    if (r4 == 0) {
        goto tail;
    }
    FUN_020473e8((u32 *)r4, (u32 *)r5, 0);
tail:
    return r4;
}
