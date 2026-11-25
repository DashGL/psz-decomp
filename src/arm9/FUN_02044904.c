// FUN_02044904 @ 0x02044904 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044904 @ 0x02044904 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Initialize handle base from caller triple/tag then clear derived halfword and bytes.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02044904.txt.
 */
extern void FUN_02044b80(void *,void *,unsigned int);
void *FUN_02044904(char *self,void *value,unsigned int tag) { FUN_02044b80(self,value,tag); *(unsigned short *)(self+32)=0; self[34]=0; self[35]=0; return self; }
