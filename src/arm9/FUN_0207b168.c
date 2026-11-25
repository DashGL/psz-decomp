// FUN_0207b168 @ 0x0207b168 (0x2a, thumb) - ported from FUN_02052648 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207b194(u32 *obj);
extern int FUN_0207b26c(u32 *obj, int a, int b);

u32 *FUN_0207b168(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x190);
    if (obj) {
        obj = FUN_0207b194(obj);
    }
    if (obj) {
        FUN_0207b26c(obj, a0, b0);
    }
    return obj;
}
