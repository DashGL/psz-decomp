// FUN_0204fb2c @ 0x0204fb2c (0x86, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fb2c @ 0x0204fb2c (inventory code 0x86, thumb)
// check: 2.0/sp2p3 target=0x86 candidate=0x86 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 53.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b53/0204fb2c.txt.
 */
extern void FUN_02039534(void *,void *);extern int FUN_0204dbc4(void *,int);extern void *FUN_0204a580(void);extern void *FUN_0204a618(void *,unsigned int,void *,int);
void FUN_0204fb2c(char *s,unsigned int id,void *src){*(unsigned int *)(s+28)=id;FUN_02039534(s+4,src);if(FUN_0204dbc4(s+4,17))*(void **)(s+20)=FUN_0204a618(FUN_0204a580(),id,src,2);else{if(FUN_0204dbc4(s+4,3)||FUN_0204dbc4(s+4,11))*(void **)(s+24)=FUN_0204a618(FUN_0204a580(),id,src,1);*(void **)(s+20)=FUN_0204a618(FUN_0204a580(),id,src,0);}*(int *)(s+36)=-1;if(!*(void **)(s+20)&&!FUN_0204dbc4(src,17))*(int *)(s+32)=1;}
