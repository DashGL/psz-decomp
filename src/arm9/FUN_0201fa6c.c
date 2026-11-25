// FUN_0201fa6c @ 0x0201fa6c (0x7c, arm) - ported from FUN_020251a8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
extern void FUN_0201c9d4(u32, void *, u32);

void FUN_0201fa6c(u8 *s) {
    u32 flags = *(u32 *)s;
    if ((flags & 4) == 0) {
        if ((flags & 2) == 0) {
            FUN_0201c9d4(0x19, s + 0x28, 0xc);
        } else {
            FUN_0201c9d4(0x1c, s + 0x4c, 3);
        }
    } else if ((flags & 2) == 0) {
        FUN_0201c9d4(0x1a, s + 0x28, 9);
    }
    if ((*(u32 *)s & 1) == 0) {
        FUN_0201c9d4(0x1b, s + 4, 3);
    }
}
