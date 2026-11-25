// flags: -O3,s
extern void FUN_020b9cb0(void *, void *);
extern void *FUN_020c4434(void *);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern int FUN_02084c1c(void *);
extern void *FUN_020bd2d4(int, unsigned int, int);
extern void *FUN_020ba8bc(unsigned int, int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020c3ca0(void *, void *);
extern void *FUN_020ba440(void *);
extern void *FUN_020bc2dc(void *, void *, int);
extern unsigned int FUN_020ba288(void *);
extern unsigned int FUN_020bc508(void *, int);
extern unsigned int FUN_02037c88(void *, unsigned int, unsigned int, unsigned int);
extern int FUN_020ba0bc(void);
extern void FUN_020ba2d4(void *, void *);
extern void FUN_020bc3c0(void *, void *, int);

extern void *DAT_02101dd4;
extern void *DAT_020f8640[];
extern unsigned int DAT_020f71fc;
extern unsigned int DAT_02108d0c[];
extern char DAT_0211a51c[];
extern char DAT_020ed400[];
extern char DAT_020ed41c[];
extern void *DAT_020f7230[];
extern char DAT_020ed3e8[];
extern void *DAT_02108c84;

#define W(n) (*(unsigned int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))
#define B(n) (*(unsigned char *)(s + (n)))
#define P(n) (*(void **)(s + (n)))

char *FUN_0203f214(char *s, int special) {
    int i, j;
    char *p, *end;
    void *obj, *manager;

    FUN_020b9cb0(s, DAT_02101dd4);
    P(0) = DAT_020f8640;
    H(32) = 0;
    W(36) = 0;
    p = s + 40;
    end = s + 440;
    do {
        FUN_020c4434(p);
        FUN_020c4434(p + 16);
        p += 100;
    } while (p < end);
    W(0x428) = 0;
    FUN_0200c938(s + 0x460, 16);
    FUN_0200c938(s + 0x4a0, 4);
    W(0x4c0) = 0;
    W(12) = DAT_020f71fc;
    {
        int k;
        for (k = 0; k < 4; k++) {
            *(unsigned int *)((s + 108 * k) + 0x1b8) = 0;
            *(unsigned int *)((s + 108 * k) + 0x1bc) = 0;
            *(unsigned int *)((s + 108 * k) + 0x21c) = 0;
            *(unsigned int *)((s + 108 * k) + 0x220) = 0;
            *(unsigned int *)((s + 4 * k) + 0x42c) = 0;
            *(unsigned int *)((s + 4 * k) + 0x43c) = 0;
            DAT_02108d0c[k] = 0;
            *(unsigned short *)((s + 48 * k) + 0x368) = 65535;
            *(unsigned short *)((s + 48 * k) + 0x36a) = 65535;
            for (j = 0; j < 22; j++) {
                *(unsigned int *)(((s + 108 * k) + 4 * j) + 0x1c0) = 0;
                *(unsigned short *)(((s + 48 * k) + 2 * j) + 0x36c) = 65535;
            }
            *(unsigned int *)((s + 4 * k) + 0x4d0) = 0;
            *(unsigned int *)((s + 4 * k) + 0x4e0) = 0;
            *(unsigned int *)((s + 4 * k) + 0x460) = 0;
            *(unsigned char *)((s + k) + 0x4a0) = 0;
            *(unsigned int *)((s + 12 * k) + 0x470) = 0;
            *(unsigned int *)((s + 12 * k) + 0x478) = 0;
            *(unsigned int *)((s + 12 * k) + 0x474) = 0;
            *(unsigned short *)((s + 6 * k) + 0x4a8) = 65535;
            *(unsigned short *)((s + 6 * k) + 0x4ac) = 65535;
            *(unsigned short *)((s + 6 * k) + 0x4aa) = 65535;
            *(unsigned int *)((s + 4 * k) + 0x450) = 0;
            *(unsigned int *)((s + 4 * k) + 0x4f0) = 0;
            *(unsigned int *)((s + 4 * k) + 0x500) = 0;
        }
    }
    W(0x44c) = 0;
    for (i = 0; i < 2; i++) {
        *(unsigned int *)((s + 4 * i) + 0x4c4) = 0;
        *(unsigned short *)((s + 2 * i) + 0x4cc) = 0;
    }
    if (FUN_02084c1c(DAT_0211a51c) && special) H(34) = 1;
    else H(34) = 0;
    for (i = 0; i < 4; i++) {
        if (*(short *)(s + 34) == 1) {
            obj = FUN_020bd2d4(7, 0x2200, 16);
            *(void **)((s + 108 * i) + 0x1b8) = obj;
            if (*(void **)((s + 108 * i) + 0x1b8)) *(unsigned int *)((s + 4 * i) + 0x4f0) = 1;
            *(void **)((s + 108 * i) + 0x1bc) = FUN_020ba8bc(0x2900, 16);
            if (*(void **)((s + 108 * i) + 0x1bc)) *(unsigned int *)((s + 4 * i) + 0x500) = 1;
        }
        if (!*(void **)((s + 108 * i) + 0x1b8)) {
            *(void **)((s + 108 * i) + 0x1b8) = FUN_020ba8bc(0x2200, 16);
            if (*(void **)((s + 108 * i) + 0x1b8)) *(unsigned int *)((s + 4 * i) + 0x4f0) = 0;
        }
        if (!*(void **)((s + 108 * i) + 0x1bc)) {
            *(void **)((s + 108 * i) + 0x1bc) = FUN_020ba8bc(0x2900, 16);
            if (*(void **)((s + 108 * i) + 0x1bc)) *(unsigned int *)((s + 4 * i) + 0x500) = 0;
        }
    }
    obj = FUN_020ba894(0x58);
    if (obj) obj = FUN_020c3ca0(obj, DAT_020ed400);
    P(0x428) = obj;
    P(0x4a4) = FUN_020ba8bc(FUN_020ba288(DAT_020ed41c), 16);
    FUN_020ba0bc();
    FUN_020ba2d4(DAT_020ed41c, P(0x4a4));
    P(0x4c0) = FUN_020ba440(P(0x4a4));
    for (i = 0; i < 4; i++) {
        obj = FUN_020ba894(0x84);
        if (obj) obj = FUN_020bc2dc(obj, DAT_020f7230[i], 0);
        *(void **)((s + 4 * i) + 0x43c) = obj;
    }
    obj = FUN_020ba894(0x84);
    if (obj) obj = FUN_020bc2dc(obj, DAT_020ed3e8, 0);
    P(0x44c) = obj;
    if (P(0x44c)) {
        FUN_020bc3c0(P(0x44c), DAT_020ed3e8, 0);
        for (i = 0; i < 2; i++) *(unsigned int *)((s + 4 * i) + 0x4c4) = FUN_020bc508(P(0x44c), i);
        manager = DAT_02108c84;
        if (manager)
            for (i = 0; i < 2; i++)
                if (*(unsigned int *)((s + 4 * i) + 0x4c4))
                    *(unsigned short *)((s + 2 * i) + 0x4cc) = FUN_02037c88(manager, *(unsigned int *)((s + 4 * i) + 0x4c4), 0, 0);
    }
    return s;
}
