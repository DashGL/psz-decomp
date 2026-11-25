// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02065178(int, int, unsigned int, int);
extern void FUN_01ff8040(int, int, int, unsigned int);
void FUN_02064e48(int a, int b, int c, unsigned int d) {
    if (d == 0) {
        return;
    }
    FUN_02065178(a, b, d, 0);
    volatile unsigned int *r4 = &((volatile unsigned int *)0x040000b0)[a * 3 + 2];
    while (*r4 & 0x80000000) {
    }
    FUN_01ff8040(a, b, c, (d >> 1) | 0x80000000);
    while (*r4 & 0x80000000) {
    }
}
