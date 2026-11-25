// FUN_020352a4 @ 0x020352a4 (0x1a, thumb) - ported from FUN_020a4318 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_020352a4 @ 0x020a4318, Thumb, true 0x1a (recorded 0x1c spans the
 * 2-byte inter-function pad). Guard-indexed table fetch: if
 * FUN_020781c8(idx) validates nonzero, return table[idx], else 0.
 * Boss-fight per-frame helper (callees of parked FUN_02072774 combat
 * scanner). LIVE: census 0921 t5 22.1/s.
 * MATCHED: dsi/1.1 -O4,p at true size, BL FUN_020781c8 verified.
 */
#include <nds/ndstypes.h>

extern u32 FUN_020781c8(u32 idx);

u32 FUN_020352a4(u32 *table, u32 idx)
{
    if (FUN_020781c8(idx) != 0) {
        return table[idx];
    }
    return 0;
}
