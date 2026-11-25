// FUN_020c0c58 @ 0x020c0c58 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// FUN_020c0c58 @ 0x020c0c58
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward fixed global address to ARM helper.
 * Evidence: scratch/coverage-root/batch2/020c0c58.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int FUN_02068b3c(void *);
unsigned int FUN_020c0c58(void) { return FUN_02068b3c((void *)0x0211b3dc); }
