// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa2, exact bytes and relocation targets.
// flags: -O4,p
struct S8_sub8 {
    int f0;
    int f4;
    void *f8;
    void *fc;
};
struct S8_subc {
    int f0;
    int f4;
    void *f8;
    void *fc;
    void *f10;
    void *f14;
    int pad[8];
    void *f38;
};
struct S8_main {
    int f0;
    int f4;
    struct S8_sub8 *f8;
    struct S8_subc *fc;
    int f10;
    void *f14;
    int f18;
    void *f1c;
};

extern void FUN_020c7bec(void *);
extern void FUN_020c6de0(void *);
extern void FUN_020ce044(struct S8_main *);

void FUN_020cf558(struct S8_main *param_1) {
    if (param_1->f8 != 0) {
        FUN_020c7bec(param_1->f8->f8);
        param_1->f8->f8 = 0;
        FUN_020c7bec(param_1->f8->fc);
        param_1->f8->fc = 0;
        FUN_020c7bec(param_1->f8);
        param_1->f8 = 0;
    }
    if (param_1->fc != 0) {
        FUN_020c7bec(param_1->fc->f8);
        param_1->fc->f8 = 0;
        FUN_020c7bec(param_1->fc->fc);
        param_1->fc->fc = 0;
        FUN_020c7bec(param_1->fc->f10);
        param_1->fc->f10 = 0;
        FUN_020c7bec(param_1->fc->f14);
        param_1->fc->f14 = 0;
        if (param_1->fc->f38 != 0) {
            FUN_020c6de0(param_1->fc->f38);
            param_1->fc->f38 = 0;
        }
        FUN_020c7bec(param_1->fc);
        param_1->fc = 0;
    }
    FUN_020ce044(param_1);
    FUN_020c7bec(param_1->f14);
    param_1->f14 = 0;
    FUN_020c7bec(param_1->f1c);
    param_1->f1c = 0;
}
