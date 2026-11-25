// FUN_020495e0 @ 0x020495e0 (0x2a, thumb) - ported from FUN_02050430 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0204960c(u32 *obj);
extern int FUN_0204972c(u32 *obj, int a, int b);

u32 *FUN_020495e0(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x19c);
    if (obj) {
        obj = FUN_0204960c(obj);
    }
    if (obj) {
        FUN_0204972c(obj, a0, b0);
    }
    return obj;
}
