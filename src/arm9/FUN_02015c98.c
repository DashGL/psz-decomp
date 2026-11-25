// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x164, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_020158c4(void *, unsigned short *, int, int, int, int, int, int, int, int);
extern void FUN_02015aec(void *, unsigned short *, int, int, int, int, int, int, int);
extern void FUN_02015b54(void *, unsigned short *, int, int, int, int, int, int, int);

void FUN_02015c98(void *p0, unsigned short *p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) {
    int over;
    if (p4 < 0) {
        p4 = -p4;
        p2 += p4;
        p8 -= p4;
        p4 = 0;
    }
    if (p5 < 0) {
        p5 = -p5;
        p3 += p5;
        p9 -= p5;
        p5 = 0;
    }
    over = p4 + p8;
    if (over > p6) {
        p8 -= over - p6;
    }
    over = p5 + p9;
    if (over > p7) {
        p9 -= over - p7;
    }
    if (p2 < 0) {
        p2 = -p2;
        p4 += p2;
        p8 -= p2;
        p2 = 0;
    }
    if (p3 < 0) {
        p3 = -p3;
        p5 += p3;
        p9 -= p3;
        p3 = 0;
    }
    over = p2 + p8;
    if (over > (int)((unsigned int)p1[0] >> 3)) {
        p8 -= over - (int)((unsigned int)p1[0] >> 3);
    }
    over = p3 + p9;
    if (over > (int)((unsigned int)p1[1] >> 3)) {
        p9 -= over - (int)((unsigned int)p1[1] >> 3);
    }
    if (p8 <= 0 || p9 <= 0) {
        return;
    }
    switch (p1[3]) {
    case 0:
        FUN_020158c4(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
        break;
    case 1:
        FUN_02015aec(p0, p1, p2, p3, p4, p5, p6, p8, p9);
        break;
    case 2:
        FUN_02015b54(p0, p1, p2, p3, p4, p5, p6, p8, p9);
        break;
    }
}
