// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,s
struct S {
    unsigned char pad[0xc];
    unsigned char fc[0x10];
    unsigned char f1c;
    unsigned char f1d;
    unsigned char pad2[2];
    int f20[4];
    int f30;
    int f34;
    int f38[4];
    unsigned char pad3[0xf19 - 0x48];
    signed char f_f19;
    unsigned char f_f1a;
};
extern signed char FUN_020e14b4(void);
extern void FUN_020bd198(struct S *);
extern int FUN_020ba894(int);
extern int FUN_020ba948(int, int, int);
extern int FUN_020ba8a0(int);
extern void FUN_020e993c(int, int, int);
extern int FUN_020e1480(void);

void FUN_020bdb00(struct S *a, int b, int c,unsigned int unused) {
    unsigned char i;
    if (b == 0) {
        if (c == 0) {
            a->f1c = 0xa;
            a->f_f19 = FUN_020e14b4();
            a->f_f1a = 0;
            FUN_020bd198(a);
            for (i = 0; i < FUN_020e1480(); i++) {
                if (i != a->f_f19) {
                    int p = FUN_020ba894(0x24);
                    if (p != 0) {
                        p = FUN_020ba948(p, a->f30, 0x3fc);
                    }
                    a->f20[i] = p;
                    p = FUN_020ba8a0(0x5b4);
                    a->f38[i] = p;
                    FUN_020e993c(i, p, 0x5b4);
                }
                a->fc[i] = 1;
            }
        } else {
            a->f1c = 4;
        }
    } else {
        a->f1d = 2;
    }
}
