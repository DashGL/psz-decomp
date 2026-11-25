// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
extern char *DAT_0211dcbc;
extern int DAT_02101714;
extern int FUN_020e0558(void);
extern void FUN_020e2ab8(int, int *, int);
extern void FUN_020e34e0(void);
extern void FUN_020e170c(int);
extern void FUN_020d36ec(int);
int FUN_020e13cc(void) {
    if (DAT_0211dcbc == 0 || FUN_020e0558() != 0 || (*(int *)(DAT_0211dcbc + 0x24) != 5 && *(int *)(DAT_0211dcbc + 0x24) != 6)) {
        return -1;
    }
    if ((unsigned char)DAT_0211dcbc[0x385] == 0) {
        FUN_020e2ab8(1, &DAT_02101714, 0);
        FUN_020e34e0();
        FUN_020e170c(3);
        return 1;
    }
    DAT_0211dcbc[0x2d] = 1;
    FUN_020d36ec(*(int *)DAT_0211dcbc);
    DAT_0211dcbc[0x2d] = 0;
    return 0;
}
