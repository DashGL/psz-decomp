// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd8, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020656b8(void *, int, int);
extern void FUN_020684f4(void *);
extern int FUN_020683d4(void);
extern int FUN_02052f80(void);
extern void FUN_020683e8(int);
extern void *FUN_02052f70(void);
extern unsigned short FUN_02053494(void);
extern unsigned short FUN_02053464(void);

struct Evt68 {
    unsigned short f00;
    unsigned short f02;
    unsigned short f04;
    unsigned short f06;
    int f08;
    int f0c;
    unsigned short f10;
    unsigned short f12;
    unsigned char f14[6];
    unsigned short f1a;
    int f1c;
    unsigned short f20;
    unsigned short f22;
    unsigned char f24[0x20];
};

int FUN_02053508(int a0, void (*a1)(void *), int a2) {
    struct Evt68 sp00;
    int r8;
    int r7;
    char *p;
    if (a1 != 0) {
        FUN_020656b8(&sp00, 0, 0x44);
        sp00.f00 = 0x82;
        sp00.f02 = 0;
        sp00.f04 = 0x19;
        sp00.f06 = (unsigned short)a0;
        sp00.f08 = 0;
        sp00.f0c = 0;
        sp00.f10 = 0;
        sp00.f1a = 0xffff;
        sp00.f1c = a2;
        sp00.f12 = 0;
        FUN_020684f4(sp00.f14);
    }
    r8 = FUN_020683d4();
    r7 = FUN_02052f80();
    if (r7 != 0) {
        FUN_020683e8(r8);
        return r7;
    }
    p = (char *)FUN_02052f70() + (a0 << 2);
    *(void (**)(void *))(p + 0xcc) = a1;
    *(int *)(p + 0x10c) = a2;
    if (a1 != 0) {
        sp00.f22 = FUN_02053494();
        sp00.f20 = FUN_02053464();
        a1(&sp00);
    }
    FUN_020683e8(r8);
    return 0;
}
