// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x62, exact bytes and relocation targets.
// flags: -O4,p
typedef struct { int f0; int f4; int f8; } S_89928;
int FUN_02089928(S_89928 *a, unsigned int b) {
    int r2 = 0;
    switch (b) {
    case 0:
        break;
    case 1:
        r2 = (a->f4 & (0x7f << 18)) >> 18;
        break;
    case 2:
        r2 = (a->f4 & (0x7f << 11)) >> 11;
        break;
    case 3:
        r2 = (a->f4 & (0x7f << 4)) >> 4;
        break;
    case 4:
        r2 = ((a->f8 & (0x7f << 25)) >> 25) & 0x7f;
        break;
    case 5:
        r2 = (a->f8 & (0x7f << 18)) >> 18;
        break;
    }
    return r2;
}
