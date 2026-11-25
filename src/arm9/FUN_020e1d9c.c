// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
struct Inner {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
};
struct G {
    int f0;
    struct Inner *f4;
};
extern struct G D_0211de44;
extern void FUN_020656b8(void *, int, int);

void FUN_020e1d9c(struct Inner *a, int b, int c, int d, int e, int f, int g, int h) {
    D_0211de44.f4 = a;
    FUN_020656b8(a, 0, 0x280);
    D_0211de44.f4->f0 = c;
    D_0211de44.f4->f4 = 0;
    D_0211de44.f4->f8 = d;
    D_0211de44.f4->fc = e;
    D_0211de44.f4->f10 = f;
    D_0211de44.f4->f14 = g;
    D_0211de44.f4->f18 = h;
    D_0211de44.f4->f1c = b;
}
