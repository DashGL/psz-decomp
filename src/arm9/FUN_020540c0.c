// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x150, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02052fe4(int a, int b, int c, int d);
extern void FUN_02052de4(int a, int b);
extern void FUN_02065774(const void *src, void *dst, int sz);
extern int FUN_02052f00(void *a, int b);

struct S_020540c0 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned char fa[6];
    unsigned short f10;
    unsigned short f12;
    unsigned char f14[0x20];
    unsigned short f34;
};

int FUN_020540c0(int p0, struct S_020540c0 *p1) {
    unsigned char sp[0x3c];
    int r0;
    unsigned short mode;

    r0 = FUN_02052fe4(3, 2, 3, 5);
    if (r0 != 0) {
        return r0;
    }
    if (p1 == 0) {
        return 6;
    }
    if (p1->f0 == 0) {
        return 6;
    }
    if (p1->f4 > 0x400) {
        return 6;
    }
    if (p1->f12 > 0x20) {
        return 6;
    }
    mode = p1->f10;
    if (mode != 0 && mode != 1 && mode != 2 && mode != 3) {
        return 6;
    }
    if (mode == 2 || mode == 3) {
        if (p1->f34 > 0x20) {
            return 6;
        }
    }
    FUN_02052de4(0x26, p0);
    *(unsigned short *)(sp + 0) = 0x26;
    *(unsigned short *)(sp + 2) = p1->f6;
    *(int *)(sp + 4) = p1->f0;
    *(unsigned short *)(sp + 8) = p1->f4;
    *(unsigned short *)(sp + 0xa) = p1->f8;
    FUN_02065774(p1->fa, sp + 0xc, 6);
    *(unsigned short *)(sp + 0x12) = p1->f10;
    *(unsigned short *)(sp + 0x36) = p1->f34;
    *(unsigned short *)(sp + 0x14) = p1->f12;
    FUN_02065774(p1->f14, sp + 0x16, 0x20);
    if (FUN_02052f00(sp, 0x3c) == 0) {
        return 2;
    }
}
