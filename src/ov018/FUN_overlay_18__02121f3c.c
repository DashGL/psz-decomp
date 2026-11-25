// flags: -O4,s
typedef struct {
    unsigned w[8];
} Config;

extern void *DAT_02123aa4;
extern void *DAT_02123804;
extern void *DAT_02123864[];
extern void *DAT_02123824[];
extern Config DAT_021238b4;

extern void FUN_020c2b84(void *, const void *, unsigned, unsigned, unsigned);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *, const void *, const void *, int);
#pragma thumb off
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned, void *, unsigned);
#pragma thumb on
extern unsigned FUN_overlay_18__02121ce0(void *);
extern void FUN_020c35d4(void *, const void *);
extern void FUN_020c38f0(void *, int);
extern void *FUN_020ba894(unsigned);
extern void *FUN_020b3044(void *);

#pragma opt_propagation off
void FUN_overlay_18__02121f3c(char *self) {
    unsigned bits;
    int a, b;
    void *resource;
    int i;
    unsigned width;
    Config cfg;

    a = 4; b = 4;
    bits = (*(volatile unsigned *)0x04000000 & 0x1f00) >> 8;
    *(volatile unsigned *)0x04000000 = (*(volatile unsigned *)0x04000000 & 0xffffe0ff) | ((bits | 8) << 8);
    *(volatile unsigned short *)0x0400100e = (unsigned short)((b << 2) | ((a << 8) | (0x80 | (*(volatile unsigned short *)0x0400100e & 0x43))));

    { void *q = self + 0xac; void *p = DAT_02123aa4; FUN_020c2b84(q, p, 7, 4, 4); }
    resource = DAT_02123804;
    i = 0;
    do {
        int off;
        int handle;
        if (*(unsigned *)self == 1) {
            off = i << 2;
            handle = FUN_020c2438(FUN_020c1fc8(), *(void **)((char *)DAT_02123864 + off), resource, 2);
        } else {
            off = i << 2;
            handle = FUN_020c2438(FUN_020c1fc8(), *(void **)((char *)DAT_02123824 + off), resource, 2);
        }
        *(int *)(self + off + 0xec) = handle;
        i++;
    } while (i < 4);
    FUN_0206557c(0, FUN_0205e0c4(), 0x800);

    width = *(unsigned *)(self + 0x90) * 10 + 8;
    cfg = DAT_021238b4;
    cfg.w[1] = width;
    cfg.w[3] = FUN_overlay_18__02121ce0(self) + 90;
    FUN_020c35d4(self + 0xb0, &cfg);
    FUN_020c38f0(self + 0xb0, 0);

    if (*(unsigned *)self == 3 && *(void **)(self + 0x100) == 0) {
        void *extra = FUN_020ba894(8);
        if (extra) extra = FUN_020b3044(extra);
        *(void **)(self + 0x100) = extra;
    }
}
