// flags: -O4,p -noThumb
extern void FUN_020654b4(int, void *, int);

struct Sub_12cf4 {
    unsigned short f0[0x280];
    unsigned short f500[0x20];
};
extern struct Sub_12cf4 DAT_02103794[];
extern unsigned short DAT_02103790;

struct S_12cf4 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned short fa;
    unsigned short fc;
    unsigned short fe;
    unsigned short f10;
    unsigned short f12;
    int f14;
};

static inline int check_free_12cf4(unsigned short *arr, unsigned short start, unsigned short end)
{
    unsigned short *ptr = &arr[start];
    unsigned short *end_ptr = &arr[end];
    for (; ptr <= end_ptr; ptr++) {
        if (*ptr != 0xffff) {
            return 0;
        }
    }
    return 1;
}

int FUN_02012cf4(struct S_12cf4 *p0, unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4, int p5)
{
    struct Sub_12cf4 *r4 = &DAT_02103794[p5];
    unsigned short end1 = p1 + (p2 - 1);
    unsigned short *f500;

    if (check_free_12cf4(r4->f0, p1, end1)) {
        p0->f10 = DAT_02103790++;
        p0->f4 = p1;
        p0->f6 = end1;
        p0->f8 = p1;
        FUN_020654b4(p0->f10, (char *)r4->f0 + (p1 << 1), (end1 - p1 + 1) << 1);
    } else {
        return 0;
    }
    f500 = r4->f500;
    if (p4 == 0) {
        p0->fa = 0x20;
        p0->fc = 0;
        p0->fe = p0->fa;
    } else {
        unsigned short end2 = p3 + (p4 - 1);
        if (check_free_12cf4(f500, p3, end2)) {
            p0->fa = p3;
            p0->fc = end2;
            p0->fe = p3;
            FUN_020654b4(p0->f10, (char *)f500 + (p3 << 1), (end2 - p3 + 1) << 1);
        } else {
            return 0;
        }
    }
    p0->f14 = 0;
    p0->f0 = p5;
    return 1;
}
