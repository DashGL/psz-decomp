// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p
extern char *DAT_0211dcbc;
extern int FUN_020e0558(void);
extern void FUN_020e1640(void);
extern void FUN_020e170c(int);
extern void FUN_020e3a14(unsigned char, int, void *, int, int, int);
extern void FUN_020e1908(void);
int FUN_020e11a4(int a, int b, int c, int d, int e, int f) {
    if (FUN_020e0558() != 0 || *(int *)(DAT_0211dcbc + 0x24) != 3) {
        return 0;
    }
    FUN_020e1640();
    *(int *)(DAT_0211dcbc + 0x80) = c;
    *(int *)(DAT_0211dcbc + 0x84) = d;
    FUN_020e170c(5);
    FUN_020e3a14((unsigned char)(a - 1), b, (void *)FUN_020e1908, 0, e, f);
    return 1;
}
