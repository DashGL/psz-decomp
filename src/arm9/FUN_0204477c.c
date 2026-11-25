// FUN_0204477c @ 0x0204477c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_0204477c @ 0x0204477c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/0204477c.txt.
 */
void FUN_0204477c(char *s,int index,unsigned int a,unsigned int b) { if(index>=0 && index<*(int *)(s+0xa4)) { *(unsigned int *)(*(char **)(s+0xa0)+52*index+0x14)=a; *(unsigned int *)(*(char **)(s+0xa0)+52*index+0x18)=b; } }
