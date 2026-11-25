// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *D_0211817c[3];
extern int FUN_020683d4(void);
extern void FUN_02066300(int, char *);
extern void FUN_020664d8(void);
extern void FUN_020683e8(int);

void FUN_020669dc(int a) {
    int s = FUN_020683d4();
    char *p = *(char **)D_0211817c[2];
    if (a != 0) {
        *(int *)(p + 0x78) = a;
        FUN_02066300(a, p);
    }
    *(int *)(p + 0x64) = 0;
    FUN_020664d8();
    FUN_020683e8(s);
}
