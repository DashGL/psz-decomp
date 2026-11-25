// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02065178(int, int, int, int);
extern void FUN_02065010(int);
extern int FUN_020683d4(void);
extern int FUN_02065cb8(int);
extern void FUN_02065c30(int, int);
extern void FUN_02065e00(int);
extern void FUN_020652c4(void);
extern void FUN_020683e8(int);

struct State_020651cc {
    volatile int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
};
extern struct State_020651cc DAT_021180f8;

void FUN_020651cc(int arg0, int arg1, int arg2, void (*arg3)(int), int arg4) {
    int irq;
    if (arg2 == 0) {
        if (arg3 != 0) {
            arg3(arg4);
        }
        return;
    }
    while (DAT_021180f8.f0 != 0) {
    }
    while ((((*(volatile unsigned int *)0x04000600 & 0x07000000) >> 24) & 2) == 0) {
    }
    DAT_021180f8.f0 = 1;
    DAT_021180f8.f4 = arg0;
    DAT_021180f8.f8 = arg1;
    DAT_021180f8.fc = arg2;
    DAT_021180f8.f10 = (int)arg3;
    DAT_021180f8.f14 = arg4;
    FUN_02065178(arg0, arg1, arg2, 0);
    FUN_02065010(arg0);
    irq = FUN_020683d4();
    DAT_021180f8.f18 = (*(volatile unsigned int *)0x04000600 & 0xc0000000U) >> 30;
    DAT_021180f8.f1c = FUN_02065cb8(0x200000);
    *(volatile unsigned int *)0x04000600 = (*(volatile unsigned int *)0x04000600 & ~0xc0000000U) | 0x40000000U;
    FUN_02065c30(0x200000, (int)FUN_020652c4);
    FUN_02065e00(0x200000);
    FUN_020652c4();
    FUN_020683e8(irq);
}
