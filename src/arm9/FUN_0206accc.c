// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
struct S6accc {
    int f00;
    void (*f04)(int, int, int);
    char pad08[0x30];
    unsigned short f38;
    unsigned short f3a;
};
extern struct S6accc DAT_0211a144;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int a);
extern int FUN_020688c0(int a, int b, int c);

static inline int helper_6accc(void) {
    return FUN_020688c0(6, 0x03000200, 0) >= 0;
}

void FUN_0206accc(void) {
    int irq = FUN_020683d4();
    if (!helper_6accc()) {
        FUN_020683e8(irq);
        DAT_0211a144.f38 |= 4;
        if (DAT_0211a144.f04 != 0) {
            DAT_0211a144.f04(2, 4, 0);
        }
    } else {
        DAT_0211a144.f3a |= 4;
        DAT_0211a144.f38 &= ~4;
        FUN_020683e8(irq);
    }
}
