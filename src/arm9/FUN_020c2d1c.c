// FUN_020c2d1c @ 0x020c2d1c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c2d1c @ 0x020c2d1c
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Require all three leading words nonzero, testing words in order 0,2,1.
 * Evidence: scratch/coverage-root/batch4/020c2d1c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
int FUN_020c2d1c(unsigned int *self) { if(self[0] && self[2] && self[1])return 1;return 0; }
