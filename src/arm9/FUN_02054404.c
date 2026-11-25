// flags: -noThumb
// near: nd=74 bad=0 len=0x16c/tsz=0x170 — logic understood, register coloring / scheduling residual
extern void *FUN_02052f70(void);
extern int FUN_02052fe4(int, int, int);
extern void FUN_020673d4(void *, int);
extern int FUN_02053698(void);
extern int FUN_0205362c(void);
extern void FUN_02052de4(int, int);
extern void FUN_02065510(int, void *, int);
extern void FUN_0206552c(const void *, void *, int);
extern int FUN_02052f00(void *, int);

struct S_54404 {
    char pad0[0xc];
    int fc;
    char pad1[0x9c - 0x10];
    unsigned short f9c;
    char pad2[0xc6 - 0x9e];
    unsigned short fc6;
    char pad3[0x188 - 0xc8];
    unsigned short f188;
};

struct Sp_54404 {
    unsigned short f0;
    unsigned short pad2;
    int f4;
    unsigned int f8;
    int fc;
    unsigned int f10;
    char f14[0x1c];
    char f30[0x10];
};

int FUN_02054404(int p0, int p1, int p2, int p3, unsigned short p4, const void *p5) {
    struct Sp_54404 sp0;
    struct S_54404 *r4 = *(struct S_54404 **)((char *)FUN_02052f70() + 4);
    int res = FUN_02052fe4(2, 7, 8);
    if (res != 0) {
        return res;
    }
    FUN_020673d4(&r4->f188, 2);
    FUN_020673d4(&r4->fc6, 2);
    if (r4->f188 != 0 && r4->fc6 != 1) {
        return 3;
    }
    FUN_020673d4(&r4->fc, 4);
    if (r4->fc == 1) {
        return 3;
    }
    if (p2 & 0x3f) {
        return 6;
    }
    if (p4 & 0x1f) {
        return 6;
    }
    FUN_020673d4(&r4->f9c, 2);
    if (r4->f9c == 0) {
        if (p2 < FUN_02053698()) {
            return 6;
        }
        if (p4 < FUN_0205362c()) {
            return 6;
        }
    }
    FUN_02052de4(0xe, p0);
    FUN_02065510(0, &sp0, 0x40);
    sp0.f0 = 0xe;
    sp0.f4 = p1;
    sp0.f8 = (unsigned int)p2 >> 1;
    sp0.fc = p3;
    sp0.f10 = p4;
    FUN_02065510(0, sp0.f14, 0x1c);
    FUN_0206552c(p5, sp0.f30, 0x10);
    res = FUN_02052f00(&sp0, 0x40);
    if (res == 0) {
        return 2;
    }
    return res;
}
