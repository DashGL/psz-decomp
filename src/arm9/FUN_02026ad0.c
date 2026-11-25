// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int D_02026b1c;
extern int *FUN_02025f40(void *, int, int);
extern int FUN_02026088(int, int *);

int FUN_02026ad0(int a, int b, int c, int d, int e) {
    int *p = FUN_02025f40(&D_02026b1c, a, 1);
    p[4] = b;
    p[5] = c;
    p[6] = d;
    p[7] = e;
    return FUN_02026088(a, p);
}
