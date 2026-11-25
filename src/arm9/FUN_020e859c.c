// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern unsigned long long FUN_02067e0c(void);
extern struct {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    int f4;
    int f8;
    int f0c;
    unsigned long long f10;
    unsigned long long f18;
} *D_0211de64;

void FUN_020e859c(int a) {
    if (D_0211de64 != 0 && D_0211de64->f0 != 0) {
        D_0211de64->f8 = 0;
        D_0211de64->f0c = 0;
        D_0211de64->f2 = 0;
        D_0211de64->f18 = FUN_02067e0c();
        if (a == 0) {
            D_0211de64->f10 = FUN_02067e0c();
        }
    }
}
