// flags: -O4,s
typedef struct { unsigned int w[8]; } Config;
extern void *DAT_02123f00;
extern void *DAT_02123644;
extern void *DAT_021236a4[];
extern void *DAT_02123664[];
extern const Config DAT_021236f4;
extern void FUN_020c2b84(void *, const void *, unsigned int, unsigned int, unsigned int);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *, const void *, const void *, int);
#pragma thumb off
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb on
extern int FUN_overlay_11__0211f654(void *);
extern void FUN_020c35d4(void *, const Config *);
extern void FUN_020c38f0(void *, int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020b3044(void *);
void FUN_overlay_11__0211f8b0(char *self);

#pragma opt_propagation off
void FUN_overlay_11__0211f8b0(char *self) {
    unsigned int c = 4;
    unsigned int bits = (*(volatile unsigned int *)0x04000000 & 0x1f00) >> 8;
    *(volatile unsigned int *)0x04000000 = (*(volatile unsigned int *)0x04000000 & 0xffffe0ff) | ((bits | 8) << 8);
    *(volatile unsigned short *)0x0400100e = (unsigned short)((c << 2) | ((c << 8) | (0x80 | (*(volatile unsigned short *)0x0400100e & 0x43))));
    { char *dst = self + 0xac; void *r = DAT_02123f00; FUN_020c2b84(dst, r, 7, c, c); }
    {
        void *resource = DAT_02123644;
        int i = 0;
        do {
            int off;
            int handle;
            if (*(unsigned int *)self == 1) {
                off = i << 2;
                handle = FUN_020c2438(FUN_020c1fc8(), *(void **)((char *)DAT_021236a4 + off), resource, 2);
            } else {
                off = i << 2;
                handle = FUN_020c2438(FUN_020c1fc8(), *(void **)((char *)DAT_02123664 + off), resource, 2);
            }
            *(int *)(self + off + 0xec) = handle;
            i++;
        } while (i < 4);
    }
    FUN_0206557c(0, FUN_0205e0c4(), 0x800);
    {
        Config cfg;
        unsigned int width = *(unsigned int *)(self + 0x90) * 10 + 8;
        cfg = DAT_021236f4;
        cfg.w[1] = width;
        cfg.w[3] = (unsigned int)FUN_overlay_11__0211f654(self) + 90;
        FUN_020c35d4(self + 0xb0, &cfg);
        FUN_020c38f0(self + 0xb0, 0);
    }
    if (*(unsigned int *)self == 3 && *(void **)(self + 0x100) == 0) {
        void *extra = FUN_020ba894(8);
        if (extra) extra = FUN_020b3044(extra);
        *(void **)(self + 0x100) = extra;
    }
}
