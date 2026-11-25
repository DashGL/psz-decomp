// FUN_02033448 @ 0x02033448 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033448 @ 0x02033448 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 30.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b30/02033448.txt.
 */
extern int FUN_02084ce8(void *); extern void FUN_020331d4(void *,unsigned int); extern int FUN_02033338(void *,void *);
int FUN_02033448(void *s,unsigned int value,unsigned int a,unsigned int b,unsigned int c) { unsigned int temp[4]; if(FUN_02084ce8((void *)0x0211a51c)) { FUN_020331d4(temp,11); temp[2]=value; ((unsigned char *)temp)[12]=a; ((unsigned char *)temp)[13]=b; ((unsigned char *)temp)[14]=c; return FUN_02033338(s,temp); } return 0; }
