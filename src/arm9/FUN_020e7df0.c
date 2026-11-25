// flags: -O4,s
typedef unsigned int U;
typedef unsigned char B;
typedef unsigned short H;
typedef unsigned long long Q;
#define W(p, o) (*(U *)((B *)(p) + (o)))
#define S(p, o) (*(H *)((B *)(p) + (o)))
extern B *FUN_020e961c(void);
extern U FUN_020e1534(void);
extern int FUN_020e7194(U), FUN_020e7c68(U), FUN_020e7000(U);
extern void FUN_020e7d48(U, int), FUN_020e7c40(void), FUN_020e7a8c(int), FUN_020e72d0(int);
#pragma thumb off
extern Q FUN_02067e0c(void);
#pragma thumb reset
int FUN_020e7df0(void) {
    B *p, *q;
    Q now, elapsed;
    int i;
    U shift, mask;
    if (W(FUN_020e961c(), 0x1a0) == 9 || W(FUN_020e961c(), 0x1a0) == 16 || W(FUN_020e961c(), 0x1a0) == 17) {
        now = FUN_02067e0c();
        p = FUN_020e961c();
        elapsed = ((now - *(Q *)(p + 0x1e0)) << 6) / 0x82eaULL;
    } else return 1;
    switch (W(FUN_020e961c(), 0x1a0)) {
        case 9:
            if (elapsed > 6000) {
                if (FUN_020e1534() == 5 && FUN_020e961c()[0x1ad] >= 5) {
                    if (!FUN_020e7194(W(FUN_020e961c(), 0xf4))) return 0;
                } else {
                    p = FUN_020e961c();
                    p[0x1ad] = (B)(p[0x1ad] + 1);
                    FUN_020e7d48(FUN_020e961c()[0x2d0], 3);
                }
            }
            break;
        case 16:
            if (elapsed > 6000) {
                p = FUN_020e961c();
                p[0x1ab] = (B)(p[0x1ab] + 1);
                if (FUN_020e961c()[0x1ab] > 5) {
                    if (FUN_020e961c()[21] == 0 || FUN_020e961c()[21] == 1) {
                        FUN_020e7c40();
                        FUN_020e7a8c(1);
                    } else {
                        if (!FUN_020e7c68(W(FUN_020e961c(), 0x1d4))) return 0;
                        if (FUN_020e961c()[13]) {
                            FUN_020e961c()[0x1ab] = 0;
                            p = FUN_020e961c();
                            *(Q *)(p + 0x1e0) = FUN_02067e0c();
                        } else if (!FUN_020e7000(W(FUN_020e961c(), 0x20c))) return 0;
                    }
                } else {
                    i = 1;
                    if ((int)FUN_020e961c()[13] >= 1) {
                        do {
                            p = FUN_020e961c();
                            q = FUN_020e961c();
                            if (!(W(p, 0x1d4) & (1u << (q + i)[0x2d0]))) FUN_020e7d48((FUN_020e961c() + i)[0x2d0], 2);
                            i++;
                        } while (i <= FUN_020e961c()[13]);
                    }
                }
            }
            break;
        case 17:
            if (elapsed > S(FUN_020e961c(), 0x1b0)) FUN_020e72d0(4);
            break;
    }
    return 1;
}
