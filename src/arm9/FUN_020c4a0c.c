// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020c4898(int, int, int *, unsigned int *);
extern int FUN_020c4bfc(int, int, int, unsigned int);
extern void FUN_020c4f70(int, int, int, unsigned int);
extern int FUN_020c4f10(int, int, unsigned int);

int FUN_020c4a0c(int a, int b, int c) {
    int sp4 = 0;
    unsigned int sp0 = 0;
    int res;
    if (FUN_020c4898(a, b, &sp4, &sp0) == 0) {
        void (*fn)(int) = *(void (**)(int))(a + 0x1c);
        if (fn != 0) {
            fn(1);
        }
        return 0;
    }
    sp0 >>= *(int *)(a + 0x45c);
    if (FUN_020c4bfc(a, sp4, c, sp0) == 0) {
        return 0;
    }
    FUN_020c4f70(a, c, c, sp0);
    res = FUN_020c4f10(a, c, sp0);
    if (*(int *)(a + 0x45c) == 0 && *(int *)(a + 0x3c) != res) {
        *(int *)(a + 0x24) = 0x66;
        return 0;
    }
    return 1;
}
