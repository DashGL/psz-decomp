// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// flags: -noThumb
struct Ctx {
    int f0;
    int f4;
    void *f8;
    void *fc;
    void *f10;
    void *f14;
    void *f18;
};

extern void FUN_02057d30(void);
extern void FUN_02057d80(void);
extern void FUN_02057ed4(void);
extern int FUN_02058164(int, int, int, int, int, struct Ctx *);

int FUN_020580d0(int a0, int a1, int a2, int a3, int a4) {
    unsigned char buf2[0x68];
    unsigned char buf1[0x14];
    struct Ctx ctx = { 0x14, 0x40, 0, 0, 0, 0, 0 };
    ctx.f8 = buf2;
    ctx.fc = buf1;
    ctx.f10 = (void *)FUN_02057d30;
    ctx.f14 = (void *)FUN_02057d80;
    ctx.f18 = (void *)FUN_02057ed4;
    return FUN_02058164(a0, a1, a2, a3, a4, &ctx);
}
