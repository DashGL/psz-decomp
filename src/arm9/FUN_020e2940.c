// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
struct Ctx {
    int f0;
    char pad[0x1d - 4];
    unsigned char f1d;
    char pad2[0x2c - 0x1e];
    void (*f2c)(int, unsigned char, int);
    int f30;
    char pad3[0x5c - 0x34];
    int f5c;
};
struct Glob {
    char pad[0xc];
    struct Ctx *fc;
};
extern struct Glob D_0211de50;
extern void FUN_020e056c(int, int);
extern void FUN_020e05d8(int, int, int);
extern void FUN_020e2be0(void);

void FUN_020e2940(int a, int b) {
    if (D_0211de50.fc != 0 && a != 0) {
        int st;
        FUN_020e056c(a, b);
        st = D_0211de50.fc->f0;
        if (st != 0 && st != 2) {
            if (D_0211de50.fc->f5c != 0) {
                FUN_020e05d8(4, D_0211de50.fc->f5c, 0);
                D_0211de50.fc->f5c = 0;
            }
            D_0211de50.fc->f2c(a, D_0211de50.fc->f1d, D_0211de50.fc->f30);
        }
        FUN_020e2be0();
    }
}
