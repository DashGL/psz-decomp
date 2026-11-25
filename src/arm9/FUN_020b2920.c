// FUN_020b2920 @ 0x020b2920 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020b2920 @ 0x020b2920 (inventory code 0x56, thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose records, increment uses and update dependent state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2920.txt.
 */
extern int FUN_020b247c(void *);extern unsigned char *FUN_020b23d4(void *,int);extern void FUN_020b24c8(void *,int),FUN_020b2a14(void *,void *,int,int);void FUN_020b2920(void **s,void *pool,unsigned int count){unsigned int i;for(i=0;i<count;i++){int index=FUN_020b247c(pool);if(index>=0){unsigned char *p=FUN_020b23d4(s[0],index);if(p && p[5]<2){p[5]++;if(p[5]>=2)FUN_020b24c8(pool,index);FUN_020b2a14(s,p,0,1);}}}}
