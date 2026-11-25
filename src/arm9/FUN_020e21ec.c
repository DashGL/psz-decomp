// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x160, exact bytes and relocation targets.
extern int FUN_020ddbb0(void);
extern void FUN_020ddbe8(void *);
extern char *FUN_02003c8c(char *, const char *);
extern void FUN_020ddb54(void);
extern void FUN_020e05d8(int, void *, int);
extern void *FUN_020e05ac(int, int);
extern int FUN_020dd6b8(int);
extern void FUN_020e205c(char *, char *, void (*)(void), int);
extern void FUN_020e1f90(void);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_020e1ebc(int, int);
extern void FUN_020656b8(void *, int, int);
extern int FUN_020e0c38(const void *);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_020dd9c4(void *, void *);

struct Sub_e21ec {
    char pad0[0x10];
    void *f10;
    char pad1[0x1c - 0x14];
    int f1c;
    char pad2[0x24 - 0x20];
    void *f24;
    unsigned long long f28;
    char pad3[0x48 - 0x30];
    char f48[0x100];
    char f148[0x109];
    char f251[1];
};

struct S_0211de44 {
    int f0;
    struct Sub_e21ec *f4;
    void (*f8)(char *, char *, int);
};
extern struct S_0211de44 DAT_0211de44;

struct Sp20c_e21ec {
    int f0;
    char pad0[0x4a - 4];
    char f4a[0x12d];
    char f177[0x4d];
};

struct Sp0_e21ec {
    char f0[0x34];
    char f34[0xc];
    void *(*f40)(int, int);
    void (*f44)(int, void *, int);
};

void FUN_020e21ec(void) {
    struct Sp20c_e21ec sp20c;
    struct Sp20c_e21ec sp48;
    struct Sp0_e21ec sp0;

    if (FUN_020ddbb0() == 0x15) {
        FUN_020ddbe8(&sp20c);
        FUN_02003c8c(DAT_0211de44.f4->f48, sp20c.f4a);
        FUN_02003c8c(DAT_0211de44.f4->f148, sp20c.f177);
        FUN_020ddb54();
        FUN_020e05d8(0, DAT_0211de44.f4->f24, 0);
        DAT_0211de44.f4->f24 = 0;
        if (FUN_020dd6b8(DAT_0211de44.f4->f1c) != 0) {
            DAT_0211de44.f8(DAT_0211de44.f4->f48, DAT_0211de44.f4->f148, DAT_0211de44.f0);
        } else {
            FUN_020e205c(DAT_0211de44.f4->f48, DAT_0211de44.f4->f148, FUN_020e1f90, 3);
        }
    } else if (FUN_020ddbb0() != 0) {
        if (((FUN_02067e0c() - DAT_0211de44.f4->f28) << 6) / 0x82eaULL > 10000ULL) {
            FUN_020ddbe8(&sp48);
            FUN_020ddb54();
            FUN_020e05d8(0, DAT_0211de44.f4->f24, 0);
            DAT_0211de44.f4->f24 = 0;
            FUN_020e1ebc(2, sp48.f0);
        } else {
            FUN_020ddb54();
            FUN_020656b8(&sp0, 0, 0x48);
            FUN_02065774(DAT_0211de44.f4->f10, &sp0, (FUN_020e0c38(DAT_0211de44.f4->f10) << 1) + 2);
            FUN_02003c8c(sp0.f34, DAT_0211de44.f4->f251);
            sp0.f40 = FUN_020e05ac;
            sp0.f44 = FUN_020e05d8;
            FUN_020dd9c4(&sp0, DAT_0211de44.f4->f24);
        }
    }
}
