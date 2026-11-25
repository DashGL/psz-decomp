// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern int FUN_02077930(void);
extern int FUN_02077cb0(int, int);
extern int (*D_020f4290[])(int, signed char, int, int);
extern int (*D_020f4340[])(int, signed char, int, int);

int FUN_0208f2b4(int a, int b) {
    int idx = FUN_02077cb0(FUN_02077930(), b);
    if (idx >= 0 && idx < 0x2c && D_020f4290[idx] != 0) {
        return D_020f4340[idx](a, (signed char)b, -1, 0);
    }
    return 0;
}
