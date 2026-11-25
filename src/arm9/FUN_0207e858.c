// FUN_0207e858 @ 0x0207e858 (0x2e, thumb) - ported from FUN_02055c74 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207e888(u32 *obj);
extern int FUN_0207e904(u32 *obj, int a, int b, int c);

u32 *FUN_0207e858(int a0, int a1, int a2) {
    u32 *obj = FUN_020ba894(0x1a8);
    if (obj) {
        obj = FUN_0207e888(obj);
    }
    if (obj) {
        FUN_0207e904(obj, a0, a1, a2);
    }
    return obj;
}
