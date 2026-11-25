// flags: -O4,p -noThumb
extern int FUN_02027f8c(void *);
extern int FUN_02068438(void);
extern int FUN_020672b8(void *p);
extern void FUN_0206719c(void *p);
extern int FUN_02026844(void *p0, int p1, int p2, int p3, int p4, int r5, int p5);
extern void FUN_02067220(void *p);

struct S_020266fc {
    unsigned char pad0[0x64];
    char *f64;
    unsigned char pad68[0x8];
    volatile short f70;
    signed char f72;
    signed char f73;
};

static inline int check_open(struct S_020266fc *p0) {
    int r = 0;
    if (p0 != 0) r = (p0->f70 & 1) ? 1 : 0;
    return r;
}

int FUN_020266fc(struct S_020266fc *p0, int p1, int p2, int p3, int p4, int p5) {
    char *r4;
    int r5;

    if (FUN_02027f8c(p0) != 0) {
        return -28;
    }
    if ((p5 & 4) != 0 || p0->f72 == 0) {
        if (p0->f73 == 4) {
            return -28;
        }
        r5 = 0;
    } else {
        if (FUN_02068438() == 0x12) {
            return -28;
        }
        r5 = 1;
    }
    if (!check_open(p0)) {
        return -39;
    }
    {
        signed char s = p0->f73;
        int ok = 1;
        if (s != 0 && s != 4) {
            ok = 0;
        }
        if (ok && ((p0->f70 & 4) == 0 || (p0->f70 & 8) != 0)) {
            return -56;
        }
    }
    r4 = p0->f64;
    if ((r5 & 1) == 0) {
        if (FUN_020672b8(r4 + 0xe0) == 0) {
            return -6;
        }
    } else {
        FUN_0206719c(r4 + 0xe0);
    }
    r5 = FUN_02026844(p0, p1, p2, p3, p4, r5, p5);
    FUN_02067220(r4 + 0xe0);
    return r5;
}
