// FUN_020db7d0 @ 0x020db7d0 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// FUN_020db7d0 @ 0x020db7d0 (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02027b9c(void);
extern int FUN_02028620(void);

int FUN_020db7d0(void) {
    if (FUN_02027b9c() != 0) {
        return 0;
    }
    int r = FUN_02028620();
    if (r == 0 || r == -39) {
        return 1;
    }
    return 0;
}
