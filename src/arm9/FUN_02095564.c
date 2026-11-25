// FUN_02095564 @ 0x02095564 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_02095564 @ 0x02095564 (inventory code 0x62, thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update typed actor state and register active-slot callbacks.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095564.txt.
 */
extern int FUN_020390f4(void *),FUN_020958a4(void *);extern unsigned char *FUN_020384a4(void *,int);extern void FUN_0206eb28(void *,unsigned short,int),FUN_02094f8c(void *,int),FUN_02039038(void *,int,void (*)(void *,int));void FUN_02095564(char *s,unsigned short angle,int arg){unsigned char *desc;unsigned int i;*(unsigned short *)(s+192)=angle;if(*(int *)(s+576)!=9 && !FUN_020390f4(s)){FUN_0206eb28(s,angle,arg);desc=FUN_020384a4(s,*(int *)(s+208));if(desc && FUN_020958a4(s))for(i=0;i<8;i++)if(desc[8+i]!=255)FUN_02039038(s,i,FUN_02094f8c);}}
