// FUN_02048e2c @ 0x02048e2c (0x2a, thumb) - ported from FUN_0204fcbc [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_02048e58(u32 *obj);
extern int FUN_02048ed4(u32 *obj, int a, int b);

u32 *FUN_02048e2c(int a0, int b0) {
    u32 *obj = FUN_020ba894(0x108);
    if (obj) {
        obj = FUN_02048e58(obj);
    }
    if (obj) {
        FUN_02048ed4(obj, a0, b0);
    }
    return obj;
}
