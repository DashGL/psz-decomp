// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
struct Elem {
    int f0;
    int f4;
};
extern int FUN_020c6e0c(int);
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern struct Elem *FUN_020c6e10(int, int);
extern int FUN_020d3288(void *, int, int);
extern const char D_020feab8[];
extern const char D_020feac0[];
extern const char D_020fea94[];

int FUN_020d4640(char *a) {
    int n = FUN_020c6e0c(*(int *)(a + 0x60));
    struct Elem *e;
    if (n <= 0) {
        FUN_02000edc(D_020feab8, D_020feac0, D_020fea94, 0x536);
    }
    e = FUN_020c6e10(*(int *)(a + 0x60), n - 1);
    if (FUN_020d3288(a, *(int *)(a + 0x50) + e->f0, e->f4) == 0) {
        return 0;
    }
    *(int *)(a + 0x90) = 0;
    return 1;
}
