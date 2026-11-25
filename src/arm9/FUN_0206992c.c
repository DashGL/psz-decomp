// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02067184(void *);
extern void FUN_0206998c(void);
extern void FUN_0206a09c(void);
extern int D_021185d4;
extern int D_021185d8;

void FUN_0206992c(void) {
    if (D_021185d4 != 0) {
        return;
    }
    D_021185d4 = 1;
    FUN_02067184(&D_021185d8);
    FUN_0206998c();
    FUN_0206a09c();
}
