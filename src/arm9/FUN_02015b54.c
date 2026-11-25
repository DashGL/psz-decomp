// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_020654dc(void *, void *, int);
void FUN_02015b54(short *a, short *b, int c, int d, int e, int f, int g, int h, int k) {
    unsigned int r4 = *(unsigned short *)b;
    b += 6;
    int off_a = e + f * g;
    r4 >>= 3;
    int off_b = c + d * (int)r4;
    int r5;
    int r6;
    r6 = h << 1;
    r5 = d + k;
    short *sb = b + off_b;
    short *sl = a + off_a;
    for (; d < r5; d++, sb += r4, sl += g) {
        FUN_020654dc(sb, sl, r6);
    }
}
