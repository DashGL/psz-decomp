// FUN_02039038 @ 0x02039038 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02039038 @ 0x02039038 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Set indexed word at +218 for unsigned index below eight and clear byte +244.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02039038.txt.
 */
void FUN_02039038(char *self,unsigned int index,unsigned int value) { if(index<8) { ((unsigned int *)(self+0x218))[index]=value; self[0x244]=0; } }
