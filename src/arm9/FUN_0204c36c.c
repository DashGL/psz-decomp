//cpp
// flags: -O4,s
#pragma always_inline on

struct V {
    unsigned int x, y, z;
};

struct Arr5Inner {
    unsigned short v[5];
};

struct Arr5 {
    Arr5Inner inner;
    Arr5() {}
    Arr5(const Arr5 &o) : inner(o.inner) {}
};

struct Code {
    unsigned char b[4];
};

struct Request {
    unsigned short a;
    unsigned short b;
    Arr5 c;
    unsigned int d0, d1, d2, d3;
    V e;
    V f;
    unsigned short g0, g1, g2, g3;
    unsigned int h0, h1, h2, h3, h4;
};

struct Obj {
    int f00;
    int f04;
    volatile int f08;
    int f0c;
    int f10;
    unsigned int vals[7]; // 0x14..0x2f
    unsigned char pad30[0xac - 0x30];
    int fac;              // 0xac (172)
    unsigned char padb0[0xd0 - 0xb0];
    Code code;            // 0xd0 (208)
    unsigned char padd4[0xe8 - 0xd4];
    int id;               // 0xe8 (232)
    unsigned char padec[0xfc - 0xec];
    unsigned char ffc;    // 0xfc (252)
    unsigned char padfd[3];
    unsigned int f100;    // 0x100
    int mode;             // 0x104 (260)
    unsigned char key[16];// 0x108 (264)
    int f118;             // 0x118 (280)
    int f11c;             // 0x11c (284)
};

extern "C" {
extern Request DAT_020f9220;
extern void FUN_0204b18c(void *, void *, void *);
extern void FUN_02039534(void *, void *);
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_02045920(int, void *);
extern unsigned int FUN_02045948(int, int);
extern int FUN_02045b1c(int, void *, int);
extern unsigned int FUN_02045b50(int, int, int);

void FUN_0204c36c(Obj *s, int id, void *key, int mode) {
    s->ffc = 3;
    Request r = DAT_020f9220;
    r.h0 = (unsigned int)-1;
    if (mode == 0) {
        r.h0 = 8;
    } else if (mode == 1) {
        r.h0 = 5;
    }
    FUN_0204b18c(s, key, &r);
    s->mode = mode;
    s->id = id;
    FUN_02039534(s->key, key);
    s->f118 = 0;
    s->f11c = 0;
    s->fac = 1;
    Code copy = s->code;
    if (FUN_0203a820(&copy, 0)) {
        if (FUN_0203a1a8(&copy, 17)) {
            if (FUN_02045920(s->id, &copy)) {
                for (int i = 0; i < 7; i++) {
                    unsigned int value = FUN_02045948(s->id, s->f08);
                    int idx = s->f08;
                    if (idx < 7) {
                        s->vals[idx] = value;
                    }
                    s->f08 = s->f08 + 1;
                }
                s->f04 = 3;
            }
        } else if (FUN_02045b1c(s->id, &copy, s->mode)) {
            for (int i = 0; i < 7; i++) {
                unsigned int value = FUN_02045b50(s->id, s->f08, s->mode);
                int idx = s->f08;
                if (idx < 7) {
                    s->vals[idx] = value;
                }
                s->f08 = s->f08 + 1;
            }
            s->f04 = 3;
        }
    }
}
}
