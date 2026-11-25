// FUN_02033158 @ 0x02033158 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033158 @ 0x02033158 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Clear indexed word +c only when halfword id matches and signed slot is [0,4).
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02033158.txt.
 */
void FUN_02033158(char *self,unsigned int id,int slot) { if(id==*(unsigned short *)(self+4) && slot>=0 && slot<4) ((unsigned int *)(self+12))[slot]=0; }
