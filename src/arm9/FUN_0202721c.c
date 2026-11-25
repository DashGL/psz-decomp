// flags: -O4,p -noThumb
extern void *FUN_02025f40(void *, int, unsigned int);
extern void FUN_02065774(const void *, void *, int);
extern unsigned short FUN_02023e84(void);
extern int FUN_02026098(int, void *);
extern void FUN_02027390(void);

struct Sub_2721c {
    char pad0[0xf8];
    int ff8;
    void *ffc;
    unsigned short f100;
    char pad1[0x10c - 0x102];
    int f10c;
};

struct S_2721c {
    char pad0[0xa];
    unsigned short fa;
    char pad1[0x68 - 0xc];
    struct Sub_2721c *f68;
    char pad2[0x73 - 0x6c];
    signed char f73;
    unsigned short f74;
    unsigned short f76;
    int f78;
};

struct Req_2721c {
    char pad0[0xd];
    unsigned char fd;
    char pad1[2];
    void *f10;
    int f14;
    void *f18;
    int f1c;
    unsigned short f20;
    unsigned short pad22;
    unsigned short f24;
    unsigned short f26;
    int f28;
};

int FUN_0202721c(struct S_2721c *p0, const char *p1, int p2, int p3, unsigned short p4, int p5, unsigned int p6) {
    struct Sub_2721c *r4 = p0->f68;
    struct Req_2721c *r5 = (struct Req_2721c *)FUN_02025f40((void *)FUN_02027390, r4->f10c, p6);
    unsigned short old_100;
    char *buf;

    if (r5 == 0) {
        return -33;
    }
    if ((p6 & 1) && p0->f73 != 1) {
        r5->fd = 3;
    } else {
        r5->fd = 0;
    }
    int size;
    buf = (char *)r4->ffc;
    size = r4->ff8;
    if (p3 + p2 < size) {
        r5->f10 = buf + p3;
        r5->f14 = p2;
        r5->f18 = 0;
        p3 = p3 + p2;
        r5->f1c = 0;
    } else {
        r5->f10 = buf + p3;
        r5->f14 = size - p3;
        r5->f18 = buf;
        p3 = p2 - r5->f14;
        r5->f1c = p3;
        FUN_02065774(p1 + r5->f14, r5->f18, p3);
    }
    FUN_02065774(p1, r5->f10, r5->f14);
    old_100 = r4->f100;
    r5->f20 = p3;
    r4->f100 = r5->f20;
    if (p0->f73 == 1) {
        if (p0->f74 == 0) {
            p0->f74 = FUN_02023e84();
            p0->fa = p0->f74;
        }
        r5->f24 = p0->f74;
        if (p0->f78 == 0 || p5 != 0) {
            r5->f28 = p5;
            r5->f26 = p4;
        } else {
            r5->f28 = p0->f78;
            r5->f26 = p0->f76;
        }
    } else {
        r5->f28 = 0;
    }
    if (FUN_02026098(r4->f10c, r5) != 0) {
        p2 = 0;
        r4->f100 = old_100;
    }
    return p2;
}
