// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x124, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_020e961c(void);
extern int FUN_020d374c(int);
extern int FUN_020d373c(int);
extern int FUN_020d6374(void *, int, int, int, int, int, int, void *, void *, void *, void *, void *, void *, int);
extern void FUN_020d66bc(int);
extern void FUN_020e8960(int);
extern void FUN_020d6508(int, void *);
extern void FUN_020d64e0(int, void *);
extern void FUN_020d64f4(int, void *);
extern void FUN_020d6674(int);
extern void FUN_020e9058(void);
extern void FUN_020e9138(void);
extern void FUN_020e913c(void);
extern void FUN_020e9140(void);
extern void FUN_020e91a8(void);
extern void FUN_020e91ac(void);
extern void FUN_020e91b4(void);
extern void FUN_020e91c8(void);
extern void FUN_020e9260(void);

int FUN_020e38f0(int arg0) {
    int i;
    int res;
    if (*(int *)(FUN_020e961c() + 0x10) != 0) {
        return 0;
    }
    *(int *)(FUN_020e961c() + 0x200) = arg0;
    for (i = 0; i < 5; i++) {
        char *p = FUN_020e961c();
        int a = FUN_020d374c(**(int **)(FUN_020e961c() + 4));
        int b = FUN_020d373c(**(int **)(FUN_020e961c() + 4));
        char *p2 = FUN_020e961c();
        res = FUN_020d6374(
            p + 0x10, a, b, *(int *)(p2 + 0x2f4),
            *(int *)(FUN_020e961c() + 0x2f8), 1, 1,
            (void *)FUN_020e9058, (void *)FUN_020e9138, (void *)FUN_020e913c,
            (void *)FUN_020e9140, (void *)FUN_020e91a8, (void *)FUN_020e91ac, 0);
        if (res == 0) {
            break;
        }
        FUN_020d66bc(*(int *)(FUN_020e961c() + 0x10));
        *(int *)(FUN_020e961c() + 0x10) = 0;
        if (res != 3 || i == 4) {
            FUN_020e8960(res);
            return res;
        }
    }
    *(int *)(FUN_020e961c() + 0x1c) = 0;
    *(unsigned short *)(FUN_020e961c() + 0x1a) = 0;
    FUN_020d6508(*(int *)(FUN_020e961c() + 0x10), (void *)FUN_020e91b4);
    FUN_020d64e0(*(int *)(FUN_020e961c() + 0x10), (void *)FUN_020e91c8);
    FUN_020d64f4(*(int *)(FUN_020e961c() + 0x10), (void *)FUN_020e9260);
    FUN_020d6674(*(int *)(FUN_020e961c() + 0x10));
    return res;
}
