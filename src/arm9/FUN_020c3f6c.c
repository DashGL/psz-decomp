// FUN_020c3f6c @ 0x020c3f6c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// FUN_020c3f6c @ 0x020c3f6c
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Bounded byte string length with null input yielding zero. Target reads current byte before checking bound.
 * Evidence: scratch/coverage-root/batch5/020c3f6c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
unsigned int FUN_020c3f6c(const signed char *text,unsigned int limit) { unsigned int count=0;if(!text)return count;while(*text && count<limit) { text++;count++; }return count; }
