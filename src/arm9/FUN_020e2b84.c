// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    int f8;
    unsigned long long fc;
} Sub;
typedef struct {
    int f0, f4, f8;
    Sub *fc;
} Global;
extern Global D_0211de50;
extern unsigned long long FUN_02067e0c(void);
extern unsigned long long FUN_0200a338(unsigned long long, unsigned long long);
extern int FUN_020c88ac(int);
int FUN_020e2b84(void) {
    int r4 = 0;
    Sub *r5 = D_0211de50.fc;
    if (FUN_0200a338((FUN_02067e0c() - r5->fc) << 6, 0x82eaULL) >= 0x12cULL) {
        r5->f8++;
        r4 = FUN_020c88ac(D_0211de50.fc->f4);
        D_0211de50.fc->fc = FUN_02067e0c();
    }
    return r4;
}
