// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
struct Glob {
    int f0;
    int f4;
    char *f8;
};
extern struct Glob D_0211dbd8;
extern void FUN_0206719c(void *);
extern void FUN_02067220(void *);
extern void FUN_020de90c(void);
extern void FUN_02066998(void *);

void FUN_020ddaf4(void) {
    if (D_0211dbd8.f8 != 0) {
        FUN_0206719c(D_0211dbd8.f8 + 0x13d8);
        *(int *)(D_0211dbd8.f8 + 0x13f0) = 1;
        FUN_02067220(D_0211dbd8.f8 + 0x13d8);
        if (*(int *)(D_0211dbd8.f8 + 0x1314) != 0) {
            FUN_020de90c();
        }
        if (*(int *)(D_0211dbd8.f8 + 0x1384) != 0) {
            FUN_02066998(D_0211dbd8.f8 + 0x1318);
        }
    }
}
