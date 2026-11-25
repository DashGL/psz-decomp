// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_02063cf4(unsigned short, int, unsigned short);
extern volatile int DAT_021180a0[];

int FUN_02063d64(unsigned short param_1, unsigned short param_2) {
    int s = FUN_020683d4();
    if (*(unsigned char *)(DAT_021180a0[2] + 0x50d) != 0) {
        FUN_020683e8(s);
        return 0;
    }
    if (FUN_02063cf4(param_1, 8, param_2) == 0) {
        FUN_020683e8(s);
        return 0;
    }
    *(unsigned short *)(DAT_021180a0[2] + 0x10) = param_2;
    *(unsigned short *)(DAT_021180a0[2] + 0x500) = param_1;
    *(unsigned short *)(DAT_021180a0[2] + 0x502) = 8;
    FUN_020683e8(s);
    return 1;
}
