// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void *FUN_0202e424(void);
extern void FUN_020683e8(int);
extern char *FUN_0202fc68(int);
char *FUN_0202fa1c(int a) {
    int r5 = FUN_020683d4();
    char *r4;
    if (FUN_0202e424() == 0) {
        FUN_020683e8(r5);
        return 0;
    }
    r4 = FUN_0202fc68(a);
    if (r4 == 0) {
        FUN_020683e8(r5);
        return 0;
    }
    FUN_020683e8(r5);
    return r4 + 0x10;
}
