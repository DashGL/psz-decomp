// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02027b9c(void);
extern void FUN_02066c68(int);
extern int FUN_02025ed0(void);
extern void FUN_02021340(void);
extern void FUN_02021330(int);
extern int DAT_02108884;
extern int DAT_021070a4;
extern int DAT_020f6968;
extern int DAT_02108890[];

int FUN_02027a50(void) {
    int res;
    if (DAT_02108884 == 0) {
        DAT_02108884 = DAT_021070a4;
    }
    while (FUN_02027b9c() == -26) {
        FUN_02066c68(100);
    }
    res = FUN_02025ed0();
    if (res >= 0) {
        FUN_02021340();
        FUN_02021330(0);
        if (*(int *)(DAT_020f6968 + 0x28) == 0) {
            (*(void (**)(int))(DAT_020f6968 + 0x1c))(DAT_02108890[7]);
        }
        DAT_020f6968 = 0;
    }
    return res;
}
