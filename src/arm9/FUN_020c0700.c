// FUN_020c0700 @ 0x020c0700 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// FUN_020c0700 @ 0x020c0700
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear singleton while preserving receiver return.
 * Evidence: scratch/coverage-root/batch2/020c0700.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void *FUN_020c0700(void *self) { *(void **)0x0211b3d8=0;return self; }
