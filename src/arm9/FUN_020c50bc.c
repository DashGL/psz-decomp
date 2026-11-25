// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7a, exact bytes and relocation targets.
//cpp
// flags: -O4,s
extern "C" {
extern int FUN_020c4848(void *);
extern int FUN_020c4870(int, int, int *);
extern int FUN_020c4ec8(void);
extern void FUN_020c4b20(void);
}

struct S_c50bc_020c50bc {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int pad[7];
    int f20;
    int f24;
    int f28;
    int f2c;
    void (*f30)(int);
    int f34;
};

extern "C" void FUN_020c50bc(S_c50bc_020c50bc *a) {
    switch (a->f24) {
    case 0:
        if (FUN_020c4848(a) != 0) {
            if (FUN_020c4870(a->f20, a->f28, &a->f2c) != 0) {
                a->f24 = 1;
                return;
            }
            if (a->f30 != 0) {
                a->f24 = 2;
                a->v2();
                a->f2c = FUN_020c4ec8();
                a->f30(a->f2c);
                return;
            }
        }
        break;
    case 1:
        if (a->f2c != 0x6b) {
            a->f24 = 2;
            a->v2();
            if (a->f30 != 0) {
                a->f30(a->f2c);
            }
            if (a->f34 != 0 && a->f2c == 0) {
                FUN_020c4b20();
            }
        }
        break;
    case 2:
        break;
    }
}
