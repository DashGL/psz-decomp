// flags: -O4,p
extern void *FUN_020c7e54(void);
extern int FUN_020c6f30(int a, void *b, void *c, int d, int e);
extern void *FUN_020c6e10(int a, int b);
extern int FUN_020d3714(int a);
extern void FUN_020c6e28(int a, void *b);
extern void FUN_020d514c(int a, unsigned short b, void *c);
extern void FUN_020d350c(int a, void *b, void *c, void *d, int e, int f, void *g, int h);
extern int FUN_020c6e0c(int a);
extern void FUN_020c7e84(void);
extern void FUN_020c7e68(void);
extern void FUN_020c7ef4(void);
extern void FUN_020c7fb0(void);
extern void FUN_020c8100(void);
extern void FUN_020c8174(void);

struct Key16_020c8454 {
    unsigned char b[16];
};

struct KeySlot_020c8454 {
    struct Key16_020c8454 k;
    unsigned char pad[0x2c];
};

struct Pair_020c8454 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
};

struct Ctx_020c8454 {
    int f0;
    int f4;
    int f8;
    int fc;
    unsigned char pad10[0x20];
    int f30;
};

int FUN_020c8454(int p0, unsigned short p1, struct Key16_020c8454 *p2, int p3) {
    unsigned char sp70[0x18];
    struct Pair_020c8454 sp64;
    struct KeySlot_020c8454 sp28;
    void (*cbs[4])(void);
    void *sp14;
    struct Ctx_020c8454 *r4;
    int idx;
    void *r6;

    r4 = (struct Ctx_020c8454 *)FUN_020c7e54();
    if (r4->fc == 0) {
        return 3;
    }
    if (p0 == 0 || p1 == 0) {
        return 10;
    }
    sp64.f0 = p0;
    sp64.f4 = p1;
    idx = FUN_020c6f30(r4->f4, &sp64, (void *)FUN_020c7e84, 0, 0);
    if (idx != -1) {
        r6 = FUN_020c6e10(r4->f4, idx);
        int st = FUN_020d3714(*(int *)((char *)r6 + 8));
        if (st == 1) {
            return 5;
        }
        if (st == 0) {
            sp28.k = *p2;
            idx = FUN_020c6f30(r4->f8, &sp28, (void *)FUN_020c7e68, 0, 0);
            if (idx != -1) {
                FUN_020c6e28(*(int *)((char *)FUN_020c6e10(r4->f8, idx) + 0x20), r6);
            }
        }
    } else {
        FUN_020d514c(p0, p1, sp70);
        cbs[2] = FUN_020c7ef4;
        cbs[0] = FUN_020c7fb0;
        cbs[3] = FUN_020c8100;
        cbs[1] = FUN_020c8174;
        FUN_020d350c(r4->f0, &sp64.f8, sp70, p2, 0x10, p3, cbs, 0);
        FUN_020c6e28(r4->f4, &sp64);
        sp28.k = *p2;
        idx = FUN_020c6f30(r4->f8, &sp28, (void *)FUN_020c7e68, 0, 0);
        if (idx != -1) {
            sp14 = FUN_020c6e10(r4->f4, FUN_020c6e0c(r4->f4) - 1);
            FUN_020c6e28(*(int *)((char *)FUN_020c6e10(r4->f8, idx) + 0x20), &sp14);
        } else {
            r4->f30++;
        }
    }
    return 0;
}
