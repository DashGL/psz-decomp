// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -noThumb
struct S243ec {
    char pad00[8];
    unsigned char f08;
    char pad09[0x33];
    unsigned int f3c;
    unsigned int f40;
    unsigned int f44;
};
extern int FUN_020683d4(void);
extern void FUN_020683e8(int a);
extern void FUN_020014f4(unsigned int a, unsigned int b, unsigned int c);
extern void FUN_02022d90(struct S243ec *a, int b);

void FUN_020243ec(unsigned int param_1, struct S243ec *param_2) {
    int irq = FUN_020683d4();
    unsigned int len = param_2->f44;
    int full = 0;
    if (len == param_2->f3c && param_1 != 0) {
        full = 1;
    }
    if (param_1 >= len) {
        param_2->f44 = 0;
    } else {
        unsigned int base = param_2->f40;
        len -= param_1;
        param_2->f44 = len;
        FUN_020014f4(base, base + param_1, len);
    }
    FUN_020683e8(irq);
    if (param_2->f08 != 10 && param_2->f08 != 11) {
        if (param_2->f44 == 0 || full != 0) {
            FUN_02022d90(param_2, 0x1b);
        }
    }
}
