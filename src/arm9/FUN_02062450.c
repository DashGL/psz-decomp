// flags: -O4,p -noThumb
#pragma opt_common_subs off
extern void FUN_020654b4(int, void *, int);
extern void FUN_020654dc(unsigned int, void *, int);
extern unsigned short FUN_02061fc8(void *, int);
extern void FUN_02055690(int, void *, int, int, int, int);

struct Sub_62450 {
    char pad0[0x4b2];
    unsigned char f4b2;
    unsigned char f4b3;
    unsigned char f4b4;
    unsigned char f4b5;
    unsigned short f4b6;
    unsigned int f4b8;
};

struct S_02112600 {
    char pad0[0x1c];
    struct Sub_62450 *f1c;
    unsigned int f20;
    unsigned char f24;
    unsigned char f25;
    unsigned char f26;
    unsigned char f27;
    unsigned char f28;
    unsigned char f29;
    char pad1[0x40 - 0x2a];
    unsigned int f40;
    unsigned char f44_0 : 2;
    unsigned char f44_2 : 6;
    unsigned char f45;
    unsigned char f46;
    unsigned char f47;
    unsigned short f48;
    unsigned char f4a;
    unsigned char f4b;
    unsigned char f4c;
    unsigned char f4d;
    unsigned char f4e[0x62];
};
extern struct S_02112600 DAT_02112600;

void FUN_02062450(int p0, int p1, unsigned char p2) {
    unsigned int end = (unsigned int)DAT_02112600.f1c + 0x358;
    if (DAT_02112600.f20 + 0x62 <= end) {
        DAT_02112600.f4c = 0x62;
    } else {
        unsigned char sz;
        DAT_02112600.f4c = (unsigned char)(end - DAT_02112600.f20);
        sz = DAT_02112600.f4c;
        FUN_020654b4(0, DAT_02112600.f4e + sz, 0x62 - sz);
    }
    {
        unsigned int len = DAT_02112600.f4c;
        FUN_020654dc(DAT_02112600.f20, DAT_02112600.f4e, len);
    }
    DAT_02112600.f4a = DAT_02112600.f27;
    DAT_02112600.f4b = DAT_02112600.f28;
    DAT_02112600.f44_0 = DAT_02112600.f1c->f4b2;
    DAT_02112600.f45 = DAT_02112600.f1c->f4b3;
    DAT_02112600.f46 = DAT_02112600.f26;
    DAT_02112600.f40 = DAT_02112600.f1c->f4b8;
    DAT_02112600.f44_2 = DAT_02112600.f1c->f4b5;
    DAT_02112600.f47 = DAT_02112600.f29++;
    DAT_02112600.f48 = 0;
    DAT_02112600.f48 = FUN_02061fc8(&DAT_02112600.f48, 0x68);
    if (++DAT_02112600.f27 < DAT_02112600.f28) {
        DAT_02112600.f20 += 0x62;
    } else {
        DAT_02112600.f24 = 4;
    }
    p2 |= 3;
    FUN_02055690(0, &DAT_02112600.f40, 0x70, p0, p1, p2);
}
