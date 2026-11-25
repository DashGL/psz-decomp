// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
struct Elem12 {
    int a, b, c;
};
struct Obj {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    struct Elem12 *f18;
    unsigned char f1c, f1d, f1e, f1f;
    int f20, f24, f28, f2c, f30, f34, f38, f3c, f40, f44, f48, f4c, f50, f54, f58, f5c;
};
struct Glob {
    int pad[3];
    struct Obj *f0c;
};
extern struct Glob DAT_0211de50;
extern void FUN_020dd37c(struct Elem12 *, int);

void FUN_020e26b0(struct Obj *param_1, int param_2, int param_3, struct Elem12 *param_4, int param_5) {
    int i;
    DAT_0211de50.f0c = param_1;
    param_1->f00 = 0;
    DAT_0211de50.f0c->f04 = param_2;
    DAT_0211de50.f0c->f08 = 0;
    {
        struct Obj *p = DAT_0211de50.f0c;
        p->f0c = 0;
        p->f10 = 0;
        p->f14 = param_5;
    }
    DAT_0211de50.f0c->f18 = param_4;
    DAT_0211de50.f0c->f1c = 0;
    DAT_0211de50.f0c->f1d = 0;
    DAT_0211de50.f0c->f1e = 0;
    DAT_0211de50.f0c->f1f = 0;
    DAT_0211de50.f0c->f20 = 0;
    DAT_0211de50.f0c->f24 = 0;
    DAT_0211de50.f0c->f28 = param_3;
    DAT_0211de50.f0c->f2c = 0;
    DAT_0211de50.f0c->f30 = 0;
    DAT_0211de50.f0c->f34 = 0;
    DAT_0211de50.f0c->f38 = 0;
    DAT_0211de50.f0c->f3c = 0;
    DAT_0211de50.f0c->f40 = 0;
    DAT_0211de50.f0c->f44 = 0;
    DAT_0211de50.f0c->f48 = 0;
    DAT_0211de50.f0c->f4c = 0;
    DAT_0211de50.f0c->f50 = 0;
    DAT_0211de50.f0c->f54 = 0;
    DAT_0211de50.f0c->f58 = 0;
    DAT_0211de50.f0c->f5c = 0;
    for (i = 0; i < param_5; i++) {
        FUN_020dd37c(&DAT_0211de50.f0c->f18[i], 0);
    }
}
