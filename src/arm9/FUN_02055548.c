// flags: -O4,p -noThumb
extern unsigned int FUN_0205fc98(unsigned int);
unsigned int FUN_02055548(char *s, unsigned int bits, unsigned int base, unsigned int count) {
    unsigned int mask = (1u << count) - 1;
    return base + *(unsigned short *)(s + 0x810) * FUN_0205fc98(bits & mask);
}
