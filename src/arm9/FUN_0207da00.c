// FUN_0207da00 @ 0x0207da00 (0x2e, thumb) - ported from FUN_02054e30 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207da30(u32 *obj);
extern int FUN_0207da8c(u32 *obj, int a, int b, int c);

u32 *FUN_0207da00(int a0, int a1, int a2) {
    u32 *obj = FUN_020ba894(0x11c);
    if (obj) {
        obj = FUN_0207da30(obj);
    }
    if (obj) {
        FUN_0207da8c(obj, a0, a1, a2);
    }
    return obj;
}
