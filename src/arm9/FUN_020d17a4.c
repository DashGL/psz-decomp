// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
struct Pair {
    int a;
    int b;
};
extern int FUN_020d1888(void *, const char *, int);
extern int FUN_02003f38(const char *, const char *, int);
extern void FUN_020d1b58(void *, int, const char *);
extern void FUN_020cb778(void *, int, int);
extern int *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, const char *);
extern int FUN_020cb81c(void *, struct Pair, int *, void *, int);
extern void FUN_020ce7d0(void *, void *);
extern const char DAT_020fe534[];
extern const char DAT_020fe4f4[];
extern const char DAT_020fe524[];

int FUN_020d17a4(void *param_1, int *param_2, const char *param_3) {
    struct Pair pair;
    if (FUN_020d1888(param_1, param_3, 1) != 0) {
        return 4;
    }
    if (FUN_02003f38(param_3, DAT_020fe534, 4) != 0) {
        FUN_020d1b58(param_1, 1, DAT_020fe4f4);
        FUN_020cb778(param_1, 3, 1);
        return 3;
    }
    pair.a = param_2[3];
    pair.b = param_2[4];
    if (pair.a != 0) {
        int *p = FUN_020c7bcc(4);
        int res;
        if (p == 0) {
            FUN_020d1b74(param_1, DAT_020fe524);
            return 1;
        }
        *p = 0;
        res = FUN_020cb81c(param_1, pair, p, param_2, 0);
        if (res != 0) {
            return res;
        }
    }
    FUN_020ce7d0(param_1, param_2);
    return 0;
}
