// FUN_020c03a4 @ 0x020c03a4 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c03a4 @ 0x020c03a4
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Swap first two inputs for helper, forward optional output pair; negate its two words on nonzero result and return helper result.
 * Evidence: scratch/coverage-root/batch7/020c03a4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_020c0340(void *,void *,unsigned int *);
int FUN_020c03a4(void *a,void *b,unsigned int *pair) { int result=FUN_020c0340(b,a,pair);if(result && pair) { pair[0]*=~0u;pair[1]*=~0u; }return result; }
