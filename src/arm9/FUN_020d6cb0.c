// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_020d6b08(int, int, int, int, int);

void FUN_020d6cb0(int a, int b, int c, int d, int e, int f, int g, int h) {
    FUN_020d6b08(a, b, 0, c, d);
    FUN_020d6b08(a, b, 1, e, f);
    FUN_020d6b08(a, b, 2, g, h);
}
