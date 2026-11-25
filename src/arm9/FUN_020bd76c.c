// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,s
void FUN_020bdd60(int a, int b);
void FUN_020be3bc(int a, unsigned char *b);
void FUN_020bce24(int a, unsigned char *b);

void FUN_020bd76c(int a, int b, unsigned char *c, int d) {
    *(int *)(a + b * 4 + 0xf20) = 0;
    while (d > 0) {
        unsigned char *r4 = c;
        int len = c[0] << 2;
        int t = c[2];
        if (len <= 0 || len > d || t >= 0x10) {
            FUN_020bdd60(a, b);
            break;
        }
        c += len;
        d -= len;
        if (b != ((signed char *)r4)[1]) {
            break;
        }
        ((signed char *)r4)[1] = (signed char)b;
        if (r4[2] == 0 && r4[3] == 2) {
            FUN_020be3bc(a, r4);
        }
        FUN_020bce24(a, r4);
    }
}
