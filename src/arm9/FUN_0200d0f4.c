// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2e, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0200d0f4 @ 0x0200d0f4 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// FUN_0200d0f4 @ 0x0200d0f4 (0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020c4848(void);
extern void *FUN_02086e3c(void);
extern int FUN_020872c4(void *);
extern int FUN_020963d8(void);

int FUN_0200d0f4(void) {
    if (FUN_020c4848() == 0) {
        return 0;
    }
    if (FUN_020872c4(FUN_02086e3c()) == 1) {
        return 0;
    }
    if (FUN_020963d8() != 1) {
        return 1;
    }
    return 0;
}
