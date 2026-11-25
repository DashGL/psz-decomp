// flags: -O4,s
int FUN_020a12ec(unsigned char *self) {
    int count = 0, i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            unsigned char *p = self + 3 * i;
            unsigned int bits = p[j];
            int k;
            for (k = 0; k < 8; k++) {
                if ((1 << k) & bits) count++;
            }
        }
    }
    return count;
}
