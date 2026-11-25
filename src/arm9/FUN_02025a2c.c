// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02024028(void);
extern void FUN_02023f9c(void);
extern void FUN_02023fc8(int, int, int);
extern int FUN_020256b4(int, int, int, int, int);
extern void FUN_0202405c(void);
int FUN_02025a2c(int a, int b, int c) {
    if (b == 0) {
        return -1;
    }
    FUN_02024028();
    FUN_02023f9c();
    FUN_02023fc8(0, 0x35, b);
    int r4 = FUN_020256b4(a, 1, c, 0, 0);
    FUN_0202405c();
    return r4;
}
