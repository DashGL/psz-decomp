// flags: -O4,s -noThumb
extern unsigned int FUN_0206a0cc(unsigned int);
extern unsigned int FUN_020698e8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
unsigned int FUN_02069678(unsigned int a, unsigned int b, unsigned int mask, unsigned int d) {
    int i;
    unsigned int bits = mask;
    for (i = 0; i < 8 && bits; i++, bits >>= 1) {
        if (bits & 1)
            FUN_0206a0cc(i);
    }
    return FUN_020698e8(13, a, b, mask, d);
}
