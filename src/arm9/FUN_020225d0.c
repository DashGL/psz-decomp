// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S19_g {
    char pad[0x50];
    unsigned int ip;
};
extern char DAT_0210753c[];
extern struct S19_g DAT_02107054;
extern void FUN_02065774(const void *, void *, int);
extern int FUN_0202165c(void *, int, int, int);

int FUN_020225d0(char *param_1) {
    unsigned short hi, lo;
    *(unsigned short *)(param_1 + 6) = 0x200;
    FUN_02065774(param_1 + 8, param_1 + 0x12, 0xa);
    FUN_02065774(DAT_0210753c, param_1 + 8, 6);
    hi = (unsigned short)(DAT_02107054.ip >> 16);
    *(unsigned short *)(param_1 + 0xe) = (unsigned short)(((int)hi >> 8) | (hi << 8));
    lo = (unsigned short)DAT_02107054.ip;
    *(unsigned short *)(param_1 + 0x10) = (unsigned short)(((int)lo >> 8) | (lo << 8));
    FUN_02065774(param_1 + 0x12, param_1 - 0xe, 6);
    FUN_02065774(DAT_0210753c, param_1 - 8, 6);
    return FUN_0202165c(param_1 - 0xe, 0x2a, 0, 0);
}
