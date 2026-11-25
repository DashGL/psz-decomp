// FUN_020965b0 @ 0x020965b0 (0x1c, thumb) - ported from FUN_02041aa4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;

extern void FUN_0209657c(void *p);

void *FUN_020965b0(void *objv)
{
    u32 *obj = (u32 *)objv;
    obj[0] = 0;
    obj[1] = 0;
    obj[8] = 0;
    *(u16 *)((char *)obj + 0x24) = 0;
    *(u16 *)((char *)obj + 0x26) = 0;
    FUN_0209657c((char *)obj + 0x28);
    return obj;
}
