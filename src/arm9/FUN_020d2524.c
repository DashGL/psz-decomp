// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
extern void *DAT_0211d094;
extern int FUN_020c6e0c(void *);
extern int *FUN_020c6e10(void *, int);
extern void FUN_020c6eec(void *, int);

void FUN_020d2524(int param_1, int param_2, int param_3, int param_4, int param_5) {
    int *r3;
    void *r5;

    if (param_1 < 0) return;
    if (param_1 >= FUN_020c6e0c(DAT_0211d094)) return;
    r3 = FUN_020c6e10(DAT_0211d094, param_1);
    r5 = (void *)r3[6];
    if (r5 != 0) {
        switch (r3[0]) {
        case 0:
            ((void (*)(int, int, int, int, int))r5)(r3[1], r3[2], param_2, param_4, r3[5]);
            break;
        case 1:
            ((void (*)(int, int, int, int, int, int, int, int, int))r5)(r3[1], r3[2], r3[3], r3[4], param_2, param_3, param_4, param_5, r3[5]);
            break;
        case 2:
            ((void (*)(int, int, int, int, int, int, int))r5)(r3[1], r3[2], r3[3], r3[4], param_2, param_3, r3[5]);
            break;
        case 3:
            ((void (*)(int, int, int, int))r5)(r3[1], r3[2], param_2, r3[5]);
            break;
        }
    }
    FUN_020c6eec(DAT_0211d094, param_1);
}
