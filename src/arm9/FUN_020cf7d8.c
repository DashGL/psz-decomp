// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
struct S8 {
    int f0;
    int f4;
};
extern int FUN_020d1888(void *, void *, int);
extern int FUN_02003f38(void *, const void *, int);
extern void FUN_020d1b58(void *, int, const void *);
extern void FUN_020cb778(void *, int, int);
extern int *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, const void *);
extern int FUN_020cb81c(void *, struct S8, int *, void *, int);
extern void FUN_020ce7d0(void *, void *);
extern const char DAT_020fe034[];
extern const char DAT_020fdfd0[];
extern const char DAT_020fe00c[];

int FUN_020cf7d8(int *param_1, char *param_2, void *param_3) {
    int r6 = *param_1;
    struct S8 val;
    if (FUN_020d1888(param_1, param_3, 1) != 0) {
        return 4;
    }
    if (FUN_02003f38(param_3, DAT_020fe034, 5) != 0) {
        FUN_020d1b58(param_1, 1, DAT_020fdfd0);
        FUN_020cb778(param_1, 3, 1);
        return 3;
    }
    val.f0 = *(int *)(param_2 + 0xc);
    val.f4 = *(int *)(param_2 + 0x10);
    if (val.f0 != 0) {
        int *p = FUN_020c7bcc(8);
        if (p == 0) {
            FUN_020d1b74(param_1, DAT_020fe00c);
            return 1;
        }
        p[1] = *(int *)(r6 + 0x1a0);
        p[0] = 0;
        if (FUN_020cb81c(param_1, val, p, param_2, 0) != 0) {
            goto done;
        }
    }
    FUN_020ce7d0(param_1, param_2);
    return 0;
done:;
}
