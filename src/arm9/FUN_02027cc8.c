// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Pair {
    int a;
    int b;
};
extern struct Pair D_021070b4;
extern int FUN_020683d4(void);
extern int FUN_02025a90(int);
extern void FUN_020683e8(int);

int FUN_02027cc8(int a) {
    int s = FUN_020683d4();
    int v0 = D_021070b4.a;
    int v1 = D_021070b4.b;
    D_021070b4.a = 0;
    D_021070b4.b = 0;
    int r = FUN_02025a90(a);
    D_021070b4.a = v0;
    D_021070b4.b = v1;
    FUN_020683e8(s);
    return r;
}
