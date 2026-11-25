// flags: -O4,s -noThumb
unsigned int FUN_02063cf4(unsigned int a, unsigned int b, unsigned int count) {
    unsigned int size;
    if (a > 510 || a < 228)
        return 0;
    if (b > 16 || b < 8)
        return 0;
    size = ((a + 38) * 4 + 330) + count * ((b + 32) * 4 + 112);
    return (int)size < 5600;
}
