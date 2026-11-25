// FUN_020c0c68 @ 0x020c0c68 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// FUN_020c0c68 @ 0x020c0c68
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query fixed global object through helper.
 * Evidence: scratch/coverage-root/batch2/020c0c68.txt.
 * ABI correction: caller FUN_020c0c78 consumes both r0/r1 from the same
 * callee, establishing a 64-bit return rather than a lone r0 result.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned long long FUN_020dd878(void *);
unsigned long long FUN_020c0c68(void) { return FUN_020dd878((void *)0x0211b404); }
