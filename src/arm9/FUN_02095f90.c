//cpp
// flags: -O4,s
#pragma always_inline on
extern "C" {
extern int UNK_0211a5d8[];
extern void *UNK_02101dd4;
extern void FUN_020c4fb8(void);
extern void FUN_020ba8ac(void *);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
extern void FUN_0203955c(void *);
extern void FUN_020c4434(void *);
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_02091880(void *);
extern void FUN_02080e7c(void *);
extern void FUN_02080e90(void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020ba918(unsigned int);
extern void *FUN_020a1264(void *);
extern void *FUN_020783b0(void *);
extern void *FUN_020963b0(void *);
extern int FUN_02068c9c(unsigned int *, unsigned int *);
typedef void (*Done)(void);
extern void *FUN_020c5018(void *, int, void *, Done, void *, int);
extern void FUN_02095f18(void), FUN_02095f24(void), FUN_02095f30(void), FUN_02095f3c(void);
extern void FUN_02095f48(void), FUN_02095f54(void), FUN_02095f60(void), FUN_02095f6c(void);
extern void FUN_02095f78(void), FUN_02095f84(void);
}

struct Slot {
    unsigned int a;
    int b;
    inline Slot() { a = 0; b = -1; }
};

struct SubCF4 {
    unsigned int fcf4;
    Slot slots[2][3];
    inline SubCF4() : fcf4(0) {
        int j, i;
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                slots[i][j].a = 0;
                slots[i][j].b = -1;
            }
        }
    }
};

struct Sub16 {
    unsigned char raw[16];
    inline Sub16() { FUN_020c4434(this); }
};

struct Sub64 {
    unsigned char f64;
    unsigned char f65;
    unsigned char f66[2];
    unsigned int f68;
    inline Sub64() {
        f64 = 0;
        f65 = 100;
        FUN_0200c938(f66, 2);
        f68 = 0;
    }
};

struct Tail {
    unsigned char raw[16];
    inline Tail() {
        raw[2] = 0;
        raw[3] = 0;
        raw[4] = 0;
        raw[5] = 0;
        raw[6] = 0;
        raw[7] = 0;
        raw[14] = 0;
        raw[15] = 0;
        FUN_020783b0(this);
    }
};

struct FullBlock2 {
    Sub16 s0;
    Sub16 s1;
    unsigned char pad1[0x44];
    Sub64 s64;
    unsigned char pad2[0xc88];
    SubCF4 scf4;
    Tail tail;
    unsigned char pad3[0x3c];
    inline FullBlock2() {}
};

inline void *operator new(unsigned long, void *p) { return p; }

#define W(base, n) (*(unsigned int *)((base) + (n)))

extern "C" void FUN_02095f90(void) {
    FUN_020c4fb8();
    {
        int i;
        unsigned char *p = (unsigned char *)FUN_020ba894(2936);
        void *task;
        if (p) {
            W(p, 1600) = 0;
            FUN_020a1264(p + 1604);
            W(p, 2932) = 0;
        }
        FUN_0206557c(0, p, 2936);
        for (i = 0; i < 100; i++) {
            FUN_0203955c(p + 16 * i);
        }
        W(p, 1600) = 0;
        W(p, 2932) = 0;
        UNK_0211a5d8[8] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 2, p, FUN_02095f18, UNK_02101dd4, 0);
        }
        UNK_0211a5d8[7] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 3, p, FUN_02095f24, UNK_02101dd4, 0);
        }
        FUN_020ba8ac(p);
    }
    {
        int i;
        unsigned char *p = (unsigned char *)FUN_020ba894(3444);
        void *task;
        unsigned int date[4];
        unsigned int time[3];
        new (p) FullBlock2();
        FUN_0206557c(0, p, 3444);
        p[100] = 0;
        FUN_02091880(p + 112);
        for (i = 0; i < 100; i++) {
            FUN_0203955c(p + 1716 + 16 * i);
        }
        W(p, 3316) = 0;
        FUN_020783b0(p + 3368);
        W(p, 3384) = 0;
        W(p, 3388) = 0;
        for (i = 0; i < 12; i++) {
            p[3392 + i] = 0;
        }
        for (i = 0; i < 8; i++) {
            *(unsigned int *)(p + i * 4 + 3404) = 0;
        }
        *(unsigned short *)(p + 3436) = 0;
        p[3438] = 0;
        p[3439] = 0;
        p[3440] = 0;
        p[3441] = 0;
        p[3442] = 0;
        p[3443] = 0;
        p[101] = 100;
        W(p, 104) = 0;
        if (FUN_02068c9c(date, time) == 0) {
            W(p, 108) = (W(p, 108) & ~127U) | (date[0] & 127);
            W(p, 108) = (W(p, 108) & 0xfffff87fU) | ((date[1] & 15) << 7);
            W(p, 108) = (W(p, 108) & 0xffff07ffU) | ((date[2] & 31) << 11);
            W(p, 108) = (W(p, 108) & 0xff00ffffU) | ((time[0] & 255) << 16);
            W(p, 108) = (W(p, 108) & 0x00ffffffU) | (time[1] << 24);
        }
        UNK_0211a5d8[6] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 4, p, FUN_02095f30, UNK_02101dd4, 0);
        }
        UNK_0211a5d8[5] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 5, p, FUN_02095f3c, UNK_02101dd4, 0);
        }
        UNK_0211a5d8[9] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 6, p, FUN_02095f48, UNK_02101dd4, 0);
        }
        UNK_0211a5d8[3] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 7, p, FUN_02095f54, UNK_02101dd4, 0);
        }
        UNK_0211a5d8[2] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 8, p, FUN_02095f60, UNK_02101dd4, 0);
        }
        UNK_0211a5d8[4] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 9, p, FUN_02095f6c, UNK_02101dd4, 0);
        }
        FUN_020ba8ac(p);
    }
    {
        unsigned char *q;
        unsigned char *p = (unsigned char *)FUN_020ba894(15440);
        void *task;
        if (p) {
            unsigned char *end;
            q = p;
            end = p + 15440;
            do {
                FUN_020963b0(q);
                q += 772;
            } while (q < end);
        }
        FUN_02080e7c(p);
        UNK_0211a5d8[0] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 10, p, FUN_02095f78, UNK_02101dd4, 0);
        }
        FUN_020ba8ac(p);
    }
    {
        unsigned char *q;
        unsigned char *p = (unsigned char *)FUN_020ba894(5404);
        void *task;
        if (p) {
            unsigned char *end;
            q = p;
            end = p + 5404;
            do {
                FUN_020963b0(q);
                q += 772;
            } while (q < end);
        }
        FUN_02080e90(p);
        UNK_0211a5d8[1] = 1;
        task = FUN_020ba918(56);
        if (task) {
            FUN_020c5018(task, 11, p, FUN_02095f84, UNK_02101dd4, 1);
        }
        FUN_020ba8ac(p);
    }
}
