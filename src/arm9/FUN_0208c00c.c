// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern void FUN_02071d0c(void *);
extern int FUN_02077f3c(void);
extern int FUN_02078038(int);
extern void FUN_020c32b4(void *, int);

void FUN_0208c00c(int *p) {
    struct {
        short s0;
        short s1;
        int w4;
        int w8;
        int wc;
    } local;
    FUN_02071d0c(&local);
    int r = FUN_02078038(FUN_02077f3c());
    int v = p[0x13];
    switch (v) {
    case 0:
    case 1:
        local.s0 = v;
        local.w8 = -0x1000;
        local.wc = 0xc3000;
        FUN_020c32b4(&local, r);
        break;
    }
}
