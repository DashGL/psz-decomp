// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S {
    unsigned short f0;
    unsigned short f2;
    unsigned short f4;
    unsigned short f6;
};
extern struct S D_020f96f4;
extern int D_020629b4;
extern int FUN_020534c4(void *);
extern void FUN_0206455c(int, int);
extern int FUN_02055798(void *, int, int, int, int);

void FUN_02062920(void) {
    FUN_0206455c(0x80, FUN_020534c4(&D_020629b4));
    FUN_0206455c(0x1d, FUN_02055798(&D_020629b4, D_020f96f4.f6, D_020f96f4.f2, D_020f96f4.f0, D_020f96f4.f4));
}
