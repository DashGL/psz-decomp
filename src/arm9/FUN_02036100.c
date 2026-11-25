// FUN_02036100 @ 0x02036100 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02036100 @ 0x02036100 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/02036100.txt.
 */
void *FUN_02036100(char *s,const char *src) { *(unsigned int *)s=*(const unsigned int *)src; *(unsigned int *)(s+4)=*(const unsigned int *)(src+4); s[8]=((const signed char *)src)[8]; s[9]=((const signed char *)src)[9]; s[10]=((const signed char *)src)[10]; s[11]=((const signed char *)src)[11]; return s; }
