// flags: -O4,p
extern unsigned char *FUN_020e961c(void);
#pragma thumb off
extern unsigned long long FUN_02067e0c(void);
#pragma thumb reset
extern int FUN_020e7fd0(int, int);
extern int FUN_020e7c68(int);
extern void FUN_020e7a8c(int);

int FUN_020e81c0(void) {
    unsigned long long r45;
    if (*(int *)(FUN_020e961c() + 0x1a0) == 8 ||
        *(int *)(FUN_020e961c() + 0x1a0) == 0xe ||
        *(int *)(FUN_020e961c() + 0x1a0) == 0xf) {
        unsigned long long now = FUN_02067e0c();
        unsigned char *p = FUN_020e961c();
        unsigned long long start = *(unsigned long long *)(p + 0x1e8);
        r45 = ((now - start) << 6) / 0x82eaULL;
    } else {
        return 1;
    }
    switch (*(int *)(FUN_020e961c() + 0x1a0)) {
    case 8:
        if (r45 > 6000ULL) {
            if (FUN_020e7fd0(*(int *)(FUN_020e961c() + 0xf4), 0xe) == 0) {
                return 0;
            }
        }
        break;
    case 0xe:
        if (r45 > 6000ULL) {
            FUN_020e961c()[0x1ac]++;
            if (FUN_020e961c()[0x1ac] > 5) {
                if (FUN_020e7c68(*(int *)(FUN_020e961c() + 0x1d8)) == 0) {
                    return 0;
                }
                if (FUN_020e961c()[0xd] != 0) {
                    unsigned char *p;
                    FUN_020e961c()[0x1ac] = 0;
                    p = FUN_020e961c();
                    *(unsigned long long *)(p + 0x1e8) = FUN_02067e0c();
                } else {
                    FUN_020e7a8c(2);
                }
            } else {
                int i;
                for (i = 1; i <= FUN_020e961c()[0xd]; i++) {
                    if ((*(int *)(FUN_020e961c() + 0x1d8) & (1 << FUN_020e961c()[0x2d0 + i])) == 0) {
                        if (FUN_020e7fd0(*(int *)(FUN_020e961c() + 0xf4 + i * 4), 0xd) == 0) {
                            return 0;
                        }
                    }
                }
            }
        }
        break;
    case 0xf:
        if (r45 > *(unsigned short *)(FUN_020e961c() + 0x1b2)) {
            FUN_020e7a8c(2);
        }
        break;
    }
    return 1;
}
