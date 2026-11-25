// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020c7694(int);
extern int FUN_020c74fc(int, int, int, int);
extern void FUN_020d9280(void *);
extern void FUN_020d7994(void *, int, int);
extern int FUN_020d9d60(void *);
extern int FUN_020da3e8(void *);

int FUN_020da518(char *param_1) {
    int r4;
    int n;
    int r6;
    if (FUN_020c7694(*(int *)(param_1 + 0x6b4)) == 0) {
        return 0;
    }
    r4 = *(int *)(param_1 + 0x80);
    n = FUN_020c74fc(*(int *)(param_1 + 0x6b4), *(int *)(param_1 + 0x7c) + r4, 0x1000 - r4, 0);
    if ((unsigned int)(n + 1) <= 1u) {
        FUN_020d9280(param_1);
        return 3;
    }
    r6 = 0;
    *(int *)(param_1 + 0x80) += n;
    if (*(int *)param_1 == 2 || *(int *)(param_1 + 0x7cc) > 0) {
        FUN_020d7994(param_1 + 0x6c0, *(int *)(param_1 + 0x7c) + r4, *(int *)(param_1 + 0x80) - r4);
    }
    if (*(int *)param_1 == 3) {
        r6 = FUN_020d9d60(param_1);
    }
    if (r6 != 0) {
        return r6;
    }
    if (*(int *)param_1 == 2 && *(int *)(param_1 + 0x80) > 0) {
        return FUN_020da3e8(param_1);
    }
    return 0;
}
