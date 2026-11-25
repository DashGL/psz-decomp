// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,s
struct Arr {
    int a[8];
};
extern const struct Arr D_020f58b4;
extern int FUN_02050018(int, void (*)(void), int, int);
extern void FUN_020b55ec(void);

void FUN_020b559c(int a, int b, int c) {
    struct Arr s = D_020f58b4;
    int i;
    for (i = 0; i < 8; i++) {
        int r = (s.a[i] << 12) / c;
        FUN_02050018(r, FUN_020b55ec, b, 0);
        FUN_02050018(r, FUN_020b55ec, b, 1);
    }
}
