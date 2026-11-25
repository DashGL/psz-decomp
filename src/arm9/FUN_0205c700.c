// flags: -O4,s -noThumb
struct DivReg {
    volatile unsigned short cnt;
    unsigned short pad[7];
    volatile unsigned int numer_l;
    volatile unsigned int numer_h;
    volatile unsigned long long denom;
};
unsigned int FUN_0205c700(unsigned int numerator, unsigned int denominator) {
    struct DivReg *reg = (struct DivReg *)0x04000280;
    reg->cnt = 0;
    reg->numer_l = numerator;
    reg->denom = (unsigned long long)denominator;
    while (reg->cnt & 0x8000) {}
    return *(volatile unsigned int *)0x040002a0;
}
