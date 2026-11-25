// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,s -noThumb
extern int DAT_02107004[];
extern int DAT_02107008;
extern int DAT_020f96e4;
extern void FUN_0201c9d4(unsigned int, unsigned int *, unsigned int);
extern void FUN_0201c8a0(void);
extern void FUN_0201c914(void);
extern void FUN_020653d0(int, unsigned int *, unsigned int, void (*)(void), int *);
extern void FUN_020651cc(int, unsigned int *, unsigned int, void (*)(void), int *);

void FUN_0201c920(unsigned int *param_1, unsigned int param_2) {
    if (param_2 < 0x100 || DAT_020f96e4 == -1) {
        unsigned int count = (param_2 >> 2) - 1;
        FUN_0201c9d4(param_1[0], param_1 + 1, count);
        return;
    }
    FUN_0201c8a0();
    DAT_02107004[1] = 1;
    if (DAT_02107004[2] != 0) {
        FUN_020653d0(DAT_020f96e4, param_1, param_2, FUN_0201c914, &DAT_02107008);
    } else {
        FUN_020651cc(DAT_020f96e4, param_1, param_2, FUN_0201c914, &DAT_02107008);
    }
}
