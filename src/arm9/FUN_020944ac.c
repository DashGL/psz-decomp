// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
typedef struct { int f0; unsigned int f4; unsigned int f8; } S_944ac;
void FUN_020944ac(S_944ac *a, unsigned int b, int c) {
    switch (b) {
    case 0:
        break;
    case 1:
        a->f4 = (a->f4 & 0xfe03ffff) | (c << 18);
        break;
    case 2:
        a->f4 = (a->f4 & 0xfffc07ff) | (c << 11);
        break;
    case 3:
        a->f4 = (a->f4 & 0xfffff80f) | (c << 4);
        break;
    case 4:
        a->f8 = (a->f8 & 0x01ffffff) | (c << 25);
        break;
    case 5:
        a->f8 = (a->f8 & 0xfe03ffff) | (c << 18);
        break;
    }
}
