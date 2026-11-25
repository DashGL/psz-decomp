// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int DAT_021180e0;
extern int FUN_020683d4(void);
extern void FUN_0206485c(int);
extern void FUN_020646a8(void);
extern void FUN_020666f8(int, void (*)(void), int, unsigned int, unsigned int, int);
extern void FUN_02066a94(int);
extern void FUN_020683e8(int);

void FUN_020647c0(int a, unsigned int b) {
    int r4 = FUN_020683d4();
    if (DAT_021180e0 == 0) {
        DAT_021180e0 = a;
        FUN_0206485c(a + 0xc4);
        *(int *)(a + 0xc0) = 0;
        FUN_020666f8(a, FUN_020646a8, a, a + 0xe4 + ((b - 0xe4) & ~3u), (b - 0xe4) & ~3u, 0);
        FUN_02066a94(a);
    }
    FUN_020683e8(r4);
}
