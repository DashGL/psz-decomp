// FUN_020c14e0 @ 0x020c14e0 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// FUN_020c14e0 @ 0x020c14e0
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize three-word record with invalid handle and two zero fields.
 * Evidence: scratch/coverage-root/batch3/020c14e0.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void *FUN_020c14e0(unsigned int *self) { self[0]=~0u;self[1]=0;self[2]=0;return self; }
