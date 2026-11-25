// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0205c1cc(int, int, int, int, int, int, void *);
extern void FUN_0205e534(void *);
void FUN_0205eacc(int a, int b, int c, int d, int e, int f, int g, void *h) {
    char buf[0x40];
    if (h == 0) {
        h = buf;
    }
    FUN_0205c1cc(a, b, c, d, e, f, h);
    if (g == 0) {
        return;
    }
    *(volatile int *)0x04000440 = 0;
    FUN_0205e534(h);
}
