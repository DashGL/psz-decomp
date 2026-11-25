// FUN_020c33f8 @ 0x020c33f8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// FUN_020c33f8 @ 0x020c33f8
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward two input arguments after fixed global context.
 * Evidence: scratch/coverage-root/batch4/020c33f8.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int FUN_02012f40(void *,unsigned int,unsigned int);
unsigned int FUN_020c33f8(unsigned int a,unsigned int b) { return FUN_02012f40((void *)0x0211c8f0,a,b); }
