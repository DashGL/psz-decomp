// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p
extern char *DAT_0211dcbc;
extern int FUN_020e0558(void);
extern void FUN_020e170c(int);
extern void FUN_020e28e8(char *, char *, void *, int, int, int, int, int);
extern void FUN_020e18e0(void);
int FUN_020e1140(int a, int b, int c, int d, int e, int f, int g) {
    if (FUN_020e0558() != 0 || *(int *)(DAT_0211dcbc + 0x24) < 3 || *(int *)(DAT_0211dcbc + 0x24) == 4) {
        return 0;
    }
    *(int *)(DAT_0211dcbc + 0x78) = b;
    *(int *)(DAT_0211dcbc + 0x7c) = c;
    FUN_020e170c(4);
    FUN_020e28e8(DAT_0211dcbc + 0xe0, DAT_0211dcbc + 0x1e0, (void *)FUN_020e18e0, 0, d, e, f, g);
    return 1;
}
