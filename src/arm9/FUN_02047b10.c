// FUN_02047b10 @ 0x02047b10 (0x2a, thumb) - ported from FUN_0204e98c [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_02047b3c(u32 *obj);
extern int FUN_02047bb8(u32 *obj, int a, int b);

u32 *FUN_02047b10(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x110);
    if (obj) {
        obj = FUN_02047b3c(obj);
    }
    if (obj) {
        FUN_02047bb8(obj, a0, b0);
    }
    return obj;
}
