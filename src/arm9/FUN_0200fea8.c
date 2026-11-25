// FUN_0200fea8 @ 0x0200fea8 (0x48, arm) - ported from FUN_0202a538 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200fea8 @ 0x0202a538 (0x48, ARM), verified dsi/1.1. */
typedef unsigned char u8;
typedef unsigned short u16;
extern int FUN_0200eb88(int);
extern void FUN_0200ff70(int, u8, u16, u8, int, int);

int FUN_0200fea8(int a0, int a1) {
    int p = FUN_0200eb88(a1);
    if (p == 0) {
        return 0;
    }
    FUN_0200ff70(a0, *(u8 *)(p + 9), *(u16 *)(p + 4), *(u8 *)(p + 8), p, a1);
}
