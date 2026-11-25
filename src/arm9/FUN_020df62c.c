// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern void FUN_020de90c(int);
extern void FUN_020ddaf4(void);
extern void FUN_02066998(int);
extern struct { int p0; int pad[4]; int p14; } D_0211dbfc;

void FUN_020df62c(void) {
    if (D_0211dbfc.p0 != 0) {
        if (D_0211dbfc.p14 != 0) {
            FUN_020de90c(D_0211dbfc.p14);
        }
        FUN_020ddaf4();
        if (*(int *)(D_0211dbfc.p0 + 0x1188) != 0) {
            FUN_02066998(D_0211dbfc.p0 + 0x111c);
        }
        *(int *)(D_0211dbfc.p0 + 0x1004) = -7;
    }
}
