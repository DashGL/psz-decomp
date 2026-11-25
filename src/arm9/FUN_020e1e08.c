// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
struct Inner {
    int *f0;
    int f4;
    char pad[0x28];
    int f30;
    unsigned long long f34;
};

struct G {
    int f0;
    struct Inner *f4;
};

extern struct G DAT_0211de44;
extern int FUN_020e0558(void);
extern void FUN_020e21ec(void);
extern void FUN_020c88ac(int *);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_020e1ebc(int, int);

void FUN_020e1e08(void) {
    if (DAT_0211de44.f4 == 0) {
        return;
    }
    if (FUN_020e0558() != 0) {
        return;
    }
    switch (DAT_0211de44.f4->f4) {
    case 1:
        FUN_020e21ec();
        break;
    case 2:
    case 3:
    case 4:
        if (DAT_0211de44.f4->f0 != 0 && *DAT_0211de44.f4->f0 != 0) {
            FUN_020c88ac(DAT_0211de44.f4->f0);
        }
        if (DAT_0211de44.f4->f30 != 0) {
            unsigned long long now = FUN_02067e0c();
            if (((now - DAT_0211de44.f4->f34) * 64ULL) / 0x82eaULL > 0xea60ULL) {
                FUN_020e1ebc(6, -0xee8e);
                DAT_0211de44.f4->f30 = 0;
            }
        }
        break;
    case 0:
    case 5:
        break;
    }
}
