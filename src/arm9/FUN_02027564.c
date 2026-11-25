// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02065774(void *, void *, int);

int FUN_02027564(char *param_1, int param_2, char *param_3) {
    int r4 = *(int *)(param_3 + 0x14);
    int r5 = *(int *)(param_3 + 0x1c);
    if (r4 > param_2) {
        r4 = param_2;
        r5 = 0;
    } else if (r5 > param_2 - r4) {
        r5 = param_2 - r4;
    }
    if (r4 > 0) {
        FUN_02065774(*(void **)(param_3 + 0x10), param_1, r4);
        *(int *)(param_3 + 0x10) += r4;
        *(int *)(param_3 + 0x14) -= r4;
    }
    if (r5 > 0) {
        FUN_02065774(*(void **)(param_3 + 0x18), param_1 + r4, r5);
        *(int *)(param_3 + 0x18) += r5;
        *(int *)(param_3 + 0x1c) -= r5;
    }
    return r4 + r5;
}
