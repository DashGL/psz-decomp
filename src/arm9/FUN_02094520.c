// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
typedef struct { int f0; unsigned int f4; unsigned int f8; } S_94520;
void FUN_02094520(S_94520 *a, unsigned int b, int c) {
    switch (b) {
    case 0:
        break;
    case 1:
        a->f4 = (a->f4 & 0xffc07fff) | (c << 15);
        break;
    case 2:
        a->f4 = (a->f4 & 0xffff80ff) | (c << 8);
        break;
    case 3:
        a->f4 = (a->f4 & ~0xfe) | (c << 1);
        break;
    case 4:
        a->f8 = (a->f8 & 0x01ffffff) | (c << 25);
        break;
    case 5:
        a->f8 = (a->f8 & 0xfe03ffff) | (c << 18);
        break;
    }
}
