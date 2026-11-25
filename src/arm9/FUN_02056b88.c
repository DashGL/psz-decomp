// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x154, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Inner_56b88 {
    int f0;
};
struct S_56b88 {
    struct Inner_56b88 *f0;
    int f4;
    unsigned char pad8[0x10c];
    volatile unsigned int f114;
};

extern int FUN_0206889c(int, int);
extern void FUN_02068444(int);
extern void FUN_0206740c(void *, int);
extern void FUN_02067430(void);
extern int FUN_020688c0(int, int, int);
extern int FUN_020683d4(void);
extern void FUN_020669dc(int);
extern void FUN_020683e8(int);
extern void FUN_020673d4(void *, int);

int FUN_02056b88(struct S_56b88 *p0, int p1, int p2) {
    int state;
    if (!(p0->f114 & 2)) {
        p0->f114 |= 2;
        while (FUN_0206889c(11, 1) == 0) {
            FUN_02068444(100);
        }
        FUN_02056b88(p0, 0, 1);
    }
    FUN_0206740c(p0->f0, 0x60);
    FUN_02067430();
    do {
        p0->f4 = p1;
        p0->f114 |= 0x20;
        while (FUN_020688c0(11, p1, 1) < 0) {
        }
        if (p1 == 0) {
            struct Inner_56b88 *f0 = p0->f0;
            while (FUN_020688c0(11, (int)f0, 1) < 0) {
            }
        }
        {
            int irq = FUN_020683d4();
            while (p0->f114 & 0x20) {
                FUN_020669dc(0);
            }
            FUN_020683e8(irq);
        }
        FUN_020673d4(p0->f0, 0x60);
        state = p0->f0->f0;
    } while (state == 4 && --p2 > 0);
    return state == 0;
}
