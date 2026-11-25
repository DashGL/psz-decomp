// FUN_020c1814 @ 0x020c1814 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// FUN_020c1814 @ 0x020c1814
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query global default context through helper.
 * Evidence: scratch/coverage-root/batch3/020c1814.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_0200f314(void *);
int FUN_020c1814(void) { return FUN_0200f314((*(void ***)0x0211c85c)[2]); }
