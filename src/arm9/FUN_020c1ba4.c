// FUN_020c1ba4 @ 0x020c1ba4 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// FUN_020c1ba4 @ 0x020c1ba4
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return global field +100.
 * Evidence: scratch/coverage-root/batch3/020c1ba4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
unsigned int FUN_020c1ba4(void) { return (*(unsigned int **)0x0211c85c)[64]; }
