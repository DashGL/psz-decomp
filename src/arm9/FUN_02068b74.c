// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_020692dc(void);
struct S {
    int f0, f4, f8, fc, f10, f14, f18, f1c, f20, f24;
};
extern struct S DAT_021185a4;
int FUN_02068b74(int a, int b, int c) {
    int irq = FUN_020683d4();
    if (DAT_021185a4.fc != 0) {
        FUN_020683e8(irq);
        return 1;
    }
    DAT_021185a4.fc = 1;
    FUN_020683e8(irq);
    DAT_021185a4.f20 = 1;
    DAT_021185a4.f24 = 0;
    DAT_021185a4.f14 = a;
    DAT_021185a4.f10 = b;
    DAT_021185a4.f1c = c;
    return FUN_020692dc() != 0 ? 0 : 3;
}
