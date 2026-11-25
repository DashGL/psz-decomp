// FUN_0208724c @ 0x0208724c (0x8, thumb) - ported from FUN_0209f320 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_0208724c @ 0x0209f320, Thumb, 0x8 (recorded = true). Save-context
 * accessor: rec = p + 0xdb0 (arg-home passthrough, movs#0xdb lsls#4).
 * MATCHED: dsi/1.1 -O4,p; every byte verified (reloc-free).
 */
#include <nds/ndstypes.h>

u32 *FUN_0208724c(u32 *p)
{
    return (u32 *)((u8 *)p + 0xdb0);
}
