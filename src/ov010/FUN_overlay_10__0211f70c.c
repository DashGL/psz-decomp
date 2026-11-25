// flags: -O4,s
#pragma opt_propagation off
typedef struct { unsigned v[8]; } Config;
extern void *DAT_02122460;
extern void *DAT_02122118;
extern unsigned char DAT_02122178[];
extern unsigned char DAT_02122138[];
extern const Config DAT_021221c8;
extern void FUN_020c2b84(void *, const void *, unsigned, unsigned, unsigned);
extern void FUN_020c35d4(void *, const void *);
extern void FUN_020c38f0(void *, int);
extern void *FUN_020c1fc8(void);
extern void *FUN_020ba894(unsigned);
extern void *FUN_020b3044(void *);
extern int FUN_020c2438(void *, const void *, const void *, int);
extern int FUN_overlay_10__0211f4b0(void *);
#pragma thumb off
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned, void *, unsigned);
#pragma thumb on

void FUN_overlay_10__0211f70c(char *self) {
    int c = 4;
    unsigned old;
    Config config;
    unsigned width;
    int i;
    void *resource;
    void *extra;
    old = (*(volatile unsigned *)0x04000000 & 0x1f00) >> 8;
    *(volatile unsigned *)0x04000000 = (*(volatile unsigned *)0x04000000 & ~0x1f00) | ((old | 8) << 8);

    *(volatile unsigned short *)0x0400100e = (unsigned short)((c << 2) | ((c << 8) | (0x80 | (*(volatile unsigned short *)0x0400100e & 0x43))));
    {
        char *s = self + 172;
        void *p = DAT_02122460;
        FUN_020c2b84(s, p, 7, c, c);
    }
    resource = DAT_02122118;
    i = 0;
    do {
        int off, h;
        if (*(int *)self == 1) {
            off = i * 4;
            h = FUN_020c2438(FUN_020c1fc8(), *(void **)(DAT_02122178 + off), resource, 2);
        } else {
            off = i * 4;
            h = FUN_020c2438(FUN_020c1fc8(), *(void **)(DAT_02122138 + off), resource, 2);
        }
        *(int *)(self + off + 236) = h;
        i++;
    } while (i < 4);
    FUN_0206557c(0, FUN_0205e0c4(), 2048);
    width = *(unsigned *)(self + 144) * 10 + 8;
    config = DAT_021221c8;
    config.v[1] = width;
    config.v[3] = (unsigned)FUN_overlay_10__0211f4b0(self) + 90;
    FUN_020c35d4(self + 176, &config);
    FUN_020c38f0(self + 176, 0);
    if (*(int *)self == 3 && *(void **)(self + 256) == 0) {
        extra = FUN_020ba894(8);
        if (extra) extra = FUN_020b3044(extra);
        *(void **)(self + 256) = extra;
    }
}
