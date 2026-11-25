// flags: -O4,p -noThumb
extern int FUN_020c63d0(const void *, const void *, void *, unsigned int);
extern void FUN_0206740c(void *, unsigned int);
extern void FUN_02067448(void *, unsigned int);

void FUN_020c52b8(unsigned int *p) {
    unsigned char key[16];
    int i;
    unsigned int marker = p[-1];
    unsigned int length;
    for (i = 0; i < 16; i++) {
        key[i] = (unsigned char)(marker >> ((i % 4) * 8));
        if (i % 15 == 0) key[i] ^= 255;
    }
    length = 0;
    while (marker != p[length]) length++;
    length <<= 2;
    if (length) FUN_020c63d0(key, p, p, length);
    FUN_0206740c(p, length);
    FUN_02067448(p, length);
}
