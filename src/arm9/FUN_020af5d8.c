// FUN_020af5d8 @ 0x020af5d8 (0x2a, thumb) - ported from FUN_0204e98c [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_020af604(u32 *obj);
extern int FUN_020af64c(u32 *obj, int a, int b);

u32 *FUN_020af5d8(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x110);
    if (obj) {
        obj = FUN_020af604(obj);
    }
    if (obj) {
        FUN_020af64c(obj, a0, b0);
    }
    return obj;
}
