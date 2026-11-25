// flags: -O4,p
struct Rc4Ctx {
    unsigned int i;
    unsigned int j;
    unsigned char *s;
    unsigned int n;
};

void FUN_overlay_15__02120390(struct Rc4Ctx *p, const unsigned char *key, unsigned int keylen, unsigned int n) {
    unsigned char *s = p->s;
    unsigned int i, j, k;
    p->j = 0;
    p->i = 0;
    p->n = n;
    for (i = 0; i < n; i++) {
        s[i] = (unsigned char)i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < n; i++) {
        unsigned char a = s[i];
        unsigned char b;
        j = (j + key[k] + a) % p->n;
        b = s[j];
        s[j] = a;
        s[i] = b;
        if (++k >= keylen) k = 0;
    }
}
