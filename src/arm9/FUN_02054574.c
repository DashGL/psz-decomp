// flags: -O4,p -noThumb
struct S22 {
    unsigned int f0;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned short fa;
    unsigned char fc;
    unsigned char fd;
    unsigned char fe;
    unsigned char ff;
};

extern void FUN_02065510(int, void *, int);
extern int FUN_02054404(int, int, int, int, unsigned short, struct S22 *);

int FUN_02054574(int p1, int p2, int p3, int p4, unsigned short p5, unsigned short p6, unsigned short p7, int p8, int p9, int p10, int p11) {
    struct S22 s;
    FUN_02065510(0, &s, 0x10);
    s.f0 = 0x1e03;
    s.f4 = p6;
    s.f6 = p6;
    s.fa = p7;
    s.fc = (unsigned char)p8;
    s.fd = (unsigned char)p9;
    s.fe = (unsigned char)p11;
    if (p10 && p6) {
        s.f0 |= 4;
        s.f8 = p6;
    }
    return FUN_02054404(p1, p2, p3, p4, p5, &s);
}
