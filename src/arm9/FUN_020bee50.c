// FUN_020bee50 @ 0x020bee50 (0x2a, thumb) - ported from FUN_020ac3d8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
u8 *FUN_020bee50(u8 *slots, u32 handle)
{
    int index;
    if (handle != 0xffffffff) {
        index = handle & 0xffff;
        if (index >= 0 && index < 100) {
            slots += index * 24;
            if (*(u16 *)(slots + 4) == ((handle & 0xffff0000) >> 16))
                return slots;
        }
    }
    return 0;
}
