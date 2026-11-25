// FUN_0207c764 @ 0x0207c764 (0x2a, thumb) - ported from FUN_02053c28 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207c790(u32 *obj);
extern int FUN_0207c7f4(u32 *obj, int a, int b);

u32 *FUN_0207c764(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x188);
    if (obj) {
        obj = FUN_0207c790(obj);
    }
    if (obj) {
        FUN_0207c7f4(obj, a0, b0);
    }
    return obj;
}
