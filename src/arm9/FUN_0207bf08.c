// FUN_0207bf08 @ 0x0207bf08 (0x2e, thumb) - ported from FUN_020533c0 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207bf38(u32 *obj);
extern int FUN_0207c080(u32 *obj, int a, int b, int c);

u32 *FUN_0207bf08(int a0, int a1, int a2) {
    u32 *obj = FUN_020ba894(0x158);
    if (obj) {
        obj = FUN_0207bf38(obj);
    }
    if (obj) {
        FUN_0207c080(obj, a0, a1, a2);
    }
    return obj;
}
