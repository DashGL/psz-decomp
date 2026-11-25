// FUN_020c1828 @ 0x020c1828 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020c1828 @ 0x020c1828
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward global manager word +8 to helper.
 * Evidence: scratch/coverage-root/batch1/020c1828.txt.
 * Object identities and helper return contracts remain provisional.
 */
extern unsigned int FUN_0200f1f4(void *);
unsigned int FUN_020c1828(void) { return FUN_0200f1f4((*(void ***)0x0211c85c)[2]); }
