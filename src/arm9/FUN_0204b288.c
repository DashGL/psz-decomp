// FUN_0204b288 @ 0x0204b288 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204b288 @ 0x0204b288 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Store three register arguments in consecutive receiver words.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0204b288.txt.
 */
void FUN_0204b288(char *self,unsigned int a,unsigned int b,unsigned int c) { *(unsigned int *)(self+0x9c)=a; *(unsigned int *)(self+0xa0)=b; *(unsigned int *)(self+0xa4)=c; }
