// flags: -O4,p
struct S_020e961c_sub {
    unsigned char pad0[0xb4];
    int fb4;
};

struct S_020e961c {
    int f0;
    unsigned char pad4[0xc];
    struct S_020e961c_sub *f10;
    unsigned char f14;
    unsigned char f15;
    unsigned char f16;
    unsigned char f17;
    unsigned char pad18[2];
    unsigned short f1a;
    int f1c;
    int f20;
    unsigned char pad24[0x17c];
    int f1a0;
    unsigned char pad1a4[5];
    unsigned char f1a9;
    unsigned char pad1aa[0x56];
    int f200;
    int f204;
    int f208;
};

extern struct S_020e961c *FUN_020e961c(void);
extern int FUN_020c8ec8(int, int);
extern int FUN_020e2a58(int);
extern int FUN_020e83f0(int);
extern void FUN_020d6674(struct S_020e961c_sub *);
extern int FUN_020e6fc4(int);
extern int FUN_020e6b74(int);
extern unsigned char DAT_0211de64[];

int FUN_020e67b4(int a0, unsigned int a1, unsigned short a2, unsigned char a3, int a4) {
    int ret;

    switch (FUN_020e961c()->f15) {
    case 1:
        if (FUN_020c8ec8(FUN_020e961c()->f0, a0) == 0 || FUN_020e2a58(a0) == -1) {
            ret = 0xff;
            break;
        }
        if (FUN_020e83f0(a0) == 0) {
            ret = 3;
            break;
        }
        /* fall through */
    case 0:
        if (a3 != FUN_020e961c()->f15 ||
            FUN_020e961c()->f1a9 != 0 ||
            FUN_020e961c()->f14 == FUN_020e961c()->f16 ||
            (FUN_020e961c()->f17 != 0 && FUN_020e961c()->f20 == FUN_020e961c()->f200)) {
            ret = 3;
            if (FUN_020e961c()->f15 == 0 &&
                FUN_020e961c()->f10->fb4 == 0 &&
                FUN_020e961c()->f17 != 0 &&
                FUN_020e961c()->f20 == FUN_020e961c()->f200) {
                FUN_020d6674(FUN_020e961c()->f10);
            }
            break;
        }
        if ((FUN_020e961c()->f1a0 != 3 && FUN_020e961c()->f1a0 != 4) ||
            (FUN_020e961c()->f1c == 0 && FUN_020e961c()->f1a == 0) ||
            (a1 == 0 && a2 == 0)) {
            ret = 4;
            break;
        }
        if (FUN_020e961c()->f204 != 0) {
            if (a0 == FUN_020e961c()->f204) {
                if (a4 != 0 || (FUN_020e961c()->f200 < a0 && a0 != FUN_020e961c()->f208)) {
                    ret = 2;
                } else {
                    ret = 0xff;
                }
            } else {
                if (a4 != 0 || (FUN_020e961c()->f200 < a0 && FUN_020e961c()->f208 == 0)) {
                    if (FUN_020e6b74(FUN_020e6fc4(FUN_020e961c()->f204)) != 0) {
                        return 0xff;
                    }
                    ret = 2;
                } else {
                    ret = 3;
                }
            }
        } else {
            ret = 2;
        }
        break;
    case 2:
        if (FUN_020c8ec8(FUN_020e961c()->f0, a0) == 0 || FUN_020e2a58(a0) == -1) {
            ret = 0xff;
            break;
        }
        if (a3 != 3 || FUN_020e961c()->f14 == FUN_020e961c()->f16) {
            ret = 3;
            break;
        }
        if (DAT_0211de64[0x1c] == 1 && DAT_0211de64[0x1d] == 1) {
            ret = 0x13;
            break;
        }
        if (FUN_020e961c()->f1a0 != 10 ||
            (FUN_020e961c()->f1c == 0 && FUN_020e961c()->f1a == 0) ||
            (a1 == 0 && a2 == 0)) {
            ret = 4;
            break;
        }
        ret = 2;
        break;
    }

    return ret;
}
