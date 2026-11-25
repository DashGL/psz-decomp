// FUN_0201d98c @ 0x0201d98c (0x3c, arm) - ported from FUN_020230c8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0201d98c @ 0x020230c8 (0x3c, ARM), verified dsi/1.1. */
typedef unsigned short u16;
extern void FUN_0201dc70(int, int, int, int);

void FUN_0201d98c(int a0, int *a1, int a2) {
    int base = a1[2];
    int v = a1[0];
    int lim = *(u16 *)(base + 4) << 12;
    if (v >= lim) {
        v = lim - 1;
    } else if (v < 0) {
        v = 0;
    }
    FUN_0201dc70(base, a2, v, a0);
}
