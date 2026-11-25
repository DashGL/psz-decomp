// FUN_020447a4 @ 0x020447a4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020447a4 @ 0x020447a4 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/020447a4.txt.
 */
void FUN_020447a4(char *s,int index,unsigned int a,unsigned int b,unsigned short value) { if(index>=0 && index<*(int *)(s+0xa4)) { char *p=*(char **)(s+0xa0)+52*index; *(unsigned int *)(p+0x24)=1; *(unsigned int *)(p+0x28)=a; *(unsigned int *)(p+0x2c)=b; *(unsigned short *)(p+0x30)=value; } }
