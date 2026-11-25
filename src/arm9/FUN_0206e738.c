// FUN_0206e738 @ 0x0206e738 (0x6, thumb) - ported from FUN_0207098c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_0206e738 @ 0x0207098c, Thumb, true 0x6 (recorded 0x8 spans the
 * inter-function pad halfword). Entity-chain setter: ent->0xc0 = arg
 * (parent-chain hook used by FUN_0204f5a4's tick).
 * LIVE: census 0921 t1 29.5/s (hottest non-control target).
 * MATCHED: dsi/1.1 -O4,p at true size, reloc-free.
 */
#include <nds/ndstypes.h>

void FUN_0206e738(int ent, u32 val)
{
    *(u32 *)(ent + 0xc0) = val;
}
