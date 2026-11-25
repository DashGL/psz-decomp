// flags: -O4,p
extern void *FUN_020c7e54(void);
extern int FUN_020d3730(void *a);
extern unsigned short FUN_020d3734(void *a);
extern int FUN_020c6f30(int a, void *b, void *c, int d, int e);
extern void FUN_020c6eec(int a, int b);
extern int FUN_020c6e0c(int a);
extern void *FUN_020c6e10(int a, int b);
extern void FUN_020c7e84(void);

struct Pair_020c7fb0 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
};

struct Item_020c7fb0 {
    unsigned char pad0[0x20];
    int f20;
    unsigned char pad24[8];
    void (*f2c)(int, unsigned short, int, int, int);
    unsigned char pad30[8];
    int f38;
};

struct Ctx_020c7fb0 {
    int f0;
    int f4;
    int f8;
    int fc;
    void (*f10)(int, unsigned short, int, int, int);
    unsigned char pad14[0x18];
    int f2c;
    int f30;
};

void FUN_020c7fb0(void *p0, int p1) {
    int sp10;
    int sp0c;
    struct Pair_020c7fb0 sp20;
    struct Pair_020c7fb0 sp14;
    struct Ctx_020c7fb0 *r7;
    int i;

    r7 = (struct Ctx_020c7fb0 *)FUN_020c7e54();
    switch (p1) {
    case 7:
        sp0c = 7;
        break;
    case 2:
        sp0c = 2;
        break;
    case 6:
        sp0c = 6;
        break;
    case 0:
        sp0c = 0;
        break;
    default:
        sp0c = 13;
        break;
    }
    if (p1 == 2) {
        sp20.f0 = FUN_020d3730(p0);
        sp20.f4 = FUN_020d3734(p0);
        int idx = FUN_020c6f30(r7->f4, &sp20, (void *)FUN_020c7e84, 0, 0);
        if (idx != -1) {
            FUN_020c6eec(r7->f4, idx);
        }
    }
    sp10 = FUN_020c6e0c(r7->f8);
    for (i = 0; i < sp10; i++) {
        struct Item_020c7fb0 *r6 = (struct Item_020c7fb0 *)FUN_020c6e10(r7->f8, i);
        int sp08;
        sp14.f0 = FUN_020d3730(p0);
        sp14.f4 = FUN_020d3734(p0);
        sp08 = FUN_020c6f30(r6->f20, &sp14, (void *)FUN_020c7e84, 0, 0);
        if (sp08 != -1) {
            if (r6->f2c != 0) {
                int b = (p1 == 2) ? 1 : 0;
                int a0 = FUN_020d3730(p0);
                unsigned short a1 = FUN_020d3734(p0);
                r6->f2c(a0, a1, sp0c, b, r6->f38);
            }
            FUN_020c6eec(r6->f20, sp08);
            return;
        }
    }
    if (r7->f30 > 0) {
        if (r7->f10 != 0) {
            int b = (p1 == 2) ? 1 : 0;
            int a0 = FUN_020d3730(p0);
            unsigned short a1 = FUN_020d3734(p0);
            r7->f10(a0, a1, sp0c, b, r7->f2c);
        }
        r7->f30--;
    }
}
