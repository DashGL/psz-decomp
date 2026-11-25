// flags: -O4,p -noThumb
extern int FUN_020c6378(const void *, const void *, void *, unsigned int);
extern void FUN_0206740c(void *, unsigned int);
extern void FUN_02067448(void *, unsigned int);

void FUN_020c5380(unsigned int *p) {
    unsigned char key[16];
    int i;
    unsigned int marker = p[1];
    unsigned int length;
    for (i = 0; i < 16; i++) {
        key[i] = (unsigned char)(marker >> ((i % 4) * 8));
        if (i % 15 == 0) {
            key[i] ^= 0xff;
        }
    }
    while (*p != marker) {
        --p;
    }
    length = 0;
    while (p[length + 1] != marker) {
        length++;
    }
    length <<= 2;
    if (length) {
        FUN_020c6378(key, p + 1, p + 1, length);
    }
    FUN_0206740c(p + 1, length);
    FUN_02067448(p + 1, length);
}
