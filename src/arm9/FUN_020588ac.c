// FUN_020588ac @ 0x020588ac (0x34, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_020588ac @ 0x020588ac (inventory code 0x30, arm)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 227.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b227/020588ac.txt.
 */
extern int FUN_0205860c(void *,int);int FUN_020588ac(char *s,unsigned int index){*(unsigned int *)(s+12)|=4;*(unsigned int *)(s+48)=*(unsigned int *)(s+8);*(unsigned int *)(s+56)=0;*(unsigned short *)(s+54)=0;*(unsigned short *)(s+52)=index;return FUN_0205860c(s,2);}
