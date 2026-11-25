// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xba, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020be2d8(void *);
extern void FUN_020be2f4(void *, int);
extern void FUN_020656b8(void *, int, int);
extern void FUN_020bd57c(void *, void *);

void FUN_020be21c(signed char *p0, int p1, signed char *p2, void *p3) {
    int r4 = 0;
    int r6;
    switch (p1) {
    case 0:
        r4 = 1;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        r4 = 2;
        break;
    case 1:
        r4 = 3;
        break;
    case 6:
        if (p2[0x10] == 0) {
            r4 = 4;
        } else {
            r4 = 2;
        }
        break;
    }
    if ((FUN_020be2d8(p3) == 0 && FUN_020be2d8(p2) != 0) ||
        (FUN_020be2d8(p3) != 0 && FUN_020be2d8(p2) == 0)) {
        if (r4 != 0) {
            r4 = 1;
        }
    }
    r6 = 0;
    if (r4 == 4) {
        if (p0[0] == 2 || p0[0] == 4) {
            r6 = 1;
        }
    }
    FUN_020be2f4(p0, r4);
    p0[2] = (r6 == 1) ? 1 : 0;
    switch (p0[0]) {
    case 0:
    case 1:
        FUN_020656b8(p0 + 4, 0, 0x14);
        break;
    default:
        FUN_020bd57c(p0 + 4, p2);
        break;
    }
}
