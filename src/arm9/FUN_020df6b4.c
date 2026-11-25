// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
struct Big {
    char pad0[0x1000];
    char f1000[0x11c];
    char f111c[0x6c];
    int f1188;
};
extern struct Big *D_0211dbfc;
extern int FUN_020669c8(void *);
extern void FUN_020666f8(void *, void (*)(void *), void *, void *, int, int);
extern void FUN_02066a94(void *);
extern void FUN_020df70c(void *);

void FUN_020df6b4(void) {
    if (D_0211dbfc->f1188 == 0 || FUN_020669c8(D_0211dbfc->f111c) != 0) {
        FUN_020666f8(D_0211dbfc->f111c, FUN_020df70c, D_0211dbfc, D_0211dbfc->f1000, 0x1000, 0x10);
        FUN_02066a94(D_0211dbfc->f111c);
    }
}
