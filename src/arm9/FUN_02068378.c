// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// flags: -noThumb
struct G {
    unsigned short f0;
    unsigned short f2;
    int f4;
    int f8;
    int fc;
    int f10;
};
extern struct G D_021184f0;
extern void FUN_02065e30(int);

void FUN_02068378(void) {
    if (D_021184f0.f0 != 0) {
        return;
    }
    D_021184f0.f0 = 1;
    D_021184f0.fc = 0;
    D_021184f0.f10 = 0;
    FUN_02065e30(4);
    D_021184f0.f8 = 0;
    D_021184f0.f4 = 0;
}
