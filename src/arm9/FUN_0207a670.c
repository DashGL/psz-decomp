// FUN_0207a670 @ 0x0207a670 (0x2a, thumb) - ported from FUN_02051bac [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207a69c(u32 *obj);
extern int FUN_0207a6f8(u32 *obj, int a, int b);

u32 *FUN_0207a670(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x184);
    if (obj) {
        obj = FUN_0207a69c(obj);
    }
    if (obj) {
        FUN_0207a6f8(obj, a0, b0);
    }
    return obj;
}
