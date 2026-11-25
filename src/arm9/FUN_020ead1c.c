// flags: -O4,p
// near: len=0x128/0x128 nd=4 bad=0 (register coloring / instruction scheduling)
struct StateEad1c {
    int f0;
    int f4;
    unsigned long long f8;
    unsigned short f10;
    unsigned short f12;
};
extern void FUN_020e9ebc(void *);
extern void FUN_02068a60(void);
extern int FUN_02068b3c(void *);
extern int FUN_02068be8(void *);
extern long long FUN_020693d0(void *, void *);
extern int FUN_02067d94(void);
extern int FUN_02067e0c(void);
extern void FUN_020684f4(void *);
extern unsigned long long FUN_020eaa40(unsigned short, unsigned int, unsigned char, unsigned int);

int FUN_020ead1c(struct StateEad1c *self) {
    unsigned char mac[6] = {0, 0, 0, 0, 0, 0};
    int d1[4];
    int t1[3];
    long long res;
    unsigned int seed;
    unsigned char flag;
    int low24;

    FUN_020e9ebc(self);
    FUN_02068a60();
    if (FUN_02068b3c(d1) != 0) {
        return 0;
    }
    if (FUN_02068be8(t1) != 0) {
        return 0;
    }
    res = FUN_020693d0(d1, t1);
    if (res < 0) {
        return 0;
    }
    seed = (unsigned int)res;
    if (FUN_02067d94() != 0) {
        seed += (unsigned int)FUN_02067e0c;
    }
    FUN_020684f4(mac);
    flag = (((unsigned int)mac[0] << 16) | ((unsigned int)mac[1] << 8) | mac[2]) != 0x0009bf;
    low24 = ((unsigned int)mac[3] << 16) | ((unsigned int)mac[4] << 8) | mac[5];
    seed = seed * 0x5d588b65u + 0x269ec3u;
    self->f10 = (unsigned short)(((seed >> 16) * 1000) >> 16);
    self->f8 = 0;
    while (self->f8 == 0) {
        seed = seed * 0x5d588b65u + 0x269ec3u;
        while (seed == 0 || self->f12 == (unsigned short)seed) {
            seed = seed * 0x5d588b65u + 0x269ec3u;
        }
        self->f12 = (unsigned short)seed;
        self->f8 = FUN_020eaa40(self->f12, low24, flag, 0);
    }
    return 1;
}
