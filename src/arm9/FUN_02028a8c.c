// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02068b3c(void *);
extern void FUN_02068be8(void *);
extern int FUN_020693d0(void *, void *);

int FUN_02028a8c(void) {
    int a[4];
    int b[3];
    FUN_02068b3c(a);
    FUN_02068be8(b);
    return FUN_020693d0(a, b) + 0x386d4380;
}
