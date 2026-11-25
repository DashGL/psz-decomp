// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
struct Big {
    char f0[0x108];
    char f108[0x10c];
};
struct Ctx {
    int f0;
    char pad[0x14];
    int f18;
    char pad2[0x34 - 0x1c];
    void (*f34)(int, int, void *, int);
    int f38;
    char pad3[0x44 - 0x3c];
    void (*f44)(int, int);
    int f48;
};
struct Glob {
    char pad[0xc];
    struct Ctx *fc;
};
extern struct Glob D_0211de50;
extern int FUN_020e2470(int, void *);

void FUN_020e2b28(int a) {
    struct Big s;
    struct Ctx *c = D_0211de50.fc;
    if (c->f44 != 0 && c->f0 != 1) {
        c->f44(a, c->f48);
    }
    if (D_0211de50.fc->f34 != 0) {
        int r = FUN_020e2470(D_0211de50.fc->f18 + a * 12, s.f108);
        D_0211de50.fc->f34(a, r, s.f108, D_0211de50.fc->f38);
    }
}
