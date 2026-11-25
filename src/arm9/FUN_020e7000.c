enum { E0 = 0, E1 = 1 };
// near: 219 diff words (0x198/0x194 bytes, bad_relocs=6) under 2.0/sp2p3 -O4,p
// flags: -O4,p
extern unsigned char *FUN_020e961c(void);
extern void FUN_020d6674(int);
extern void FUN_020d5e78(int);
extern void FUN_020e7b3c(void);
extern void FUN_020e9628(int);
#pragma thumb off
extern unsigned long long FUN_02067e0c(void);
#pragma thumb on
extern void FUN_020e6cf4(int, int, int);
extern void FUN_020e7be8(int);
extern int FUN_020e7fd0(int, int);
extern void FUN_020e7a8c(int);

int FUN_020e7000(int r6) {
    int r4;
    r4 = (FUN_020e961c()[0x17] != 0 && *(int *)(FUN_020e961c() + 0x20) == *(int *)(FUN_020e961c() + 0x200)) ? E0 : E1;
    if (r4 != 0) {
        FUN_020e961c()[0x17] = 0;
        *(int *)(FUN_020e961c() + 0x20) = 0;
        FUN_020d6674(*(int *)(FUN_020e961c() + 0x10));
    }
    if (FUN_020e961c()[0xd] < 0x1f) {
        unsigned char *p1 = FUN_020e961c();
        unsigned char *p2 = FUN_020e961c();
        *(int *)(p1 + (p2[0xd] + 1) * 4 + 0xf4) = 0;
    }
    FUN_020e961c()[0x3cc] = 0xff;
    if (*(int *)(FUN_020e961c() + 0x19c) != 0) {
        FUN_020d5e78(*(int *)(FUN_020e961c() + 0x19c));
        *(int *)(FUN_020e961c() + 0x19c) = 0;
    }
    {
        unsigned char *p1 = FUN_020e961c();
        unsigned char *p2 = FUN_020e961c();
        p1[0x14] = p2[0xd];
    }
    *(int *)(FUN_020e961c() + 0x204) = 0;
    if (r4 == 0) {
        if (FUN_020e961c()[0x15] != 3) {
            FUN_020e7b3c();
        }
    } else if (FUN_020e961c()[0x15] == 0) {
        unsigned char *p;
        FUN_020e9628(3);
        *(int *)(FUN_020e961c() + 0xe8) = 2;
        p = FUN_020e961c();
        *(unsigned long long *)(p + 0xec) = FUN_02067e0c();
    } else if (FUN_020e961c()[0x15] == 1) {
        FUN_020e9628(4);
        FUN_020e6cf4(1, 0, 0);
    } else if (FUN_020e961c()[0x15] == 2) {
        int i;
        FUN_020e9628(0xe);
        *(int *)(FUN_020e961c() + 0x1d8) = 0;
        *(unsigned short *)(FUN_020e961c() + 0x1b2) = 0;
        FUN_020e7be8(r6);
        for (i = 1; i <= (int)FUN_020e961c()[0xd]; i++) {
            if (FUN_020e7fd0(*(int *)(FUN_020e961c() + i * 4 + 0xf4), 0xd) == 0) {
                return 0;
            }
        }
        if (FUN_020e961c()[0xd] == 0) {
            FUN_020e7a8c(2);
        }
    }
    return 1;
}
