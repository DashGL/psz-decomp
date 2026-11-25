// FUN_0203528c @ 0x0203528c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_0203528c @ 0x0203528c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Validate signed index and clear indexed manager word when valid.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/0203528c.txt.
 */
extern int FUN_020781c8(int);
void FUN_0203528c(unsigned int *self,int index) { if(FUN_020781c8(index)) self[index]=0; }
