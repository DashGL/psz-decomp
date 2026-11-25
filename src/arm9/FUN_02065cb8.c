// flags: -O4,p -noThumb
extern volatile unsigned int DAT_027e0000[];
extern unsigned int DAT_02118118[][3];
unsigned int FUN_02065cb8(unsigned int mask) {
    int i;
    volatile unsigned int *p = DAT_027e0000;
    for (i = 0; i < 22; i++, mask >>= 1, p++) {
        if (mask & 1) {
            if (i >= 8 && i <= 11) {
                return DAT_02118118[i - 8][0];
            }
            if (i >= 3 && i <= 6) {
                return DAT_02118118[i + 1][0];
            }
            return *p;
        }
    }
    return 0;
}
