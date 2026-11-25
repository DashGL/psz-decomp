// flags: -O4,p
struct S7_a {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
};
struct S7_b {
    int f0;
    int f4;
    char *f8;
};
extern struct S7_a DAT_02100214;
extern struct S7_a DAT_a_02100214;
extern const char DAT_02100278[];
extern struct S7_b DAT_0211dbd8;
extern int DAT_0211dbe4[];
extern int DAT_021181a0[];

extern int FUN_02003e24(int, const char *);
extern int FUN_020de748(int, struct S7_a *);
extern void FUN_020e9ebc(int *);
extern int FUN_020de1bc(int, char *, char *);
extern int FUN_020de820(int);
extern int FUN_02066c60(int);
extern void FUN_020de888(int, int);

int FUN_020ddc48(int param_1) {
    char *p;
    int r;
    if (FUN_02003e24(DAT_02100214.f0, DAT_02100278) != 0) {
        DAT_02100214.f14 = 1;
    }
    p = DAT_0211dbd8.f8;
    DAT_02100214.fc = *(int *)(p + 0x120c);
    DAT_02100214.f10 = *(int *)(p + 0x1210);
    if (FUN_020de748(*(int *)(p + 0x1314), &DAT_a_02100214) != 0) {
        return 4;
    }
    if (param_1 == 1) {
        FUN_020e9ebc(DAT_0211dbe4);
    }
    p = DAT_0211dbd8.f8;
    *(int *)(DAT_0211dbd8.f8 + 0x1004) = FUN_020de1bc(*(int *)(p + 0x1314), p + 0x1200, p + 0x11cc);
    p = DAT_0211dbd8.f8;
    if (*(int *)(p + 0x1004) != 0) {
        return 4;
    }
    if (FUN_020de820(*(int *)(p + 0x1314)) != 0) {
        return 4;
    }
    r = FUN_02066c60(DAT_021181a0[1]);
    FUN_020de888(*(int *)(DAT_0211dbd8.f8 + 0x1314), r - 1);
    return 0;
}
