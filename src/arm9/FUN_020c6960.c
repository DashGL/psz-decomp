// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_0209e6c4(void *, void *);
extern int FUN_020c6c04(void *);

void FUN_020c6960(unsigned char *arg0) {
    int i;
    unsigned char *p0 = arg0 + 0xe8;
    unsigned char *p1 = arg0 + 0x90;
    int v = *(int *)(arg0 + 0x120) + *(int *)(arg0 + 0x11c);
    if (v >= 0x1000) {
        FUN_0209e6c4(p0, p1);
        *(int *)(arg0 + 0x118) = 0;
        if (FUN_020c6c04(arg0) == 3) {
            *(int *)(arg0 + 0x114) = 0;
        }
    } else {
        unsigned char *p2 = arg0 + 0xbc;
        int inv = 0x1000 - v;
        *(int *)(p0 + 4) = (int)(((long long)*(unsigned int *)(p2 + 4) * inv + (long long)*(unsigned int *)(p1 + 4) * v) >> 12);
        p0[8] = (p2[8] * inv + p1[8] * v) >> 12;
        p0[9] = (p2[9] * inv + p1[9] * v) >> 12;
        p0[10] = (p2[10] * inv + p1[10] * v) >> 12;
        p0[11] = (p2[11] * inv + p1[11] * v) >> 12;
        for (i = 0; i < 0x20; i++) {
            p0[12 + i] = (p2[12 + i] * inv + p1[12 + i] * v) >> 12;
        }
    }
    *(int *)(arg0 + 0x120) = v;
}
