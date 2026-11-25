// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -O4,p
struct S15_32 {
    int a[8];
};

extern void FUN_020d1b74(int *, const char *);
extern int FUN_020cbd88(int *, const char *, const char *, const char *, const char *, const char *, int, int, int, int, void (*)(int *, struct S15_32 *, int), int, int);
extern const char DAT_020fcd90[];
extern const char DAT_020fcda0[];

int FUN_020c890c(int *param_1, const char *param_2, const char *param_3, int param_4, int param_5, void (*param_6)(int *, struct S15_32 *, int), int param_7) {
    int r6;
    if (param_1 == 0 || (r6 = *param_1) == 0) {
        return 2;
    }
    if (param_2 == 0 || *param_2 == 0) {
        return 2;
    }
    if (param_3 == 0 || *param_3 == 0) {
        return 2;
    }
    if (param_6 == 0) {
        FUN_020d1b74(param_1, DAT_020fcd90);
        return 2;
    }
    if (*(int *)(r6 + 0x108) != 0) {
        struct S15_32 local = {0};
        param_6(param_1, &local, param_7);
        return 0;
    }
    return FUN_020cbd88(param_1, DAT_020fcda0, DAT_020fcda0, DAT_020fcda0, DAT_020fcda0, param_2, (int)param_3, 0, param_4, 0, (void (*)(int *, struct S15_32 *, int))param_5, (int)param_6, param_7);
}
