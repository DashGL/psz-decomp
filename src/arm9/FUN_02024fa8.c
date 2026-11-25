// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// flags: -O4,s -noThumb

struct State24FA8 {
    unsigned char pad[0x34];
    unsigned int f34;
};

extern unsigned char DAT_021075aa[];
extern struct State24FA8 DAT_02107054;
extern unsigned char *FUN_02024de8(unsigned char *, int, int *);
extern unsigned char *FUN_02024f74(int, int, unsigned char *, int);
extern void FUN_02024890(unsigned char *, int);

int FUN_02024fa8(void) {
    int sp00;
    unsigned char *base = DAT_021075aa;
    unsigned char *p = FUN_02024de8(base, 1, &sp00);
    if (DAT_02107054.f34 != 0) {
        p[0] = 0x32;
        p[1] = 4;
        p[2] = (unsigned short)(DAT_02107054.f34 >> 16) >> 8;
        p[3] = DAT_02107054.f34 >> 16;
        p[4] = (unsigned short)DAT_02107054.f34 >> 8;
        p[5] = DAT_02107054.f34;
        p += 6;
    }
    *p = 0xff;
    p = FUN_02024f74(0, 0x12c, p + 1, (p + 1) - base);
    FUN_02024890(base, p - base);
    return sp00;
}
