// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x62, exact bytes and relocation targets.
extern int FUN_0202e358(void);
extern void FUN_0202d8a0(void);
extern void FUN_0202dafc(void);
extern void FUN_0202dd84(void);
extern void FUN_0202e02c(void);
extern void FUN_0202e148(void);
extern void FUN_020dad18(int);

int FUN_020db76c(void) {
    switch (FUN_0202e358()) {
    case 0:
        return 1;
    case 1:
        FUN_0202d8a0();
        break;
    case 3:
        FUN_0202dafc();
        break;
    case 6:
        FUN_0202dd84();
        break;
    case 9:
        FUN_0202e02c();
        break;
    case 12:
        FUN_0202e148();
        break;
    case 11:
        FUN_020dad18(0);
        return -1;
    }
    return 0;
}
