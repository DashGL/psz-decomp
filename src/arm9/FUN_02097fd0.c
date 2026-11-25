// FUN_02097fd0 @ 0x02097fd0 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02097fd0 @ 0x02097fd0 (inventory code 0x60, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply changed selection across five actor slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097fd0.txt.
 */
extern void FUN_02097884(void *,int,int),FUN_0209825c(void *,int,int,int);extern void *FUN_0209854c(void *);extern int FUN_0203ae60(void *);void FUN_02097fd0(char *s,int index){int i;if(*(int *)(s+100)==index || *(int *)(s+104)==index)return;if(index>=0 && index<5)*(int *)(s+100)=index;else *(int *)(s+104)=index;for(i=0;i<5;i++){void **slot=(void **)s+i;if(slot[5] && slot[0]){void *actor;FUN_02097884(slot[5],index,0);actor=FUN_0209854c(slot[0]);if(actor && !FUN_0203ae60(actor))FUN_0209825c(s,i,21,0);}}}
