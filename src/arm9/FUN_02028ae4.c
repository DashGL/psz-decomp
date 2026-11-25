// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -noThumb
struct G1 { int f0; unsigned int f4; };
struct G2 { int f0; int f4; };
extern struct G1 D_020f69cc;
extern struct G2 D_021181a0;
extern int FUN_02066c60(int);
extern void FUN_02066bb8(int, unsigned int);

int FUN_02028ae4(void) {
    int p;
    int r;
    if (D_020f69cc.f4 >= 0x20) {
        return -1;
    }
    p = D_021181a0.f4;
    r = FUN_02066c60(p);
    FUN_02066bb8(p, D_020f69cc.f4);
    return r;
}
