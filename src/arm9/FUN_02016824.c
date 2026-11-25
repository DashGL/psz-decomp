// FUN_02016824 @ 0x02016824 (0xc, arm) - ported from FUN_0201c0c8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;

void FUN_02016824(u32 *dst, u32 b, u32 c)
{
    dst[2] = b;
    dst[3] = c;
}
