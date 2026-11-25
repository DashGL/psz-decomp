// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02026d04(int, int, int, int, int, int);
extern int FUN_020268e0(int, int, int, int, int, int);
extern void FUN_02026c6c(int);

int FUN_02026844(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7) {
    int r4 = *(int *)(param_1 + 0x64);
    signed char saved;
    int r6 = ((param_7 & 2) && r4 != 0) ? 1 : 0;
    int res;

    if (r6) {
        saved = *(signed char *)(r4 + 0xfe);
        *(signed char *)(r4 + 0xfe) = 1;
    }
    if (*(signed char *)(param_1 + 0x73) == 1) {
        res = FUN_02026d04(param_1, param_2, param_3, param_4, param_5, param_6);
    } else {
        res = FUN_020268e0(param_1, param_2, param_3, param_4, param_5, param_6);
        if (res >= 0) {
            FUN_02026c6c(param_1);
        }
    }
    if (r6) {
        *(signed char *)(r4 + 0xfe) = saved;
    }
    return res;
}
