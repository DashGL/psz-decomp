// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02054680(int, int, int, int, int, int, int);
extern void FUN_0206455c(int, int);

int FUN_02064388(int a, int b, int c, int d, unsigned short e) {
    int r = FUN_02054680(a, 0, b, c, e, 1, 3);
    FUN_0206455c(0xf, r);
    return r;
}
