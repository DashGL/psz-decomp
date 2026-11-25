// flags: -O4,p -noThumb
struct State10d3c {
    char pad00[0xc0];
    unsigned char fc0;
    char padc1[3];
    unsigned short fc4;
    char padc6[0x4a];
    unsigned int f110;
    char pad114[0x28];
    int (*f13c)(void *, void *, void *, int);
    int f140;
    unsigned int f144;
    unsigned int f148;
    char pad14c[0x14];
    unsigned int f160;
    int (*f164)(struct State10d3c *, int);
    void (*f168)(struct State10d3c *);
};

extern int *FUN_0200ed18(unsigned int);
extern void FUN_020116a8(struct State10d3c *, int);

void FUN_02010d3c(struct State10d3c *s) {
    unsigned int v8[2];
    unsigned long long out;
    int *p;
    unsigned char c0;
    unsigned short c4;

    v8[0] = s->f148;
    v8[1] = s->f144;
    out = s->f144;
    if (s->f13c(0, v8, &out, s->f140) == 0) {
        return;
    }
    p = FUN_0200ed18((unsigned int)out);
    if (p == 0) {
        return;
    }
    c0 = s->fc0;
    c4 = s->fc4;
    s->f168(s);
    FUN_020116a8(s, *p);
    if (s->f164(s, *p) == 0) {
        return;
    }
    if (c4 != s->fc4) {
        return;
    }
    if (c0 == 0 && s->fc0 != 0) {
        return;
    }
    if (c0 != 0 && s->fc0 == 0) {
        return;
    }
    s->f144 = (unsigned int)out;
    s->f160 = (unsigned int)(((unsigned long long)s->fc4 * (unsigned int)(out >> 32)) / 1000ULL);
    if (s->f160 != 0 && s->fc0 == 2) {
        s->f110 |= 0x10;
    } else {
        s->f110 &= ~0x10;
    }
    s->f110 &= ~0x20;
}
