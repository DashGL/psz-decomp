// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets.
// flags: -O4,p
struct S_0211dcbc {
    unsigned char pad0[0x1c];
    unsigned char f1c[8];
    int f24;
    unsigned char pad28[0x60];
    void (*f88)(int, int, int, int, int, int);
    int f8c;
};
extern struct S_0211dcbc *PTR_0211dcbc;
extern unsigned char DAT_0210170c[];
extern unsigned char DAT_02101710[];
extern unsigned char DAT_02101714[];
extern void FUN_020e1908(void);
extern int FUN_020e0558(void);
extern void FUN_020e1640(void);
extern void FUN_020e170c(int a);
extern int FUN_020e2a24(int a);
extern int FUN_020c8ec8(void *a, int b);
extern void FUN_020c8e5c(void *a, int b, int *c);
extern void FUN_020c8d2c(void *a, int b, void *c);
extern void FUN_020e0abc(const void *a, char *b, const char *c, int d);
extern unsigned long FUN_02005738(const char *a, char **b, int c);
extern void FUN_020e3bfc(int a, void (*b)(void), int c, int d, int e);
extern void FUN_020e056c(int a, int b);
extern void FUN_020e2ab8(int a, const void *b, int c);

struct Entry_020e1268 {
    int f0;
    int f4;
    char str[0x20c];
};

int FUN_020e1268(int p0, void (*p1)(int, int, int, int, int, int), int p2, int p3, int p4) {
    int idx = -1;
    char buf[4];
    struct Entry_020e1268 entry;
    int r4;
    int err;

    if (FUN_020e0558() != 0 || PTR_0211dcbc->f24 != 3) {
        return 0;
    }
    FUN_020e1640();
    PTR_0211dcbc->f88 = p1;
    PTR_0211dcbc->f8c = p2;
    FUN_020e170c(5);
    r4 = FUN_020e2a24(p0);
    if (r4 == 0 || FUN_020c8ec8(PTR_0211dcbc->f1c, r4) == 0) {
        err = 0xb;
    } else {
        FUN_020c8e5c(PTR_0211dcbc->f1c, r4, &idx);
        FUN_020c8d2c(PTR_0211dcbc->f1c, idx, &entry);
        if (entry.f4 != 6) {
            err = 0xb;
        } else {
            buf[0] = 0x30;
            FUN_020e0abc(DAT_0210170c, buf, entry.str, 0x2f);
            err = (unsigned char)FUN_02005738(buf, 0, 10);
            FUN_020e0abc(DAT_02101710, buf, entry.str, 0x2f);
            unsigned char v = FUN_02005738(buf, 0, 10);
            if (v == err) {
                err = 0xd;
            } else {
                FUN_020e3bfc(r4, FUN_020e1908, 0, p3, p4);
                return 1;
            }
        }
    }
    FUN_020e056c(err, 0);
    PTR_0211dcbc->f88(err, 0, 1, 0, 0, PTR_0211dcbc->f8c);
    if (PTR_0211dcbc != 0 && PTR_0211dcbc->f24 == 5) {
        FUN_020e170c(3);
        FUN_020e2ab8(1, DAT_02101714, 0);
    }
    return 1;
}
