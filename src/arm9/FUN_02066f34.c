// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_020669dc(void *);
extern void FUN_02066a2c(void *);

int FUN_02066f34(char *param_1, int param_2, int param_3) {
    int s = FUN_020683d4();
    int idx;
    while (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x1c)) {
        if (!(param_3 & 1)) {
            FUN_020683e8(s);
            return 0;
        }
        FUN_020669dc(param_1);
    }
    idx = (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c)) % *(int *)(param_1 + 0x14);
    ((int *)*(void **)(param_1 + 0x10))[idx] = param_2;
    *(int *)(param_1 + 0x1c) += 1;
    FUN_02066a2c(param_1 + 8);
    FUN_020683e8(s);
    return 1;
}
