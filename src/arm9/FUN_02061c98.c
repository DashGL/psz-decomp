// flags: -O4,p -noThumb
extern int FUN_0200a5ac(int, int);
extern int FUN_02061ec4(int, int, int);
extern void *DAT_021180ac;

int FUN_02061c98(void *a0, void *a1) {
    unsigned short *r6 = (unsigned short *)((char *)a0 + 0xc);
    unsigned char r2;
    int r0 = 0;
    if (a1 == 0) {
        return 0;
    }
    for (r2 = 0; r2 < 3; r2++) {
        *((int *)a0 + r2) = r0;
        r0 += *(int *)((char *)a1 + (r2 << 4) + 0x14);
    }
    *r6 = 0;
    for (r2 = 0; r2 < 3; r2++) {
        int *r7_p = (int *)((char *)a1 + 0xc + (r2 << 4));
        int r1_v = *(int *)((char *)DAT_021180ac + 0x1318);
        int r8 = r7_p[2];
        unsigned short r7 = r6[r2] + (unsigned short)FUN_0200a5ac((r8 + r1_v) - 1, r1_v);
        if (FUN_02061ec4(r2, r7_p[1], r8) == 0) {
            return 0;
        }
        if (r2 < 2) {
            r6[r2 + 1] = r7;
        } else {
            *((unsigned short *)a0 + 9) = r7;
        }
    }
    return 1;
}
