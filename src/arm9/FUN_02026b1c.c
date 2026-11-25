// flags: -O4,p -noThumb
extern int FUN_02024388(int *p);
extern void FUN_02066c68(int a);
extern void FUN_02065774(const void *src, void *dst, unsigned int sz);
extern void FUN_0202447c(unsigned int sz);
extern int FUN_02026954(void *a, void *b, unsigned int c, int d, int e);
extern void FUN_02026cc8(void *a);

struct S_02026b1c_sub {
    unsigned char pad0[0xf8];
    int ff8;
    unsigned short ffc;
};

struct S_02026b1c_7 {
    unsigned char pad0[8];
    unsigned char f8;
    unsigned char pad9[0x5b];
    struct S_02026b1c_sub *f64;
    unsigned char pad68[8];
    short f70;
    signed char f72;
    signed char f73;
};

struct S_02026b1c_0 {
    int f0;
    struct S_02026b1c_7 *f4;
    int f8;
    int fc;
    void *f10;
    unsigned int f14;
    int f18;
    int f1c;
};

static inline int is_idle_or_4(struct S_02026b1c_7 *p) {
    return p->f73 == 0 || p->f73 == 4;
}

int FUN_02026b1c(struct S_02026b1c_0 *p0) {
    int sp10;
    struct S_02026b1c_7 *r7 = p0->f4;
    void *sp0c = p0->f10;
    struct S_02026b1c_sub *r8 = r7->f64;
    int sp08 = p0->f18;
    int sb;
    unsigned int sl = p0->f14;
    int sp04 = p0->f1c;
    int r0;
    int r4;

    sb = r8->ff8;
    for (;;) {
        r0 = FUN_02024388(&sp10);
        if (r0 == 0 || sp10 - sb > 0) {
            break;
        }
        if (is_idle_or_4(r7) && r7->f8 != 4) {
            r0 = 0;
            break;
        }
        FUN_02066c68(10);
    }
    if (r7->f70 & 0x80) {
        return -15;
    }
    if (r7->f73 == 4) {
        if (r0 == 0) {
            return 0;
        }
        if (sl > (unsigned int)sp10) {
            sl = sp10;
        }
        FUN_02065774((const void *)r0, sp0c, sl);
        FUN_0202447c(sl);
        return sl;
    }
    if (r0 == 0) {
        r4 = 0;
    } else {
        r4 = FUN_02026954(r7, sp0c, sl, sp08, sp04);
    }
    if (r4 <= 0) {
        return r4;
    }
    if (r8->ff8 >= r8->ffc) {
        FUN_02026cc8(r7);
    }
    return r4;
}
