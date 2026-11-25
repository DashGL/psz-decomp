// FUN_0207a954 @ 0x0207a954 (0x2e, thumb) - ported from FUN_02051e68 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207a984(u32 *obj);
extern int FUN_0207aa84(u32 *obj, int a, int b, int c);

u32 *FUN_0207a954(int a0, int a1, int a2) {
    u32 *obj = FUN_020ba894(0x1a4);
    if (obj) {
        obj = FUN_0207a984(obj);
    }
    if (obj) {
        FUN_0207aa84(obj, a0, a1, a2);
    }
    return obj;
}
