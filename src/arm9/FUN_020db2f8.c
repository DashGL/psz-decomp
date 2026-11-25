// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020db2f8 @ 0x020db2f8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020db2f8 @ 0x020db2f8 (0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020dad04(void);
extern void *FUN_020dac74(int);
extern int FUN_020db324(void *);
extern int FUN_020db3f0(void *);

int FUN_020db2f8(void) {
    int r = FUN_020dad04();
    void *context = FUN_020dac74(0x10);
    switch (r) {
    case 7:
        r = FUN_020db324(context);
        break;
    case 8:
        r = FUN_020db3f0(context);
        break;
    }
    return r;
}
