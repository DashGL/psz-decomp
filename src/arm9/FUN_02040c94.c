// FUN_02040c94 @ 0x02040c94 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040c94 @ 0x02040c94 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Look up record by key and set its +10c word when found; return record.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02040c94.txt.
 */
extern char *FUN_02040ca8(void *,unsigned int);
void *FUN_02040c94(void *self,unsigned int key,unsigned int value) { char *record=FUN_02040ca8(self,key); if(record) *(unsigned int *)(record+0x10c)=value; return record; }
