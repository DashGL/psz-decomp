// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02065774(void *, void *, int);
void FUN_02015aec(char *a, char *b, int c, int d, int e, int f, int g, int h, int k) {
    unsigned int r4 = *(unsigned short *)b;
    b += 0xc;
    int off_a = e + f * g;
    r4 >>= 3;
    int off_b = c + d * (int)r4;
    int r7 = d + k;
    char *r8 = b + off_b;
    char *sb = a + off_a;
    for (; d < r7; d++, r8 += r4, sb += g) {
        FUN_02065774(r8, sb, h);
    }
}
