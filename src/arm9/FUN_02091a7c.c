// FUN_02091a7c @ 0x02091a7c (0x32, thumb) - ported from FUN_02081820 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_02091a7c @ 0x02081820 (0x32, Thumb), verified dsi/1.1.
 * Bounded entity-motion record copy. Rejects null source, nonzero ownership field1c, negative count or count above signed field10. Copies count*12 bytes to pointer8 and returns1. Expressing field10<count preserves target comparison operand order. Return81850 ends32; two following bytes are padding.
 * 2026-10-15: full words and relocation verification with -O4,s.
 * Gameplay has not been tested.
 */
typedef unsigned int u32;
extern void FUN_020014d4(u32, u32, u32);
int FUN_02091a7c(u32 object, u32 source, int count)
{
    if (!source) return 0;
    if (*(u32 *)(object + 0x1c)) return 0;
    if (count < 0 || *(int *)(object + 0x10) < count) return 0;
    FUN_020014d4(*(u32 *)(object + 8), source, count * 12);
    return 1;
}
