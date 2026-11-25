// FUN_0209f9e4 @ 0x0209f9e4 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_0209f9e4 @ 0x0209f9e4 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance bounded fade value and update actor opacity.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f9e4.txt.
 */
typedef struct {int x,y,z;} Vec;extern unsigned int FUN_0209fa44(void *);extern void FUN_02033658(int,int,void *),FUN_0203067c(void *,unsigned short),FUN_0203041c(void *);void FUN_0209f9e4(char *s){unsigned int value=FUN_0209fa44(s);if(value!=*(unsigned int *)(s+52)){Vec v;*(unsigned int *)(s+52)=value;v=*(Vec *)(s+28);FUN_02033658(6,8,&v);}*(unsigned int *)(s+56)+=128;if(*(unsigned int *)(s+56)>*(unsigned int *)(s+52)){unsigned int v=(unsigned short)*(unsigned int *)(s+52);*(unsigned int *)(s+52)=v;*(unsigned int *)(s+56)=v;}FUN_0203067c(s,(unsigned short)(65535-(unsigned short)*(unsigned int *)(s+56)));FUN_0203041c(s);}
