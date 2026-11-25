// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern void FUN_020656b8(int, int, int);
extern int *D_0211de50[];

void FUN_020e2db0(int a, int b, int c) {
    if (D_0211de50[3] != 0) {
        FUN_020656b8(a + b * 0xc, 0, 0xc);
        int *p = D_0211de50[3];
        void (*fn)(int, int, int) = (void (*)(int, int, int))p[0xf];
        if (fn != 0) {
            fn(b, c, p[0x10]);
        }
    }
}
