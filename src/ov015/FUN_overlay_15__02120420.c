// flags: -O4,p
unsigned int FUN_overlay_15__02120420(unsigned int *p) {
    unsigned int n = p[3];
    unsigned char *s = (unsigned char *)p[2];
    unsigned int i = (unsigned char)((p[0] + 1) % n);
    unsigned int a = s[i];
    unsigned int j = (unsigned char)((a + p[1]) % n);
    unsigned int b = s[j];
    p[0] = i;
    p[1] = j;
    s[j] = a;
    s[i] = b;
    return s[(a + b) % p[3]];
}
