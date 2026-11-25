// FUN_020821d0 @ 0x020821d0 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020821d0 @ 0x020821d0 (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume shuffled collection into available capacity.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020821d0.txt.
 */
extern void FUN_02083590(void *),FUN_0208340c(void *,unsigned int);extern void *FUN_02083518(void *);extern unsigned int FUN_020833ac(void *,int),FUN_02082050(void *,void *,unsigned int);void FUN_020821d0(char *s){char *list=s+12;while(*(int *)(s+92)){void *p;unsigned int n;FUN_02083590(list);p=FUN_02083518(list);if(!p)break;if(*(int *)(s+2168)>=*(int *)(s+2172))break;n=FUN_02082050(s,p,FUN_020833ac(s,*(int *)(s+2172)-*(int *)(s+2168))+1);if(n)FUN_0208340c(s,n-1);}}
