// version: 1.2/sp2p3
// flags: -noThumb -O4,p
struct RC4 {
    unsigned int x;
    unsigned int y;
    unsigned int s[256];
};

void FUN_020b9a3c(struct RC4 *param_1, unsigned char *param_2, unsigned int param_3) {
    unsigned int *s;
    int i;
    unsigned int k;
    unsigned int j;

    if (param_3 > 0x10) {
        param_3 = 0x10;
    }
    param_1->x = 0;
    param_1->y = 0;
    s = param_1->s;
    for (i = 0; i < 0x100; i++) {
        s[i] = i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < 0x100; i++) {
        unsigned int si = s[i];
        j = (j + (si + param_2[k])) & 0xff;
        k++;
        if (k == param_3) {
            k = 0;
        }
        s[i] = s[j];
        s[j] = si;
    }
    for (i = 0; i < 0x100; i++) {
        s[i] <<= 24;
    }
}
