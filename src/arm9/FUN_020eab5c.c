// flags: -O4,p
extern unsigned int FUN_020e9ebc(void *);
extern void FUN_02068a60(void);
extern int FUN_02068b3c(void *);
extern int FUN_02068be8(void *);
extern long long FUN_020693d0(void *, void *);
extern int FUN_02067d94(void);
extern int FUN_02067e0c(void);
extern void FUN_020684f4(unsigned char *);
extern unsigned long long FUN_020eaa40(unsigned short, unsigned int, unsigned char, int);

struct S_eab5c {
    unsigned long long f0;
    unsigned long long f8;
    unsigned short f10;
    unsigned short f12;
};

int FUN_020eab5c(struct S_eab5c *p0) {
    unsigned char sp1c[16];
    unsigned char sp10[12];
    unsigned char mac[8];
    long long diff;
    unsigned int r4;
    unsigned char sp4;
    unsigned int sp0;

    FUN_020e9ebc(p0);
    FUN_02068a60();
    if (FUN_02068b3c(sp1c) != 0) {
        return 0;
    }
    if (FUN_02068be8(sp10) != 0) {
        return 0;
    }
    diff = FUN_020693d0(sp1c, sp10);
    r4 = (unsigned int)diff;
    if (diff < 0) {
        return 0;
    }
    if (FUN_02067d94() != 0) {
        r4 += (unsigned int)FUN_02067e0c;
    }
    FUN_020684f4(mac);
    sp4 = (unsigned char)((((mac[0] << 16) | (mac[1] << 8) | mac[2]) != 0x9bf) ? 1 : 0);
    sp0 = (mac[3] << 16) | (mac[4] << 8) | mac[5];
    r4 = r4 * 0x5d588b65u + 0x269ec3u;
    p0->f10 = (unsigned short)(((r4 >> 16) * 1000u) >> 16);
    p0->f0 = 0;
    if (p0->f12 == 0) {
        p0->f8 = 0;
        if (p0->f8 == 0) {
            do {
                r4 = r4 * 0x5d588b65u + 0x269ec3u;
                if (r4 == 0) {
                    do {
                        r4 = r4 * 0x5d588b65u + 0x269ec3u;
                    } while (r4 == 0);
                }
                p0->f12 = (unsigned short)r4;
                p0->f8 = FUN_020eaa40(p0->f12, sp0, sp4, 0);
            } while (p0->f8 == 0);
        }
    } else {
        p0->f8 = 0;
        if (p0->f8 == 0) {
            do {
                p0->f12++;
                p0->f8 = FUN_020eaa40(p0->f12, sp0, sp4, 0);
            } while (p0->f8 == 0);
        }
    }
    return 1;
}
