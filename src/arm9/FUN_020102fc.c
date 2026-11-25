// FUN_020102fc @ 0x020102fc (0x5c, arm) - ported from FUN_0202a98c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020102fc @ 0x0202a98c (0x5c, ARM), verified dsi/1.1. */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 *FUN_0200ed18(u32);
extern int FUN_020105bc(u32, void *, int, int, u32, u32, int, int, int, int);

int FUN_020102fc(u32 a0, u32 a1, u32 a2) {
    u8 *p = FUN_0200ed18(a1);
    if (p == 0) {
        return 0;
    }
    return FUN_020105bc(a0, p, p[6], p[5], a1, a2, 0, 0, 0, 0);
}
