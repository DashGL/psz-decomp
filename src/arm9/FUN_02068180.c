// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02068728(void);
extern int FUN_020683d4(void);
extern void FUN_02067fe8(void *, long long);
extern void FUN_020683e8(int);
void FUN_02068180(int *a, int b, int c, long long de, int f, int g) {
    int r5;
    if (a == 0 || a[0] != 0) {
        FUN_02068728();
    }
    r5 = FUN_020683d4();
    *(long long *)(a + 7) = de;
    a[9] = b;
    a[10] = c;
    a[0] = f;
    a[1] = g;
    FUN_02067fe8(a, 0);
    FUN_020683e8(r5);
}
