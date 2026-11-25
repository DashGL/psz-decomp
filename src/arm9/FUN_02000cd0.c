// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S {
    int f0;
    void (*f4)(void);
    int f8;
    int fc;
};
extern struct S D_02101880;
extern void FUN_0200c23c(void);
extern void FUN_02000d1c(int);

void FUN_02000cd0(int a) {
    if (D_02101880.fc == 0) {
        FUN_0200c23c();
        if (D_02101880.f4 != 0) {
            D_02101880.f4();
            D_02101880.f4 = 0;
        }
    }
    FUN_02000d1c(a);
}
