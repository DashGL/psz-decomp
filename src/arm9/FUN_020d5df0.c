// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,s
struct SD5df0 {
    int f0;
    int f4;
    int f8;
    int fc;
    char pad10[0x14];
    int f24;
    int f28;
    int f2c;
    int f30;
    unsigned short f34;
    unsigned char f36;
    unsigned char f37;
    int f38;
    int f3c;
    int f40;
    int f44;
};
extern int DAT_0211cf6c;
extern int FUN_020d5d84(void);
extern struct SD5df0 *FUN_020d57b4(void);
extern int FUN_020c7468(int, int, int);
extern void FUN_020d5808(struct SD5df0 *);
extern void FUN_020d5a28(struct SD5df0 *);

int FUN_020d5df0(int a, int b, int c, int d, int e, int f) {
    struct SD5df0 *p;
    if (DAT_0211cf6c != 1) {
        return 2;
    }
    if (FUN_020d5d84() == 0) {
        return 3;
    }
    p = FUN_020d57b4();
    if (p == 0) {
        return 1;
    }
    p->f4 = a;
    p->fc = c;
    p->f8 = b;
    p->f38 = d;
    p->f3c = e;
    p->f40 = f;
    p->f0 = FUN_020c7468(2, 2, 0);
    p->f24 = 0;
    p->f36 = 0;
    p->f37 = 0;
    p->f30 = 0;
    p->f34 = 0;
    p->f28 = 0;
    p->f44 = 5;
    if (p->f0 == -1) {
        FUN_020d5808(p);
        return 2;
    }
    FUN_020d5a28(p);
    return 0;
}
