// FUN_0202a6a0 @ 0x0202a6a0 (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_0202a6a0 @ 0x0202a6a0 (0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_0202c6e8(void *, int, int);
extern void FUN_0202be1c(void *, int, int);

void FUN_0202a6a0(char *p, int a, int b) {
    FUN_0202c6e8(p + 0x2ec, a, b);
    FUN_0202be1c(p + 0x3a4, a, b);
}
