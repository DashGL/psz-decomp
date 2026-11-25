// FUN_0209657c @ 0x0209657c (0x1a, thumb) - ported from FUN_02041a70 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_0209657c @ 0x02041a70 (true 0x1c, recorded 0x1c, Thumb) — live game-side
 * small initializer. Clears the leading six bytes through the banked
 * byte-clear helper FUN_0200c938, zeroes the two flag bytes at +0x06/+0x07,
 * then runs the sub-init at FUN_02096598 and returns the object.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern u8 *FUN_0200c938(u8 *dst, int n);
extern void FUN_02096598(u32 obj);

u8 *FUN_0209657c(u8 *obj)
{
    FUN_0200c938(obj, 6);
    obj[6] = 0;
    obj[7] = 0;
    FUN_02096598((u32)obj);
    return obj;
}
