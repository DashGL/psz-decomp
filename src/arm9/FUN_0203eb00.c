// FUN_0203eb00 @ 0x0203eb00 (0x14, thumb) - ported from FUN_0208c23c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -thumb
#include <nds/ndstypes.h>
typedef unsigned int u32;
typedef unsigned char u8;

int FUN_0203eb00(u32 *obj)
{
    u8 c = *(u8 *)((u8 *)obj + 0x24);
    return c >= 14 && c <= 18;
}
