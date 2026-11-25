// Verified 2026-11-12: pinned 2.0/sp2, full extent 0xa8, exact bytes and relocation targets.
// version: 2.0/sp2
// flags: -noThumb
struct S28 {
    int a;
    int b;
    int **c;
};
extern struct S28 DAT_0211817c;
extern void FUN_02067fd8(void *);
extern int FUN_020683d4(void);
extern void FUN_02068114(void *, unsigned long long, void (*)(void *), void *);
extern void FUN_02066d10(void *);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);

void FUN_02066c68(unsigned int param_1) {
    int * volatile sp04;
    unsigned char alarm[0x2c];
    int irq;

    FUN_02067fd8(alarm);
    sp04 = DAT_0211817c.c[0];
    irq = FUN_020683d4();
    sp04[0x2c] = (int)alarm;
    FUN_02068114(alarm, (param_1 * 0x82eaULL) >> 6, FUN_02066d10, (void *)&sp04);
    if (sp04 != 0) {
        do {
            FUN_020669dc(0);
        } while (sp04 != 0);
    }
    FUN_020683e8(irq);
}
