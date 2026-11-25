// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern void *FUN_020c6e10(int, int);
extern void FUN_020d4d60(void *);
extern const char DAT_020fe9fc[];
extern const char DAT_020fe9d4[];
extern const char DAT_020fe944[];

int FUN_020d2ee8(void *param_1, int param_2, int param_3, int param_4, int param_5) {
    void *cb;
    void *sub;
    if (param_1 == 0) {
        FUN_02000edc(DAT_020fe9fc, DAT_020fe9d4, DAT_020fe944, 0x101);
    }
    if (param_1 == 0) {
        return 1;
    }
    cb = FUN_020c6e10(*(int *)((char *)param_1 + 0x98), param_2);
    if (cb == 0) {
        return 1;
    }
    if (param_4 == 0 || param_3 == 0) {
        param_3 = 0;
        param_4 = 0;
    }
    *(int *)((char *)param_1 + 0x24) += 1;
    *(int *)(*(int *)((char *)param_1 + 8) + 0x1c) += 1;
    (*(void (**)(void *, int, int, int, int))cb)(param_1, param_2, param_3, param_4, param_5);
    *(int *)((char *)param_1 + 0x24) -= 1;
    *(int *)(*(int *)((char *)param_1 + 8) + 0x1c) -= 1;
    sub = *(void **)((char *)param_1 + 8);
    if (*(int *)((char *)sub + 0x14) != 0 &&
        *(int *)((char *)sub + 0x1c) == 0) {
        FUN_020d4d60(sub);
        return 0;
    }
    return 1;
}
