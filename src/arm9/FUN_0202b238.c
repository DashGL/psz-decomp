// FUN_0202b238 @ 0x0202b238 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_0202b238 @ 0x0202b238 (0x30, arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_0202a94c(int);

int FUN_0202b238(int a) {
    if (FUN_0202a94c(a) != 7) {
        return 1;
    }
    return FUN_0202a94c(a) != 6;
}
