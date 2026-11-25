// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_0202e358(void);
extern int FUN_020db634(void *);
extern int FUN_020db650(void *);
extern void FUN_0202de28(void *, void *, int);
extern long long FUN_02067e0c(void);

int FUN_020db3f0(unsigned char *a0) {
    int r0 = FUN_0202e358();
    int r6;
    unsigned char *r4 = a0 + 0x470;
    r6 = a0[0xd13] * 0xc0;
    if (r0 == 3) {
        int r7 = FUN_020db634(a0);
        unsigned char c;
        a0[0xd15]++;
        c = a0[0xd15];
        if (c > 3) {
            a0[0xd15] = 0;
            *(a0 + a0[0xd13] * 4 + 0x444) = 1;
            return 9;
        }
        if (c != 1) {
            unsigned char m = a0[0xd14];
            if (m == 1) {
                a0[0xd0b] &= ~0xc;
            } else if (m == 2) {
                a0[0xd15] = 0;
                *(a0 + a0[0xd13] * 4 + 0x444) = 3;
                return 9;
            } else if (m == 3) {
                a0[0xd15] = 0;
                *(a0 + a0[0xd13] * 4 + 0x444) = 4;
                return 9;
            } else if (c == 3) {
                a0[0xd0b] &= ~0xc;
            }
        }
        FUN_0202de28(r4 + r6, a0 + 0xcb8, FUN_020db650(a0) | r7);
    } else if (r0 == 9) {
        a0[0xd15] = 0;
        *(long long *)(a0 + 0xcb0) = FUN_02067e0c();
        return 10;
    }
    return 8;
}
