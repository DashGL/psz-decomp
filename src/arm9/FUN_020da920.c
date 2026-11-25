// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
extern unsigned int FUN_020dad04(void);
extern unsigned int FUN_020dc2c8(void);
extern int FUN_020683d4(void);
extern unsigned int FUN_020dbcf0(void);
extern void FUN_020dacb8(unsigned int);
extern void FUN_020683e8(int);
extern unsigned int FUN_020db2f8(void);
extern unsigned int FUN_020dbc54(void);
extern unsigned int FUN_020dc320(void);
extern unsigned int FUN_020db7f8(void);
extern int FUN_020dadd0(void);
extern void FUN_020dadac(void);

int FUN_020da920(void) {
    unsigned int r5 = FUN_020dad04();
    if (r5 == 1) {
        r5 = FUN_020dc2c8();
    } else if (r5 < 7) {
        int r4 = FUN_020683d4();
        r5 = FUN_020dbcf0();
        FUN_020dacb8(r5);
        FUN_020683e8(r4);
    } else if (r5 < 9) {
        r5 = FUN_020db2f8();
    } else if (r5 < 10) {
        r5 = FUN_020dbc54();
    } else if (r5 < 16) {
        r5 = FUN_020dc320();
    } else if (r5 == 17) {
        r5 = FUN_020db7f8();
    }
    FUN_020dacb8(r5);
    if (r5 == 16) {
        int r4 = FUN_020dadd0();
        FUN_020dadac();
        return r4;
    } else if (r5 == 18) {
        FUN_020dadac();
        return -1;
    }
    return 0;
}
