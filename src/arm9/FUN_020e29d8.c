// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
struct Big {
    int f0;
    int f4;
    char f8[0x100];
    char f108[0x10c];
};
struct Ctx {
    char pad[0x34];
    void (*f34)(int, unsigned char, void *, int);
    int f38;
};
struct Glob {
    char pad[0xc];
    struct Ctx *fc;
};
extern struct Glob D_0211de50;
extern int FUN_020e2a58(int);
extern void FUN_020c8d2c(int, int, void *);

void FUN_020e29d8(int a, int *b) {
    struct Big s;
    if (D_0211de50.fc->f34 != 0) {
        int r = FUN_020e2a58(b[0]);
        if (r != -1) {
            FUN_020c8d2c(a, b[2], &s);
            D_0211de50.fc->f34(r, (unsigned char)s.f4, s.f108, D_0211de50.fc->f38);
        }
    }
}
