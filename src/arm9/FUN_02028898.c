// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -noThumb
struct S21 {
    char f00[0x20];
    char f20[0x30];
    unsigned int f50;
    int f54;
    unsigned short f58;
    unsigned char f5a;
    unsigned char pad5b;
};
extern struct S21 DAT_02108a88[];
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_02065774(void *, void *, int);
extern unsigned long long FUN_02067e0c(void);

void FUN_02028898(char *param_1, int param_2, unsigned short param_3) {
    int irq = FUN_020683d4();
    int i = 0;
    struct S21 *p = DAT_02108a88;
    param_1[0x30] = 0;
    for (; i < 4; i++, p++) {
        if (p->f5a != 0 && p->f54 == param_2 && p->f58 == param_3) {
            FUN_02065774(p, param_1 + 0x74, 0x20);
            FUN_02065774(p->f20, param_1, 0x30);
            p->f50 = (unsigned int)(FUN_02067e0c() >> 16);
            param_1[0x30] = 1;
            break;
        }
    }
    FUN_020683e8(irq);
}
