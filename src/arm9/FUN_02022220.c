// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x13c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Sock22220 {
    char pad0[0xa];
    unsigned short f0a;
    char pad0c[0xc];
    unsigned short f18;
    unsigned short f1a;
    unsigned int f1c;
    char pad20[0x2c];
    char *f4c;
};

extern volatile unsigned int DAT_02107054[];
extern unsigned int FUN_020213c0(const void *, int, unsigned int);
extern unsigned short FUN_02021474(unsigned short);
extern void FUN_02021f78(void *, int, const void *, int, unsigned int, int);

#define BSWAP16(x) ((unsigned short)(((int)(x) >> 8) | ((x) << 8)))

void FUN_02022220(const void *buf, int len, struct Sock22220 *s) {
    unsigned short *hdr = (unsigned short *)(s->f4c + 0x22);
    unsigned short u;
    unsigned short total_len;
    unsigned int csum;
    unsigned short csum16;

    u = (unsigned short)(DAT_02107054[0x14] >> 16);
    hdr[-6] = BSWAP16(u);
    u = (unsigned short)DAT_02107054[0x14];
    total_len = (unsigned short)(len + 8);
    hdr[-5] = BSWAP16(u);
    u = (unsigned short)(s->f1c >> 16);
    hdr[-4] = BSWAP16(u);
    u = (unsigned short)s->f1c;
    hdr[-3] = BSWAP16(u);
    hdr[-2] = 0x1100;
    hdr[2] = BSWAP16(total_len);
    hdr[-1] = hdr[2];
    hdr[1] = BSWAP16(s->f18);
    hdr[0] = BSWAP16(s->f0a);
    hdr[3] = 0;
    csum = FUN_020213c0(hdr - 6, 0x14, 0);
    csum = FUN_020213c0(buf, len, csum);
    csum16 = FUN_02021474((unsigned short)csum);
    hdr[3] = BSWAP16(csum16);
    FUN_02021f78(hdr, 8, buf, len, s->f1c, 0x11);
}
