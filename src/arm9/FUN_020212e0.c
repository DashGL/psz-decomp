// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S {
    char pad[0x44];
    int f44;
};
extern struct S D_02107054;
extern int D_021071fc;
extern int FUN_020683d4(void);
extern int FUN_020669c8(void *);
extern void FUN_02066a94(void *);
extern void FUN_020683e8(int);

int FUN_020212e0(void) {
    int s = FUN_020683d4();
    int r = FUN_020669c8(&D_021071fc);
    if (r == 0 && D_02107054.f44 == 0) {
        D_02107054.f44 = 1;
        FUN_02066a94(&D_021071fc);
    }
    FUN_020683e8(s);
    return r;
}
