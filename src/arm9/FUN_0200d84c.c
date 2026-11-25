// FUN_0200d84c @ 0x0200d84c (0x20, arm) - ported from FUN_02027e9c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_020695f0(u32 a0, u32 a1, u32 a2);

void FUN_0200d84c(u8 *volatile *p, u32 a1, u32 a2)
{
    if (*p == 0) {
        return;
    }
    FUN_020695f0((*p)[0x3c], a1, a2);
}
