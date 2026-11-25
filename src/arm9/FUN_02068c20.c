// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern struct {
    char pad[0xc];
    int c;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
} DAT_021185a4;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_020692bc(void);

int FUN_02068c20(int a, int b, int c, int d) {
    int saved = FUN_020683d4();
    if (DAT_021185a4.c != 0) {
        FUN_020683e8(saved);
        return 1;
    }
    DAT_021185a4.c = 1;
    FUN_020683e8(saved);
    DAT_021185a4.f20 = 2;
    DAT_021185a4.f24 = 0;
    DAT_021185a4.f14 = a;
    DAT_021185a4.f18 = b;
    DAT_021185a4.f10 = c;
    DAT_021185a4.f1c = d;
    return FUN_020692bc() != 0 ? 0 : 3;
}
