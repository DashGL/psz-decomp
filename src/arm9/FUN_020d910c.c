// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
extern int FUN_020d8090(int);
extern int FUN_020c72f8(int, int *);
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern void FUN_020c7290(int, int *);
extern const char D_02100094[];
extern const char D_021000a0[];
extern const char D_02100008[];

void FUN_020d910c(int a, int b) {
    int k[2];
    k[0] = b;
    int p = FUN_020c72f8(FUN_020d8090(a), k);
    if (p == 0) {
        FUN_02000edc(D_02100094, D_021000a0, D_02100008, 0x13e);
    }
    if (p != 0) {
        int c = *(int *)(p + 4) - 1;
        *(int *)(p + 4) = c;
        if (c == 0) {
            FUN_020c7290(FUN_020d8090(a), k);
        }
    }
}
