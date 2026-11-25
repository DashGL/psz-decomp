// FUN_020c1b8c @ 0x020c1b8c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c1b8c @ 0x020c1b8c
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Save global field +100, then tail-forward value to helper. Helper ignores extra live argument registers.
 * Evidence: scratch/coverage-root/batch3/020c1b8c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0200d518(unsigned int);
void FUN_020c1b8c(unsigned int value) { (*(unsigned int **)0x0211c85c)[64]=value;FUN_0200d518(value); }
