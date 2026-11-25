// FUN_020473e8 @ 0x020473e8 (0x2a, thumb) - ported from FUN_0204e254 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
extern void FUN_0204b29c(u32 *obj, u32 *input, int type);
extern void FUN_02047384(u32 *obj);

void FUN_020473e8(u32 *base, u32 *input, int type) {
    *(base + 0x3a) = input[0x16];
    FUN_0204b29c(base, input, type);
    FUN_02047384(base);
    base[0x39] = input[7];
    base[0x40] = input[0x18];
}
