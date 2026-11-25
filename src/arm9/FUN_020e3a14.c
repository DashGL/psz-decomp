// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x15c, exact bytes and relocation targets.
extern void FUN_020e05d8(int, void *, int);
extern int FUN_020e56d0(char *, int, int, int);
extern unsigned int FUN_02003c70(const char *);
extern void *FUN_020e05ac(int, int);
extern void FUN_020e4a2c(int, const char *);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_020e546c(int, int, int, int);
extern char *FUN_020e961c(void);
extern void FUN_020e9628(int);
extern void *FUN_020d88d8(int, int, int, int, int, int, int, void (*)(void), int);
extern int FUN_020e88f8(int);
extern void FUN_020e2ab8(int, const char *, int);
extern int FUN_020e5564(int);
extern int FUN_020e88f8(int);
extern void FUN_020e38f0(int);
extern void FUN_020e859c(int);
extern void FUN_020e8ae4(void);

struct S_0211de64 {
    int f0;
    int f4;
    char *f8;
};
extern struct S_0211de64 DAT_0211de64;
extern const char DAT_02101740[];
extern const char DAT_02101748[];

void FUN_020e3a14(int p0, const char *p1, int p2, int p3, int p4, int p5) {
    char buf[0x100];
    if (DAT_0211de64.f8 != 0) {
        FUN_020e05d8(4, DAT_0211de64.f8, 0);
        DAT_0211de64.f8 = 0;
    }
    if (p1 != 0) {
        int len = FUN_020e56d0(buf, -1, 0x20, 3);
        int slen = 0x100 - len - FUN_02003c70(DAT_02101740);
        DAT_0211de64.f8 = (char *)FUN_020e05ac(4, slen);
        if (DAT_0211de64.f8 == 0) {
            FUN_020e4a2c(9, (const char *)0xfffec77f);
            return;
        }
        FUN_02065774(p1, DAT_0211de64.f8, slen);
        *(DAT_0211de64.f8 + slen - 1) = 0;
    }
    FUN_020e546c(0, p0, p2, p3);
    *(int *)(FUN_020e961c() + 0x474) = p4;
    *(int *)(FUN_020e961c() + 0x478) = p5;
    FUN_020e9628(2);
    if (*(void **)(FUN_020e961c() + 0xe4) == 0) {
        char *s0 = FUN_020e961c();
        char *s1 = FUN_020e961c();
        char *s2 = FUN_020e961c();
        char *s3 = FUN_020e961c();
        *(void **)(s0 + 0xe4) = FUN_020d88d8(
            *(int *)(s1 + 0x2f4),
            *(int *)(s2 + 0x2f4),
            *(int *)(s3 + 0x2f8),
            0, 0x14, 1, 0, FUN_020e8ae4, 0
        );
    }
    if (*(void **)(FUN_020e961c() + 0xe4) == 0 && FUN_020e88f8(5) != 0) {
        return;
    }
    FUN_020e2ab8(3, DAT_02101748, 0);
    if (FUN_020e88f8(FUN_020e5564(*(int *)(FUN_020e961c() + 0x200))) == 0) {
        if (*(int *)(FUN_020e961c() + 0x10) == 0) {
            FUN_020e38f0(*(int *)(FUN_020e961c() + 0x200));
        }
        FUN_020e859c(0);
    }
}
