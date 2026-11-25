// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
// flags: -noThumb
#pragma opt_propagation off
extern void FUN_02000b9c(void *);
extern int FUN_020683d4(void);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);
extern void FUN_020558bc(void (*)(void *));
extern void FUN_02055fc0(void *);

struct S_021116a0 {
    int *f00;
    char pad04[0x18];
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f3c;
    char pad40[0xc4];
    int f104;
    int f108;
    int f10c;
    int f110;
    int f114;
};

extern struct S_021116a0 DAT_021116a0;
extern int DAT_02000c1c[];
extern int DAT_021181a0[];

int FUN_020561b0(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    struct S_021116a0 *r4 = &DAT_021116a0;
    int r5;
    FUN_02000b9c(DAT_02000c1c);
    r5 = FUN_020683d4();
    while (r4->f114 & 4) {
        FUN_020669dc(&r4->f10c);
    }
    r4->f114 |= 4;
    r4->f38 = a3;
    r4->f3c = a4;
    FUN_020683e8(r5);
    r4->f1c = a0;
    r4->f20 = a1;
    r4->f24 = a2;
    r4->f2c = a6;
    r4->f30 = a7;
    r4->f34 = a8;
    if (a5 != 0) {
        FUN_020558bc(FUN_02055fc0);
        return 1;
    }
    DAT_021116a0.f104 = DAT_021181a0[1];
    FUN_02055fc0(r4);
    return *r4->f00 == 0;
}
