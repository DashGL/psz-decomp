// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x15c, exact bytes and relocation targets.
extern void FUN_020d7c70(void *, void *, int, int, int);
extern void FUN_020d8050(void *, void *);
extern void FUN_020d9840(void *, int, void *);
extern int FUN_020c6e0c(int);
extern void FUN_020d7c34(void *, int);

struct S_d86f8_0 {
    int f0;
    int f4;
    char pad[0x7d0 - 8];
    unsigned short f7d0;
};

struct S_d86f8_2 {
    int f0;
    unsigned short f4;
    char pad[0x14 - 6];
    unsigned char f14;
    unsigned char f15;
};

struct S_d86f8_3 {
    char pad0[0x10];
    int f10;
    char pad1[0x40 - 0x14];
    int f40;
    char pad2[0x4c - 0x44];
    int f4c;
    char pad3[0x6f0 - 0x50];
    int f6f0;
    char pad4[0x828 - 0x6f4];
    int f828;
    int f82c;
    int f830;
    unsigned short f834;
    unsigned short f836;
    void (*f838)(struct S_d86f8_3 *, int, struct S_d86f8_2 *, int);
    int f83c;
};

void FUN_020d86f8(struct S_d86f8_0 *p0, unsigned int p1, struct S_d86f8_2 *p2, struct S_d86f8_3 *p3) {
    switch (p1) {
    case 0:
        p3->f838(p3, 0, p2, p3->f83c);
        if ((p2->f14 & 3) && (p2->f14 & 0x40)) {
            break;
        }
        if (p2->f14 & 0x2c) {
            break;
        }
        if (p3->f82c != 0) {
            break;
        }
        {
            int r3;
            if (p2->f15 & 1) {
                if (p3->f4c == 0 || p3->f40 == 0) {
                    r3 = 1;
                } else {
                    r3 = 0;
                }
            } else {
                r3 = 2;
            }
            if (p0->f7d0 & 0x80) {
                FUN_020d7c70(p3, p2, 0, r3, 1);
            } else {
                FUN_020d7c70(p3, p2, 0, r3, 0);
            }
        }
        break;
    case 1:
        if ((p2->f14 & 0x43) == 0) {
            p3->f838(p3, 2, p2, p3->f83c);
        } else {
            p3->f838(p3, 1, p2, p3->f83c);
        }
        break;
    case 2:
        if (p2->f14 & 0x2c) {
            FUN_020d8050(p3, p2);
        }
        p3->f838(p3, 3, p2, p3->f83c);
        break;
    case 3:
        if (p3->f828 != 0) {
            FUN_020d9840(p0, p3->f828, p2);
        }
        if (FUN_020c6e0c(p0->f4) != 0 && p3->f10 != 0) {
            break;
        }
        p3->f838(p3, 4, 0, p3->f83c);
        break;
    case 5:
        p3->f838(p3, 5, 0, p3->f83c);
        break;
    case 6:
        FUN_020d7c34(p3, p3->f6f0);
        break;
    case 4:
    case 7:
        break;
    }
    if (p2 != 0 && p2->f0 == p3->f830 && p2->f4 == p3->f834) {
        p3->f830 = 0;
    }
}
