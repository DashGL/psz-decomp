// FUN_02042580 @ 0x02042580 (0x26, thumb) - ported from FUN_02070568 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_02042580 @ 0x02070568, Thumb, true 0x26 (recorded 0x28 spans the
 * 2-byte inter-function pad). "Is-20-class" slot checker for parked
 * FUN_02064728 (entity draw/anim SM): idx > -1 (target emits
 * subs r3,r2,#1; cmp; ble — NOT cmp#0) && idx < 5, ent->0xcc+idx*4 row
 * nonzero, row+4 bit2 clear -> 1. Named result local (single exit).
 * LIVE: census 0921 t3 5.5/s.
 * MATCHED: dsi/1.1 -O4,p at true size, reloc-free.
 */
#include <nds/ndstypes.h>

u32 FUN_02042580(u32 *ent, int idx)
{
    u32 res = 0;
    if (idx > -1 && idx < 5) {
        u32 row = *(u32 *)((char *)ent + idx * 4 + 0xcc);
        if (row != 0) {
            if ((*(u32 *)(row + 4) & 4) == 0) {
                res = 1;
            }
        }
    }
    return res;
}
