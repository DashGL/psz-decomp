// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
extern char *FUN_020dac74(int);
extern int FUN_020df674(void);
extern int FUN_020dada0(unsigned char);
extern int FUN_020df6a0(void);
extern void FUN_020df594(void);

int FUN_020dc4ac(char *a) {
    char *p = FUN_020dac74(1);
    int r = FUN_020df674();
    if (r != 0) {
        if ((unsigned char)p[0x15] == FUN_020dada0(*(unsigned char *)(a + 0xd0d))) {
            *(int *)(p + 0x10) = FUN_020df6a0();
        }
        FUN_020df594();
        if (r != 0xb) {
            *(a + *(unsigned char *)(a + 0xd13) * 4 + 0x444) = 1;
            return 0xb;
        }
        return 0xf;
    }
    return 0xe;
}
