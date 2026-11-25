// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern int FUN_02067d94(void);
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern unsigned long long FUN_02067e0c(void);
extern const char D_020fcd00[];
extern const char D_020fcd20[];
extern const char D_020fccdc[];

unsigned int FUN_020c7788(unsigned int *p) {
    if (FUN_02067d94() != 1) {
        FUN_02000edc(D_020fcd00, D_020fcd20, D_020fccdc, 0xc);
    }
    unsigned int r = (FUN_02067e0c() << 6) / 0x01ff6210ULL;
    if (p != 0) {
        *p = r;
    }
    return r;
}
