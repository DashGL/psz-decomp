// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p
extern unsigned char *FUN_020e961c(void);
extern int *FUN_020e1670(int, int);
extern void FUN_020d36d4(int);
extern void FUN_020e4d78(int, int);
int FUN_020e7be8(int a) {
    int *r4;
    *(int *)(FUN_020e961c() + 0x20c) = a;
    r4 = FUN_020e1670(a, FUN_020e961c()[0xd] + 1);
    if (r4 != 0) {
        FUN_020e961c()[0x1a8] = 2;
        FUN_020d36d4(*r4);
        FUN_020e961c()[0x1a8] = 0;
        return 1;
    }
    FUN_020e4d78(a, FUN_020e961c()[0xd] + 1);
    return 0;
}
