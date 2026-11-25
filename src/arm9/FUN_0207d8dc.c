// FUN_0207d8dc @ 0x0207d8dc (0x2e, thumb) - ported from FUN_02054d0c [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0207d90c(u32 *obj);
extern int FUN_0207d940(u32 *obj, int a, int b, int c);

u32 *FUN_0207d8dc(int a0, int a1, int a2) {
    u32 *obj = FUN_020ba894(0x10c);
    if (obj) {
        obj = FUN_0207d90c(obj);
    }
    if (obj) {
        FUN_0207d940(obj, a0, a1, a2);
    }
    return obj;
}
