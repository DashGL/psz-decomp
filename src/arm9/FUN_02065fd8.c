// FUN_02065fd8 @ 0x02065fd8 (0x10, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_02065fd8 @ 0x02065fd8 (0x10, arm)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02065f8c(int, int, int, int);

int FUN_02065fd8(int a, int b, int c) {
    return FUN_02065f8c(a, b, c, 0);
}
