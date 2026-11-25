// FUN_02040cd4 @ 0x02040cd4 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040cd4 @ 0x02040cd4 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Look up record by key and return word +4 or all-ones sentinel.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02040cd4.txt.
 */
extern unsigned int *FUN_02040ca8(void *,unsigned int);
unsigned int FUN_02040cd4(void *self,unsigned int key) { unsigned int *record=FUN_02040ca8(self,key); if(record) return record[1]; return ~0u; }
