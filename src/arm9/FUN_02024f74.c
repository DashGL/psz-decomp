// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020656b8(char *, int, unsigned int);

char *FUN_02024f74(int a, unsigned int b, char *c, unsigned int d) {
    if (d < b) {
        unsigned int n = b - d;
        FUN_020656b8(c, a, n);
        c += n;
    }
    return c;
}
