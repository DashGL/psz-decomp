// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -O4,s
extern unsigned char DAT_0211de64[];
extern void FUN_020e546c(int, int, int, int);
extern char *FUN_020e961c(void);
extern void FUN_020e9628(int);
extern int FUN_020e5050(void);
extern int FUN_020e88a4(int);
extern void FUN_020e38f0(int);

void FUN_020e3b70(int a, int b, int c, int d, int e) {
    char *p;
    FUN_020e546c(2, a, b, c);
    *(int *)(FUN_020e961c() + 0x46c) = d;
    *(int *)(FUN_020e961c() + 0x470) = e;
    p = FUN_020e961c();
    *(int *)(p + 0xf4) = *(int *)(FUN_020e961c() + 0x200);
    *(int *)(FUN_020e961c() + 0x2f0) = 1;
    *(unsigned char *)(FUN_020e961c() + 0xe) = 0;
    DAT_0211de64[0x1d] = 0;
    FUN_020e9628(10);
    if (FUN_020e88a4(FUN_020e5050()) == 0 && *(int *)(FUN_020e961c() + 0x10) == 0) {
        FUN_020e38f0(*(int *)(FUN_020e961c() + 0x200));
    }
}
