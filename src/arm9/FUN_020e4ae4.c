// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14c, exact bytes and relocation targets.
// flags: -O4,p
struct S_020e961c {
    unsigned char pad0[0xd];
    unsigned char fd;
    unsigned char pad0e[7];
    unsigned char f15;
    unsigned char f16;
    unsigned char pad17[0xdd];
    int ff4[1];
    unsigned char padf8[0xa8];
    int f1a0;
    unsigned char pad1a4[9];
    unsigned char f1ad;
    unsigned char pad1ae[2];
    unsigned short f1b0;
    unsigned char pad1b2[0x22];
    int f1d4;
    unsigned char pad1d8[0x28];
    int f200;
    unsigned char pad204[8];
    int f20c;
    unsigned char pad210[0xc0];
    unsigned char f2d0[8];
};
extern struct S_020e961c *FUN_020e961c(void);
extern void FUN_020e9628(int a);
extern void FUN_020e7d48(int a, int b);
extern int FUN_020e852c(int a);
extern void FUN_020e72d0(int a);

void FUN_020e4ae4(int p0, int p1, unsigned char *p2) {
    int r4;
    struct S_020e961c *r5;

    switch (p1) {
    case 2:
        if (FUN_020e961c()->f1a0 == 1) {
            if (p2[0] == 1) {
                FUN_020e961c()->f20c = 0;
            }
            r4 = p2[1];
            FUN_020e961c()->f2d0[r4] = p2[2];
            r5 = FUN_020e961c();
            r5->ff4[r4] = FUN_020e961c()->f200;
            if (FUN_020e961c()->f15 == 0 || FUN_020e961c()->f15 == 1) {
                struct S_020e961c *p = FUN_020e961c();
                p->f16 = FUN_020e961c()->fd;
            }
            FUN_020e961c()->f1ad = 0;
            FUN_020e9628(9);
        }
        FUN_020e7d48(p0, 3);
        break;
    case 3:
        if (FUN_020e961c()->f1a0 == 0x10) {
            FUN_020e961c()->f1d4 |= 1 << p0;
            r4 = p2[0] | (p2[1] << 8);
            if (r4 > FUN_020e961c()->f1b0) {
                FUN_020e961c()->f1b0 = r4;
            }
            r4 = FUN_020e852c(0);
            if (r4 == FUN_020e961c()->f1d4) {
                int i;
                for (i = 1; i <= FUN_020e961c()->fd; i++) {
                    FUN_020e7d48(FUN_020e961c()->f2d0[i], 4);
                }
                FUN_020e9628(0x11);
            }
            break;
        }
        FUN_020e7d48(p0, 4);
        break;
    case 4:
        if (FUN_020e961c()->f1a0 == 9) {
            FUN_020e72d0(4);
        }
        break;
    }
}
