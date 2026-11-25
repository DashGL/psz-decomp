// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020e0558(void);
extern int FUN_020e961c(void);
extern int FUN_020e1534(void);
extern void FUN_020e5050(void);

int FUN_020e354c(void (*a)(int), int b) {
    if (FUN_020e0558() != 0 || FUN_020e961c() == 0 || *(unsigned char *)(FUN_020e961c() + 0x15) != 2 ||
        (FUN_020e1534() != 5 && FUN_020e1534() != 6)) {
        return 0;
    }
    if (*(int *)(FUN_020e961c() + 0x1a0) == 0xa) {
        int p = FUN_020e961c();
        *(unsigned char *)(p + 0x16) = *(unsigned char *)(FUN_020e961c() + 0xd);
        FUN_020e5050();
        if (a != 0) {
            a(b);
        }
    } else {
        *(void (**)(int))(FUN_020e961c() + 0x47c) = a;
        *(int *)(FUN_020e961c() + 0x480) = b;
        *(unsigned char *)(FUN_020e961c() + 0x1ae) = 1;
    }
    return 1;
}
