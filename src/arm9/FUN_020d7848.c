// flags: -O4,s
void FUN_020d7848(unsigned char *p) {
    int i, value;
    p[256] = 1;
    p[257] = 3;
    p[258] = 5;
    p[259] = 7;
    p[260] = 11;
    value = 255;
    for (i = 0; i < 256; i++) {
        p[i] = value;
        value--;
    }
}
