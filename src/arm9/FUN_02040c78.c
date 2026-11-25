// FUN_02040c78 @ 0x02040c78 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040c78 @ 0x02040c78 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Set found record word +104 and refresh owning receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02040c78.txt.
 */
extern char *FUN_02040ca8(void *,unsigned int);
extern void FUN_02036b30(void *);
void FUN_02040c78(void *self,unsigned int key,unsigned int value) { char *record=FUN_02040ca8(self,key); if(record) { *(unsigned int *)(record+0x104)=value; FUN_02036b30(self); } }
