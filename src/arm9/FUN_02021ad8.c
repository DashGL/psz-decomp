// flags: -O4,p -noThumb
// version: 2.0/sp1p5
struct Pkt_02021ad8 {
    unsigned char f0[6];
    unsigned char f6[6];
    unsigned short fc;
    unsigned char fe;
    unsigned char ff;
    unsigned char f10;
    unsigned char f11;
    unsigned short f12;
    unsigned char f14;
    unsigned char f15;
    unsigned char f16[6];
    unsigned short f1c;
    unsigned short f1e;
    unsigned char f20[6];
    unsigned short f26;
    unsigned short f28;
};

extern void FUN_020656b8(void *, int, int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_0202165c(void *, int, int, int);
extern unsigned char DAT_0210753c[];
extern int DAT_02107054[];

void FUN_02021ad8(unsigned int arg0) {
    struct Pkt_02021ad8 pkt;
    unsigned int my_ip;
    unsigned short a, b, c, d;

    FUN_020656b8(&pkt, 0, 0x2a);
    FUN_020656b8(&pkt, 0xff, 6);
    FUN_02065774(DAT_0210753c, pkt.f6, 6);
    pkt.fc = 0x0608;
    pkt.ff = 1;
    pkt.f15 = 1;
    pkt.f10 = 8;
    pkt.f12 = 0x0406;
    FUN_02065774(DAT_0210753c, pkt.f16, 6);
    my_ip = DAT_02107054[0x14];
    c = (unsigned short)(arg0 >> 16);
    d = (unsigned short)arg0;
    a = (unsigned short)(my_ip >> 16);
    b = (unsigned short)my_ip;
    pkt.f1c = (a >> 8) | (a << 8);
    pkt.f1e = (b >> 8) | (b << 8);
    pkt.f26 = (c >> 8) | (c << 8);
    pkt.f28 = (d >> 8) | (d << 8);
    FUN_0202165c(&pkt, 0x2a, 0, 0);
}
