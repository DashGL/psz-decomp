// FUN_020122c4 @ 0x020122c4 (0x10, arm) - ported from FUN_02016e04 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
#include <nds/ndstypes.h>

u16 FUN_020122c4(u32* self, u16 value) {
    u16 old = *(u16*)((u8*)self + 0x34);
    *(u16*)((u8*)self + 0x34) = value;
    return old;
}
