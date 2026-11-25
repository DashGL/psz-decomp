// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,s
struct S9_copy {
    int a[8];
};
extern int DAT_020fc68c;
extern int DAT_020fc6a4;
extern struct S9_copy DAT_020f5764;
extern int DAT_020f5744;
extern void FUN_020af01c(int, int, int);
extern void FUN_020c2b50(int);
extern void FUN_020c3564(int);
extern void FUN_020a45a4(int);
extern void FUN_020b2090(int, int, int, int);
extern void FUN_020c2b84(int, int *, int, int, int);
extern int FUN_0205e0c4(void);
extern void FUN_0206557c(int, int, int);
extern void FUN_020c35d4(int, struct S9_copy *);
extern void FUN_020c38f0(int, int);
extern int FUN_020c1fc8(void);
extern int FUN_020c2438(int, int, int, int);

int FUN_020b1fd8(int param_1, int param_2) {
    struct S9_copy tmp;
    int r4;
    FUN_020af01c(param_1, 0, 0);
    *(int *)param_1 = (int)&DAT_020fc68c;
    *(int *)(param_1 + 0x10) = param_2;
    FUN_020c2b50(param_1 + 0x14);
    *(int *)(param_1 + 0x18) = -1;
    FUN_020c3564(param_1 + 0x1c);
    *(int *)(param_1 + 0x68) = 7;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 4) = 0;
    *(int *)(param_1 + 0xc) = 0;
    FUN_020a45a4(8);
    FUN_020b2090(0, 1, 4, 4);
    FUN_020c2b84(param_1 + 0x14, &DAT_020fc6a4, 7, 4, 4);
    FUN_0206557c(0, FUN_0205e0c4(), 0x800);
    tmp = DAT_020f5764;
    FUN_020c35d4(param_1 + 0x1c, &tmp);
    FUN_020c38f0(param_1 + 0x1c, 0);
    r4 = DAT_020f5744;
    *(int *)(param_1 + 0x18) = FUN_020c2438(FUN_020c1fc8(), r4, r4, 2);
    return param_1;
}
