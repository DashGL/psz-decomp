// flags: -O4,p -noThumb
struct Global240B0 {
    unsigned char pad[0x50];
    int f50;
};

extern struct Global240B0 DAT_02107054;
extern int FUN_02023f2c(void);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_02022d1c(void *, int, int);
extern int FUN_020683d4(void);
extern void FUN_020669dc(int);
extern void FUN_020683e8(int);

int FUN_020240b0(unsigned char *p0) {
    unsigned int r7;
    int r8 = FUN_02023f2c();
    for (r7 = 0; r7 < 3; r7++) {
        *(int *)(p0 + 0x28) = r8;
        p0[8] = 2;
        *(unsigned int *)(p0 + 0x10) = (unsigned int)(FUN_02067e0c() >> 16);
        FUN_02022d1c(p0, 2, 0x18);
        int irq = FUN_020683d4();
        if (p0[8] == 2 && DAT_02107054.f50 != 0) {
            *(int *)(p0 + 4) = 1;
            FUN_020669dc(0);
        }
        FUN_020683e8(irq);
        if (p0[8] == 4) {
            return 0;
        }
        if (DAT_02107054.f50 == 0) {
            break;
        }
    }
    return 1;
}
