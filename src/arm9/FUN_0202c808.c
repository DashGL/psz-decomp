// FUN_0202c808 @ 0x0202c808 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_0202c808 @ 0x0202c808 (0x30, arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_0202c6e8(void *, const void *, int);
extern void FUN_0202bf80(void *, void *, int);
extern const char FUN_020f6bb4[];

void FUN_0202c808(void *a, void *b) {
    FUN_0202c6e8(a, FUN_020f6bb4 + 1, 0x2c);
    FUN_0202bf80(b, a, 0x14);
}
