// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern int DAT_021120e8;
extern int DAT_021120ec;
extern void FUN_020576b8(void *);
extern void FUN_020576cc(void);
extern int DAT_02112510;
extern void FUN_020666f8(int, void (*)(void), int, void *, int, int);
extern void FUN_02066a94(int);
extern void FUN_020683e8(int);

void FUN_0205762c(int a) {
    int irq = FUN_020683d4();
    if (DAT_021120e8 == 0) {
        DAT_021120e8 = a;
        FUN_020576b8((void *)(a + 0xc4));
        FUN_020576b8(&DAT_021120ec);
        *(int *)(a + 0xc0) = 0;
        FUN_020666f8(a, FUN_020576cc, a, &DAT_02112510, 0x400, 0x14);
        FUN_02066a94(a);
    }
    FUN_020683e8(irq);
}
