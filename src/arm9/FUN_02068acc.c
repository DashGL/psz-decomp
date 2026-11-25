// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int f0[3];
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
} S_68acc;
extern S_68acc DAT_021185a4;
extern int FUN_020683d4(void);
extern int FUN_020683e8(int);
extern int FUN_020692cc(void);
int FUN_02068acc(int a, int b, int c) {
    int old = FUN_020683d4();
    if (DAT_021185a4.fc != 0) {
        FUN_020683e8(old);
        return 1;
    }
    DAT_021185a4.fc = 1;
    FUN_020683e8(old);
    DAT_021185a4.f20 = 0;
    DAT_021185a4.f24 = 0;
    DAT_021185a4.f14 = a;
    DAT_021185a4.f10 = b;
    DAT_021185a4.f1c = c;
    return FUN_020692cc() != 0 ? 0 : 3;
}
