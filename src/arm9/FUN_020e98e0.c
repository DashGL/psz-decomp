// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p
extern char *DAT_0211e5e4;
extern int FUN_020e0558(void);
extern int FUN_020e1508(int);
extern void FUN_020e9c0c(int, int, int, int);
int FUN_020e98e0(int a, int b, int c) {
    void (*fn)(int, int);
    if (FUN_020e0558() != 0) {
        return 0;
    }
    if (FUN_020e1508(a) == 0) {
        return 0;
    }
    if (c > *(unsigned short *)(DAT_0211e5e4 + 0x610)) {
        return 0;
    }
    FUN_020e9c0c(a, b, c, 0);
    fn = *(void (**)(int, int))(DAT_0211e5e4 + 0x600);
    if (fn != 0) {
        fn(c, a);
    }
    return 1;
}
