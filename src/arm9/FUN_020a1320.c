// flags: -O4,s
extern int FUN_020a12ec(void *);
int FUN_020a1320(unsigned char *s, int index) {
    int idx = index - 1;
    if (idx >= 0 && idx < 16) return FUN_020a12ec(s + 12 * idx);
    if (idx == 16) {
        int count = 0;
        int i;
        unsigned int bits;
        int j;
        for (i = 0; i < 8; i++) {
            bits = s[192 + i];
            for (j = 0; j < 8; j++) {
                if ((1 << j) & bits) count++;
            }
        }
        return count;

    }
    return 0;
}