// flags: -O4,s
extern void FUN_0205fdd8(void *, unsigned int);
extern void FUN_020c5b1c(int);
extern void *FUN_020ba8a0(int);
extern void FUN_020c4758(void *, const void *, int, unsigned int *);
extern int FUN_020661c4(void);
extern void FUN_02055c40(unsigned short);
extern int FUN_020562c0(int);
extern int FUN_02055bb8(void);
extern void FUN_02055c50(unsigned short);
extern int FUN_020c4bfc(void *, int, void *, int);
extern int FUN_020c472c(void *, void *);
extern int FUN_020c45a8(int);
extern void FUN_020c5cec(int);

extern int DAT_020fcb90;
extern void *DAT_0211ceec;
extern const char DAT_020fcb80[];

struct S_c45bc {
    void *f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    void (*f1c)(int);
    int f20;
    int f24;
    unsigned char f28;
    char pad29[3];
    int f2c;
    int f30;
    void *f34;
    int f38;
    int f3c;
    int f40;
    int f44;
    unsigned int f48;
    char f4c[0x400];
    int f44c;
    int f450;
    int f454;
    int f458;
    int f45c;
};

struct S_c45bc *FUN_020c45bc(struct S_c45bc *p0, int p1, int p2, const void *p3, int p4, unsigned int p5, void (*p6)(int)) {
    unsigned char sp4[16];
    unsigned int sp0;
    int st;

    p0->f0 = &DAT_020fcb90;
    p0->f4 = p1;
    p0->f8 = 0;
    p0->fc = 0;
    p0->f10 = -3;
    p0->f14 = p2;
    p0->f18 = 0;
    p0->f1c = p6;
    p0->f20 = -1;
    p0->f24 = 0;
    p0->f28 = 5;
    p0->f2c = 0;
    p0->f30 = 0;
    p0->f34 = 0;
    p0->f38 = 0;
    p0->f3c = 0;
    p0->f40 = 0;
    p0->f44 = 0;
    p0->f48 = p5;
    p0->f44c = 0;
    p0->f450 = 0;
    p0->f454 = 0;
    p0->f458 = 0;
    p0->f45c = 0;
    DAT_0211ceec = p0;
    FUN_0205fdd8(p0->f4c, 0xedb88320u);
    FUN_020c5b1c(0);
    p0->f34 = FUN_020ba8a0((p4 + 2) << 3);
    sp0 = 0x10;
    FUN_020c4758(p0, DAT_020fcb80, 2, &sp0);
    FUN_020c4758(p0, p3, p4, &sp0);
    if (sp0 > p5) {
        p0->f8 = 3;
        p0->f24 = 0x68;
        return p0;
    }
    p0->f10 = FUN_020661c4();
    if (p0->f10 == -3) {
        p0->f8 = 3;
        p0->f24 = 0x65;
        return p0;
    }
    FUN_02055c40((unsigned short)p0->f10);
    if (!FUN_020562c0(p2)) {
        p0->f8 = 3;
        p0->f24 = FUN_02055bb8();
        FUN_02055c50((unsigned short)p0->f10);
        if (p0->f1c != 0) {
            p0->f1c(1);
        }
        return p0;
    }
    FUN_02055c50((unsigned short)p0->f10);
    if (!FUN_020c4bfc(p0, 0, sp4, 0x10)) {
        p0->f8 = 3;
        p0->f24 = FUN_02055bb8();
        if (p0->f1c != 0) {
            p0->f1c(1);
        }
        return p0;
    }
    p0->f2c = 1;
    st = FUN_020c472c(p0, sp4);
    if (st != 1 && st != 2) {
        p0->f30 = FUN_020c45a8(0) ? 1 : 0;
    }
    FUN_020c5cec(0);
    return p0;
}
