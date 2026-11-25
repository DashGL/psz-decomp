// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_020e07e0(void);
extern int FUN_020e0a0c(void);
extern unsigned int FUN_020da9f4(void);
extern void FUN_020e056c(int, int);
extern void FUN_020e098c(void);

int FUN_020e0a28(void) {
    FUN_020e07e0();
    if (FUN_020e0a0c() != 0) {
        unsigned int r = FUN_020da9f4();
        if (r == 0xff || r > 0x63) {
            r = 0x63;
        }
        FUN_020e056c(8, -0xd2f0 - r);
        FUN_020e098c();
        return 1;
    }
    return 0;
}
