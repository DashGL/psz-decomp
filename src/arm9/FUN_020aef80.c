// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
extern void FUN_020af01c(void *, int, int);
extern void FUN_020c2b50(void *);
extern void FUN_020c3564(void *);
extern int FUN_020c10ec(void);
extern void FUN_0200c938(void *, int);
extern void FUN_020af404(void *);
extern void FUN_020af4d0(void *);
extern void FUN_020af518(void *);
extern int DAT_020fc4e0;

void *FUN_020aef80(char *param_1, int param_2, int param_3) {
    int count;
    FUN_020af01c(param_1, 0x40, 1);
    *(int **)param_1 = &DAT_020fc4e0;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_020c2b50(param_1 + 0x14);
    FUN_020c3564(param_1 + 0x18);
    *(int *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x58) = -1;
    *(int *)(param_1 + 0x5c) = -1;
    *(int *)(param_1 + 0x60) = FUN_020c10ec();
    *(int *)(param_1 + 0x64) = 0;
    FUN_0200c938(param_1 + 0x68, 0x10);
    count = *(int *)(param_1 + 0x60);
    if (param_3 >= count) {
        param_3 = count - 1;
    }
    if (param_3 < 0) {
        param_3 = 0;
    }
    if (param_3 < 4) {
        *(int *)(param_1 + 0x54) = param_3;
    } else if (param_3 + 4 > count) {
        int v = (param_3 + 4) - count;
        *(int *)(param_1 + 0x54) = v;
        if (v >= 4) {
            *(int *)(param_1 + 0x54) = 3;
        }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 4) = param_3;
    if (*(int *)(param_1 + 0x10) < 0 || *(int *)(param_1 + 0x10) >= 2) {
        *(int *)(param_1 + 0x10) = 0;
    }
    FUN_020af404(param_1);
    FUN_020af4d0(param_1);
    FUN_020af518(param_1);
    return param_1;
}
