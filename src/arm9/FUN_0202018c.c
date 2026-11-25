// FUN_0202018c @ 0x0202018c (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_0202018c @ 0x0202018c (0x20, arm)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
unsigned short FUN_0202018c(int *p, int a) {
    return ((unsigned int)a + 1u) % (unsigned int)p[1];
}
