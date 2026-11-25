// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
extern void FUN_0203020c(void *, int, int);
extern int FUN_0203068c(void *);
extern void FUN_02076574(void *, int, int);
extern void FUN_020306e4(void *, int, int, int);
extern void FUN_02032dfc(void *, int);
extern int FUN_0206d36c(void *, int *);
extern int DAT_020fbd68;
extern int DAT_020fbd90;
extern int DAT_02108c64;

void *FUN_020a1920(void *param_1, int param_2) {
    int local_1c;
    char local_18[20];
    unsigned short v;
    FUN_0203020c(param_1, param_2, 0x1e);
    FUN_02076574((char *)param_1 + 0x30, FUN_0203068c(param_1), 9);
    *(void **)param_1 = &DAT_020fbd68;
    *(void **)((char *)param_1 + 0x30) = &DAT_020fbd90;
    *(int *)((char *)param_1 + 0x44) = **(int **)((char *)param_1 + 4);
    FUN_020306e4((char *)param_1 + 0x48, *(int *)((char *)param_1 + 0x44) + 8, 1, 0);
    FUN_020306e4((char *)param_1 + 0x50, *(int *)((char *)param_1 + 0x44), 1, 1);
    *(int *)((char *)param_1 + 0x58) = 0;
    *(int *)((char *)param_1 + 0x5c) = 0;
    local_1c = -1;
    FUN_02032dfc(local_18, DAT_02108c64);
    if (FUN_0206d36c(local_18, &local_1c) != 0 && local_1c == 3) {
        *(int *)((char *)param_1 + 0x5c) = 1;
    }
    v = *(int *)((char *)param_1 + 0x5c) != 0 ? 0x1e : 0x1d;
    *(unsigned short *)((char *)param_1 + 0x40) = 0;
    *(unsigned short *)((char *)param_1 + 0x42) = v;
    return param_1;
}
