// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02000e5c(void);
extern int FUN_02000f4c(void *, int);

struct S001284 {
    int f0;
    unsigned int b0 : 2;
    unsigned int b1 : 3;
    unsigned int b_mid : 2;
    unsigned int b2 : 3;
    unsigned int b_pad : 22;
    unsigned int f8_mode : 3;
    unsigned int f8_pad : 29;
    unsigned char fc;
    unsigned char fd;
    unsigned short fe;
    int pad2[2];
    int f18;
    int pad3[3];
    int f28;
};

int FUN_02001284(struct S001284 *a0) {
    if (a0 == 0) {
        return FUN_02000e5c();
    }
    if (a0->fd != 0 || a0->b2 == 0) {
        return -1;
    }
    if (a0->b1 == 1) {
        return 0;
    }
    if (a0->f8_mode >= 3) {
        a0->f8_mode = 2;
    }
    if (a0->f8_mode == 2) {
        a0->f28 = 0;
    }
    if (a0->f8_mode != 1) {
        a0->f8_mode = 0;
        return 0;
    }
    {
        int r0 = FUN_02000f4c(a0, 0);
        int z = 0;
        if (r0 != 0) {
            a0->fd = 1;
            a0->f28 = z;
            return z - 1;
        }
        a0->f8_mode = 0;
        a0->f18 = z;
        a0->f28 = z;
        return z;
    }
}
