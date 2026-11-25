// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
extern void *FUN_020e961c(void);
extern void FUN_020d6750(void *, int);
extern void FUN_020d6770(void *, void *);

struct E12 {
    unsigned char f0;
    unsigned char f1;
    unsigned short f2;
    int f4;
    void *f8;
};

extern struct E12 DAT_0211de84[];

void FUN_020e9058(int a0, void *a1) {
    switch (a0) {
    case 8:
        FUN_020d6750(a1, *(unsigned char *)((char *)FUN_020e961c() + 0x14));
        return;
    case 10:
        FUN_020d6750(a1, *(unsigned char *)((char *)FUN_020e961c() + 0x16));
        return;
    case 50:
        FUN_020d6750(a1, *(int *)((char *)FUN_020e961c() + 0x200));
        return;
    case 51:
        FUN_020d6750(a1, *(unsigned char *)((char *)FUN_020e961c() + 0x15));
        return;
    case 52:
        FUN_020d6750(a1, *(int *)((char *)FUN_020e961c() + 0x20));
        return;
    case 53:
        FUN_020d6750(a1, 3);
        return;
    case 54:
        FUN_020d6750(a1, 1);
        return;
    default:
        a0 -= 100;
        if (a0 < 0 || a0 >= 0x9a) {
            return;
        }
        if (DAT_0211de84[a0].f0 == 0) {
            return;
        }
        if (DAT_0211de84[a0].f1 != 0) {
            FUN_020d6770(a1, DAT_0211de84[a0].f8);
            return;
        }
        FUN_020d6750(a1, *(int *)DAT_0211de84[a0].f8);
        return;
    }
}
