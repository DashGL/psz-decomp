// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int *FUN_02022c18(int, int);
extern void FUN_02066b00(int *);
extern void FUN_02066a94(int);

void FUN_0202361c(int a, int b) {
    int *p = FUN_02022c18(a, b);
    if (p == 0) {
        return;
    }
    FUN_02066b00(p);
    *(unsigned char *)(p + 2) = 0;
    if ((unsigned int)(p[1] - 1) <= 1) {
        p[1] = 0;
        FUN_02066a94(p[0]);
    }
}
