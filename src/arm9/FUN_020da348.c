// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
extern void FUN_020d9a44(int, int, int, unsigned int *, unsigned short *);
extern int FUN_020d8f78(int, unsigned int, unsigned short);
extern int FUN_020d8668(int, unsigned int, unsigned short);
extern int FUN_020d86e4(int);
extern int FUN_020d9030(int, int);
extern int FUN_020d9a88(int, int, int, int, int);
extern void FUN_020d8f18(int, int);

int FUN_020da348(int param_1, int param_2, int param_3) {
    unsigned int sp0c;
    unsigned short sp08;
    int r6 = 0;
    int r4;

    if (param_3 < 5) {
        return 4;
    }
    FUN_020d9a44(param_1, param_2, param_3, &sp0c, &sp08);
    r4 = FUN_020d8f78(param_1, sp0c, sp08);
    if (r4 == -1) {
        r6 = FUN_020d8668(param_1, sp0c, sp08);
        if (FUN_020d86e4(r6) != 0) {
            return 5;
        }
    } else {
        r6 = FUN_020d9030(param_1, r4);
    }
    if (FUN_020d9a88(param_1, r6, param_2, param_3, 0) < 0) {
        return 4;
    }
    if (r4 == -1) {
        FUN_020d8f18(param_1, r6);
    }
    ((void (*)(int, int, int, int))(*(int *)(param_1 + 0x488)))(param_1, 1, r6, *(int *)(param_1 + 0x494));
    return 0;
}
