// flags: -O4,p
unsigned char FUN_020ea140(const unsigned char *p) {
    int n;
    int i, j;
    for (i = 0, n = 0; i < 4; i++) {
        for (j = 0; j < 8; j++) {
            if ((p[i] >> j) & 1) {
                n++;
            }
        }
    }
    return n;
}
