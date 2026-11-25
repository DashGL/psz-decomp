// FUN_020c1988 @ 0x020c1988 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020c1988 @ 0x020c1988
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward argument to helper on global embedded context +b8.
 * Evidence: scratch/coverage-root/batch1/020c1988.txt.
 * Object identities and helper return contracts remain provisional.
 */
extern unsigned int FUN_0200d74c(void *,unsigned int);
unsigned int FUN_020c1988(unsigned int value) { return FUN_0200d74c(*(char **)0x0211c85c+0xb8,value); }
