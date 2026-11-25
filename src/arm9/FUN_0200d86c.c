// FUN_0200d86c @ 0x0200d86c (0x20, arm) - ported from FUN_02027e9c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_0206960c(u32 a0, u32 a1, u32 a2);

void FUN_0200d86c(u8 *volatile *p, u32 a1, u32 a2)
{
    if (*p == 0) {
        return;
    }
    FUN_0206960c((*p)[0x3c], a1, a2);
}
