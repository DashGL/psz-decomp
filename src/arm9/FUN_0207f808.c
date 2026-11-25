// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
extern int DAT_020f2dd0[];
extern void *DAT_02108cf4;
extern int FUN_02078198(int);
extern int FUN_02078188(int);
extern void *FUN_020352a4(void *, int);
extern int FUN_020352c0(void *);
extern int FUN_02039200(void *);

int FUN_0207f808(int *param_1, int param_2, int param_3) {
    int r7;
    int r6;
    int r4;
    int r0;

    if (param_3 <= 0 || param_3 > 5) {
        return 0;
    }
    r7 = ((int (*)[5])DAT_020f2dd0)[param_2][param_3 - 1];
    r6 = 0;
    r4 = 0;
    if (FUN_02078198(*param_1) != 0) {
        r0 = FUN_020352c0(FUN_020352a4(DAT_02108cf4, *param_1));
        if (r0 != 0) {
            r6 = *(short *)(r0 + 0x18);
            r4 = *(int *)(r0 + 0x34);
        }
    } else if (FUN_02078188(*param_1) != 0) {
        r0 = FUN_02039200(FUN_020352a4(DAT_02108cf4, *param_1));
        if (r0 != 0) {
            r6 = *(unsigned short *)(r0 + 0x5c);
            r4 = *(unsigned short *)(r0 + 0x14e);
        }
    }
    r0 = (int)(((long long)r6 * (long long)r7 + 0x800) >> 12);
    if (r4 - r0 <= 0) {
        r0 = r4 - 1;
    }
    if (r0 < 0) {
        r0 = 0;
    }
    return r0;
}
