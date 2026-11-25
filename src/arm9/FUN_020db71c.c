// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020db76c(unsigned char);
extern void FUN_020df62c(void);
extern void FUN_020df594(void);
extern int FUN_020db7d0(unsigned char);
int FUN_020db71c(unsigned char *a) {
    unsigned char v = *a;
    if (v <= 0xa) {
        int r = FUN_020db76c(v);
        if (r == 1) {
            *a = 0;
            return 1;
        }
        if (r == -1) {
            *a = 0x12;
            return 1;
        }
    } else if (v == 0xe) {
        FUN_020df62c();
        FUN_020df594();
        *a = 0xc;
    } else if (v < 0x12) {
        if (FUN_020db7d0(v) == 1) {
            *a = 0xa;
        }
    }
    return 0;
}
