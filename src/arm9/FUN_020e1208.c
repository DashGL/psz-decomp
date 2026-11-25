// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
extern char *DAT_0211dcbc;
extern int FUN_020e0558(void);
extern void FUN_020e1640(void);
extern void FUN_020e170c(int);
extern void FUN_020e3b70(unsigned char, void *, int, int, int);
extern void FUN_020e1908(void);
int FUN_020e1208(int a, int b, int c, int d, int e) {
    if (FUN_020e0558() != 0 || *(int *)(DAT_0211dcbc + 0x24) != 3) {
        return 0;
    }
    FUN_020e1640();
    *(int *)(DAT_0211dcbc + 0x88) = b;
    *(int *)(DAT_0211dcbc + 0x8c) = c;
    DAT_0211dcbc[0x2c] = 0;
    FUN_020e170c(5);
    FUN_020e3b70((unsigned char)(a - 1), (void *)FUN_020e1908, 0, d, e);
    return 1;
}
