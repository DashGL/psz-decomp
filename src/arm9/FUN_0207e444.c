// FUN_0207e444 @ 0x0207e444 (0x2a, thumb) - ported from FUN_0204e98c [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207e470(u32 *obj);
extern int FUN_0207e4b8(u32 *obj, int a, int b);

u32 *FUN_0207e444(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x110);
    if (obj) {
        obj = FUN_0207e470(obj);
    }
    if (obj) {
        FUN_0207e4b8(obj, a0, b0);
    }
    return obj;
}
