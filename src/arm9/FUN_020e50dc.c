// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
struct State {
    int f0;
    int f4;
    int f8;
    char pad[0x10];
    unsigned char f1c;
    unsigned char f1d;
};
extern struct State D_0211de64;
extern void FUN_020e9610(int);
extern void FUN_020e05d8(int, int, int);
extern void FUN_020e8374(void);

void FUN_020e50dc(void) {
    FUN_020e9610(0);
    if (D_0211de64.f8 != 0) {
        FUN_020e05d8(4, D_0211de64.f8, 0);
        D_0211de64.f8 = 0;
    }
    FUN_020e8374();
    if (D_0211de64.f0 != 0) {
        FUN_020e05d8(4, D_0211de64.f0, 0);
        D_0211de64.f0 = 0;
    }
    D_0211de64.f1c = 0;
    D_0211de64.f1d = 0;
}
