// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
extern char DAT_020fcd90[];
extern void FUN_020d1b74(void *, char *);
extern int FUN_020cfc44(void *, int, int, int, int, int, int, int, int, void *, int);
int FUN_020c89d8(int **a, int b, int c, int d, int e, int f, int g, int h, void (*k)(void *, int *, int), int m) {
    int *r6;
    if (a == 0 || (r6 = *a) == 0) {
        return 2;
    }
    if (k == 0) {
        FUN_020d1b74(a, DAT_020fcd90);
        return 2;
    }
    if (r6[0x42] != 0) {
        int sp1c[4] = {0};
        sp1c[2] = 0x601;
        k(a, sp1c, m);
        return 0;
    }
    return FUN_020cfc44(a, b, c, d, e, f, g, 0, h, (void *)k, m);
}
