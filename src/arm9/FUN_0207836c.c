// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern void FUN_02078c80(int);
extern void *FUN_02086e3c(void);
extern char *FUN_020870c4(void *);
extern void FUN_020783b0(char *);
extern void FUN_020783c0(void *, unsigned short *);
extern void FUN_02078ae0(int);
extern int D_0211a3c4;

int FUN_0207836c(unsigned short *p) {
    FUN_02078c80(1);
    char *q = FUN_020870c4(FUN_02086e3c());
    *(int *)(q + 0xd3c) = 0;
    *(unsigned short *)(q + 0xd6c) = *p;
    FUN_020783b0(q + 0xd28);
    FUN_020783c0(&D_0211a3c4, p);
    FUN_02078ae0(0);
    return 1;
}
