// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
extern char DAT_020fcd90[];
extern char DAT_020fcda4[];
extern void FUN_020d1b74(void *, char *);
extern int FUN_020cfd7c(void *, int, int, int, void *, int);
int FUN_020c9190(int **a, int b, int c, int d, void (*e)(void *, int *, int), int f) {
    int *r6;
    if (a == 0 || (r6 = *a) == 0) {
        return 2;
    }
    if (e == 0) {
        FUN_020d1b74(a, DAT_020fcd90);
        return 2;
    }
    if (r6[0x7d] == 4) {
        FUN_020d1b74(a, DAT_020fcda4);
        return 2;
    }
    if (r6[0x42] != 0) {
        int sp8[3] = {0};
        e(a, sp8, f);
        return 0;
    }
    return FUN_020cfd7c(a, b, c, d, (void *)e, f);
}
