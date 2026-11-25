// FUN_0200d940 @ 0x0200d940 (0x28, arm) - ported from FUN_02027f70 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_020695a8(u8 a0, u32 a1, u32 a2);

u32 FUN_0200d940(u8 *volatile *p, u32 a1, u32 a2)
{
    if (*p == 0) {
        return 0;
    }
    FUN_020695a8((*p)[0x3c], a1, a2);
    return 1;
}
