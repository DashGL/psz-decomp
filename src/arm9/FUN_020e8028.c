// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x198, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020e1534(void);
extern unsigned char *FUN_020e961c(void);
extern void FUN_020e9628(int);
extern void FUN_020e7be8(int);
extern int FUN_020e7fd0(int, int);
extern unsigned long long FUN_02067e0c(void);
extern int FUN_020e84e4(int, int);
extern int FUN_020e852c(int);
extern void FUN_020e7a8c(int);

int FUN_020e8028(int r6, int r4, int r5) {
    if (FUN_020e1534() != 6) {
        return 1;
    }
    switch (r4) {
    case 0xd:
        if (*(int *)(FUN_020e961c() + 0x1a0) != 8) {
            FUN_020e9628(8);
            FUN_020e7be8(r5);
        }
        if (FUN_020e7fd0(r6, 0xe) == 0) {
            return 0;
        }
        break;
    case 0xe:
        if (*(int *)(FUN_020e961c() + 0x1a0) == 0xe) {
            unsigned long long now = FUN_02067e0c();
            unsigned char *p = FUN_020e961c();
            unsigned long long dt = (((now - *(unsigned long long *)(p + 0x1e8)) << 6) / 0x82eaULL) >> 1;
            int idx;
            if (dt > 300) {
                p = FUN_020e961c();
                dt = ((((now - *(unsigned long long *)(p + 0x1e8)) << 6) / 0x82eaULL) >> 1) - 300;
                if (dt > (int)*(unsigned short *)(FUN_020e961c() + 0x1b2)) {
                    *(unsigned short *)(FUN_020e961c() + 0x1b2) = (unsigned short)dt;
                }
            }
            idx = FUN_020e84e4(r6, 0);
            if (idx != 0xff) {
                *(int *)(FUN_020e961c() + 0x1d8) |= (1 << idx);
            }
            if (FUN_020e852c(1) == *(int *)(FUN_020e961c() + 0x1d8)) {
                int i;
                for (i = 1; i <= (int)FUN_020e961c()[0xd]; i++) {
                    if (FUN_020e7fd0(*(int *)(FUN_020e961c() + i * 4 + 0xf4), 0xf) == 0) {
                        return 0;
                    }
                }
                FUN_020e9628(0xf);
            }
        } else {
            if (FUN_020e7fd0(r6, 0xf) == 0) {
                return 0;
            }
        }
        break;
    case 0xf:
        if (*(int *)(FUN_020e961c() + 0x1a0) == 8) {
            FUN_020e7a8c(2);
        }
        break;
    }
    return 1;
}
