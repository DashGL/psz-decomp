// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// flags: -noThumb
extern char *D_021180e0;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_02064840(void);
extern void FUN_02064888(char *, int, int, int);

void FUN_020649ec(int a) {
    int s = FUN_020683d4();
    if (FUN_02064840() != 0) {
        FUN_02064888(D_021180e0 + 0xc4, 0, a, 0);
    }
    FUN_020683e8(s);
}
