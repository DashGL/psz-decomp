// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02066998(int);
extern void FUN_020241f4(void);
extern void FUN_02024230(void);
extern void FUN_0202405c(void);
extern void FUN_02023f84(void);
extern void FUN_02025fb4(int, int);
extern int FUN_020683d4(void);
extern void FUN_02027f14(int);
extern void FUN_02027efc(int);
extern void FUN_020683e8(int);

int FUN_020277dc(int param_1) {
    int r4 = *(int *)(param_1 + 4);
    int b = 1;
    signed char st = *(signed char *)(r4 + 0x73);
    if (st != 0 && st != 4) b = 0;
    if (b) {
        FUN_02066998(*(int *)(r4 + 0x68) + 0x20);
        FUN_020241f4();
        FUN_02024230();
        FUN_0202405c();
    }
    FUN_02023f84();
    *(short *)(r4 + 0x70) &= ~6;
    FUN_02025fb4(*(signed char *)(r4 + 0x73) == 2 ? *(int *)(r4 + 0x68) : *(int *)(r4 + 0x64), 0);
    int r5 = FUN_020683d4();
    FUN_02027f14(r4);
    FUN_02027efc(r4);
    FUN_020683e8(r5);
    *(short *)(r4 + 0x70) |= 0x20;
    return 0;
}
