// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
extern char DAT_020fe9e4[];
extern char DAT_020fe9d4[];
extern char DAT_020fe990[];
extern void FUN_02000edc(char *, char *, char *, int);
extern void FUN_020d4d60(void *);

struct B {
    int pad[9];
    int f24;
};
struct A {
    int pad[5];
    int f14;
    int f18;
    int f1c;
    void (*f20)(struct A *, struct B *, int, int, int, int, int);
};

int FUN_020d2c48(struct A *param_1, struct B *param_2, int param_3, int param_4, int param_5, int param_6, int param_7) {
    if (param_1 == 0 || param_2 == 0) {
        FUN_02000edc(DAT_020fe9e4, DAT_020fe9d4, DAT_020fe990, 0x3d);
    }
    if (param_1 == 0 || param_2 == 0) {
        return 1;
    }
    if (param_1->f20 == 0) {
        return 1;
    }
    if (param_7 == 0 || param_6 == 0) {
        param_6 = 0;
        param_7 = 0;
    }
    param_1->f1c++;
    param_2->f24++;
    param_1->f20(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
    param_1->f1c--;
    param_2->f24--;
    if (param_1->f14 != 0 && param_1->f1c == 0) {
        FUN_020d4d60(param_1);
        return 0;
    }
    return 1;
}
