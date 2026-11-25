// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,s
struct S6_vec {
    int a, b, c;
};
extern void FUN_0203020c(void *, int, int);
extern void *FUN_0200c2dc(int, int, int, void *(*)(void *), void *(*)(void *));
extern void *FUN_020aea90(void *);
extern void *FUN_020aead0(void *);
extern int FUN_020304f8(void *);
extern void FUN_020aeb64(void *, int);
extern void FUN_020af9d8(void *, struct S6_vec *);
extern void FUN_020a18e8(void *, void *);
extern int DAT_020fbd48[];

char *FUN_020a16c0(char *param_1, int param_2) {
    int i;
    FUN_0203020c(param_1, param_2, 0x1d);
    *(int **)param_1 = DAT_020fbd48;
    *(int *)(param_1 + 0x30) = **(int ***)(param_1 + 4);
    *(int *)(param_1 + 0x34) = 0;
    *(int *)(param_1 + 0x38) = 0;
    *(int *)(param_1 + 0x3c) = 0;
    *(short *)(param_1 + 0x40) = 0;
    *(short *)(param_1 + 0x42) = 0;
    if (**(int **)(param_1 + 0x30) == 0) {
        *(short *)(param_1 + 0x42) = 8;
    } else {
        *(short *)(param_1 + 0x42) = **(int **)(param_1 + 0x30);
    }
    *(void **)(param_1 + 0x34) = FUN_0200c2dc(*(short *)(param_1 + 0x42), 0x74, 8, FUN_020aea90, FUN_020aead0);
    if (*(void **)(param_1 + 0x34) != 0) {
        for (i = 0; i < *(short *)(param_1 + 0x42); i++) {
            struct S6_vec v;
            int off = i * 0x74;
            FUN_020aeb64(*(char **)(param_1 + 0x34) + off, FUN_020304f8(param_1));
            v = *(struct S6_vec *)(param_1 + 0x1c);
            FUN_020af9d8(*(char **)(param_1 + 0x34) + off, &v);
            FUN_020a18e8(param_1, *(char **)(param_1 + 0x34) + off);
        }
    }
    return param_1;
}
