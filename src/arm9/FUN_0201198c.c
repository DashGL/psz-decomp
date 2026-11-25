// FUN_0201198c @ 0x0201198c (0x2c, arm) - ported from FUN_020164cc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile unsigned int vu32;
typedef volatile unsigned short vu16;

void FUN_0201198c(u32 *list, u32 *node)
{
    u32 off = *(u16 *)((char *)list + 0xa);
    *(u32 *)((char *)node + off + 4) = 0;
    *(u32 *)((char *)node + off) = 0;
    *(vu32 *)((char *)list + 0) = (u32)node;
    *(vu32 *)((char *)list + 4) = (u32)node;
    (*(vu16 *)((char *)list + 8)) += 1;
}
