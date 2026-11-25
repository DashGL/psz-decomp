// FUN_020486b4 @ 0x020486b4 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020486b4 @ 0x020486b4 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 41.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b41/020486b4.txt.
 */
extern void FUN_020473e8(void *,void *,int);extern void FUN_02048854(void *,int);extern void FUN_020487d8(void *);
void FUN_020486b4(char *s,void *arg,int a,unsigned int b,unsigned int c){FUN_020473e8(s,arg,0);*(unsigned short *)(s+276)=0;FUN_02048854(s,a);*(unsigned int *)(s+260)=*(unsigned int *)(s+80);*(unsigned int *)(s+264)=*(unsigned int *)(s+260)<<1;*(unsigned int *)(s+268)=8;*(unsigned int *)(s+272)=b;*(unsigned int *)(s+280)=c;*(unsigned int *)(s+228)|=0x10000000;FUN_020487d8(s);}
