// FUN_020877fc @ 0x020877fc (0x2e, thumb) - ported from FUN_0204cbc0 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;
extern u32 *FUN_020ba894(int size);
extern u32 *FUN_0208782c(u32 *obj);
extern int FUN_02087964(u32 *obj, int a, int b, int c);

u32 *FUN_020877fc(int a0, int a1, int a2) {
    u32 *obj = FUN_020ba894(0x18c);
    if (obj) {
        obj = FUN_0208782c(obj);
    }
    if (obj) {
        FUN_02087964(obj, a0, a1, a2);
    }
    return obj;
}
