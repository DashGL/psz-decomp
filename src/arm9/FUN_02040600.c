// FUN_02040600 @ 0x02040600 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040600 @ 0x02040600 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Store three words including stack argument then add 8000 to tag and truncate into halfword +82.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02040600.txt.
 */
void FUN_02040600(char *self,unsigned int tag,unsigned int a,unsigned int b,unsigned int c) { *(unsigned int *)(self+108)=a; *(unsigned int *)(self+112)=b; *(unsigned int *)(self+116)=c; *(unsigned short *)(self+0x82)=tag+0x8000; }
