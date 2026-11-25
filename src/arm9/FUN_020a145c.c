// FUN_020a145c @ 0x020a145c (0x1e, thumb) - ported from FUN_0203e570 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_020a145c @ 0x0203e570, Thumb, true 0x1e (recorded 0x20 spans the
 * 2-byte inter-function pad). Raise-only stat clamp: for idx 7..9, val
 * clamped to 0xff; u8 temp normalized via lsls/lsrs BEFORE the base
 * pointer p = st + 0x99 (spelled as base+idx, NOT st[0x99+idx] — target
 * keeps 0x99 on the base, idx in r1).
 * Save-descriptor / stat-upgrade writer (callees of parked FUN_0203df14).
 * LIVE: census 0921 t1 5.5/s.
 * MATCHED: dsi/1.1 -O4,p at true size, reloc-free.
 */
#include <nds/ndstypes.h>

void FUN_020a145c(u8 *st, int idx, u32 val)
{
    if (idx >= 7 && idx <= 9) {
        if (val > 0xff)
            val = 0xff;
        u8 v = (u8)val;
        u8 *p = st + 0x99;
        if (v > p[idx]) {
            p[idx] = v;
        }
    }
}
