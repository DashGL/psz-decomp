// FUN_020308bc @ 0x020308bc (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020308bc @ 0x020308bc (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Initialize storage/count/invalid index and owner word, then allocate by supplied count.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/020308bc.txt.
 */
extern void FUN_020308d4(void *,int);
void *FUN_020308bc(unsigned int *self,int count,unsigned int owner) { self[0]=0; self[1]=0; self[2]=~0u; self[3]=owner; FUN_020308d4(self,count); return self; }
