// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_02068594(unsigned int);
extern unsigned int DAT_02118508;
extern unsigned short DAT_0211850c[];

void FUN_020685d0(unsigned int a, int b) {
    unsigned int mask;
    int irq;
    irq = FUN_020683d4();
    mask = a & DAT_02118508 & 0x1ff;
    while (1) {
        int bit_idx = 0x1f - FUN_02068594(mask);
        unsigned int inv_bit;
        if (bit_idx < 0) {
            break;
        }
        inv_bit = ~(1u << bit_idx);
        mask &= inv_bit;
        if (DAT_0211850c[bit_idx] == b) {
            DAT_0211850c[bit_idx] = 0;
            DAT_02118508 &= inv_bit;
        }
    }
    FUN_020683e8(irq);
}
