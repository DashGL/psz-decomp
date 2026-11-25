// FUN_0207ce74 @ 0x0207ce74 (0xb0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207ce74 @ 0x0207ce74 (inventory code 0xb0, thumb)
// check: 2.0/sp2p3 target=0xb0 candidate=0xb0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update effect placement and emit a one-time activation event.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207ce74.txt.
 */
extern int FUN_0207a5dc(void *),FUN_0204771c(void *);extern void *FUN_020be450(void);extern void FUN_020bf680(void *,void *,int),FUN_020be5d4(void *,int,int,void *),FUN_02047ae8(void *),FUN_0204a9cc(void *),FUN_0204a8c4(int,int,void *,int);int FUN_0207ce74(char *s){int result=FUN_0207a5dc(s),pair[2],d[13];if(!result && FUN_0204771c(s)){if(*(int *)(s+376)!=-1){pair[0]=*(int *)(s+92);pair[1]=*(int *)(s+100);FUN_020bf680(s+288,pair,*(int *)(s+300));FUN_020be5d4(FUN_020be450(),*(int *)(s+376),0,s+288);FUN_02047ae8(d);d[0]=*(int *)(s+232);d[1]=*(int *)(s+376);d[2]=*(int *)(s+96);d[3]=*(int *)(s+256);d[4]=*(int *)(s+228);d[5]=3;d[6]=16;FUN_0204a9cc(d);}if(!*(int *)(s+380)){FUN_0204a8c4(3,15,s+92,-1);*(int *)(s+380)=1;}}return result;}
