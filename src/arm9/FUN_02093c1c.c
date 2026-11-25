// FUN_02093c1c @ 0x02093c1c (0x1c, thumb) - ported from FUN_020a38f4 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
typedef unsigned char u8;

extern u32 *FUN_02093c00(int slot);
extern u32 FUN_02093b2c(u32 *obj, u32 a, u32 b);

u32 FUN_02093c1c(int slot, u32 a, u32 b)
{
    u32 *obj;

    obj = FUN_02093c00(slot);
    if (obj != 0) {
        return FUN_02093b2c(obj, a, b);
    }
    return 0;
}
