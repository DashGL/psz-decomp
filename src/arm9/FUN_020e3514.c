// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern int FUN_020e0558(void);
extern unsigned char *FUN_020e961c(void);
extern int FUN_020e1534(void);

int FUN_020e3514(void) {
    if (FUN_020e0558() != 0) {
        return 0;
    }
    if (FUN_020e961c() == 0 || FUN_020e1534() != 5 || FUN_020e961c()[0x1a9] != 0) {
        return 0;
    }
    return 1;
}
