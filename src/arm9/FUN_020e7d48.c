// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -O4,p
struct State7d48 {
    unsigned char pad0[0xd];
    unsigned char count;
    unsigned char pad1[0x1a2];
    unsigned short val1b0;
    unsigned char pad2[0x2e];
    long long time1e0;
    unsigned char pad3[0xe8];
    unsigned char arr2d0[16];
};
extern struct State7d48 *FUN_020e961c(void);
extern void FUN_020e9830(int, int, unsigned char *, int);
extern long long FUN_02067e0c(void);

void FUN_020e7d48(int param_1, int param_2) {
    unsigned char buf[4];
    switch (param_2) {
    case 2: {
        unsigned char i;
        struct State7d48 *s = FUN_020e961c();
        buf[0] = (param_1 == s->arr2d0[FUN_020e961c()->count]) ? 1 : 0;
        for (i = 1; i <= FUN_020e961c()->count; i++) {
            if (param_1 == FUN_020e961c()->arr2d0[i]) {
                buf[1] = i;
                buf[2] = (unsigned char)param_1;
                break;
            }
        }
        break;
    }
    case 3:
        buf[0] = (unsigned char)FUN_020e961c()->val1b0;
        buf[1] = (unsigned char)((int)FUN_020e961c()->val1b0 >> 8);
        break;
    }
    FUN_020e9830(param_2, param_1, buf, 4);
    FUN_020e961c()->time1e0 = FUN_02067e0c();
}
