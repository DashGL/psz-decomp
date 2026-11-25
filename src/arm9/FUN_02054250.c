// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02052fe4(int, int);
extern void FUN_020673f0(void *, int);
extern void *FUN_02052f70(void);
extern void FUN_02052de4(int, int);
extern void FUN_02065774(void *, void *, int);
extern void FUN_020656b8(void *, int, int);
extern int FUN_02052f00(void *, int);

struct Cmd40 {
    unsigned short f0;
    unsigned short f2;
    void *f4;
    unsigned char f8[0x18];
    int f20;
    unsigned short f24;
    unsigned short f26;
};

int FUN_02054250(int a0, unsigned short *a1, void *a2, int a3, unsigned short a4) {
    struct Cmd40 sp00;
    int r0 = FUN_02052fe4(1, 2);
    void *p;
    if (r0 != 0) {
        return r0;
    }
    if (a1 == 0) {
        return 6;
    }
    FUN_020673f0(a1, *a1 << 1);
    p = FUN_02052f70();
    *(unsigned short *)((char *)p + 0x150) = 0;
    *(int *)((char *)p + 0x14c) = 0;
    FUN_02052de4(0xc, a0);
    sp00.f0 = 0xc;
    sp00.f4 = a1;
    if (a2 != 0) {
        FUN_02065774(a2, sp00.f8, 0x18);
    } else {
        FUN_020656b8(sp00.f8, 0, 0x18);
    }
    sp00.f20 = a3;
    sp00.f26 = a4;
    r0 = FUN_02052f00(&sp00, 0x28);
    if (r0 == 0) {
        r0 = 2;
    }
    return r0;
}
