// flags: -O4,p -noThumb
#pragma opt_strength_reduction off
void FUN_02018b90(unsigned int *bits, unsigned char *p) {
    int i;
    while (p) {
        for (i = 0; i < p[25]; i++) {
            if (*(unsigned short *)(p + 26 + 2 * i) & 256) {
                bits[i >> 5] |= 1u << (i & 31);
            }
        }
        p = *(unsigned char **)(p + 16);
    }
}
