// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_020650f4(int, int);
extern void FUN_02065178(int, int, int, int);
extern void FUN_01ff8000(int, int, int, unsigned int);
void FUN_02065a0c(int a, int b, int c, int d) {
    FUN_020650f4(a, -1);
    FUN_02065178(a, b, d, 0x1000000);
    if (d == 0) {
        return;
    }
    {
        volatile unsigned int *r1 = (volatile unsigned int *)(((a * 3 + 2) << 2) + 0x040000b0);
        while (*r1 & 0x80000000u) {}
        FUN_01ff8000(a, b, c, 0xaf000001u);
    }
}
