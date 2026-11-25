// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02065178(int, int, int, int);
extern void FUN_01ff8040(int, int, int, int);
void FUN_02064dd8(int a, int b, int c, unsigned int d) {
    FUN_02065178(a, b, d, 0);
    if (d == 0) {
        return;
    }
    {
        volatile unsigned int *r4 = (volatile unsigned int *)(((a * 3 + 2) << 2) + 0x040000b0);
        while (*r4 & 0x80000000u) {}
        FUN_01ff8040(a, b, c, (d >> 2) | 0x84000000u);
        while (*r4 & 0x80000000u) {}
    }
}
