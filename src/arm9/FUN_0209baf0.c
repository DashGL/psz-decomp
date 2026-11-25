// FUN_0209baf0 @ 0x0209baf0 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_0209baf0 @ 0x0209baf0 (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply local actor action for eligible object participants.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209baf0.txt.
 */
typedef struct {int v[6];} Descriptor;extern void *UNK_02108d04;extern int FUN_0209a3b4(void *,int),FUN_020855bc(int),FUN_0203bf3c(void *),FUN_0203ae60(void *);extern void FUN_0203d200(void *,int);void FUN_0209baf0(char *s){Descriptor d=**(Descriptor **)(s+4);int i;if(((signed char *)&d)[18]==0)for(i=0;i<=3;i++){if(FUN_0209a3b4(s+80,i) && FUN_020855bc(i)==1){void *actor=UNK_02108d04;if(actor && FUN_0203bf3c(actor) && FUN_0203ae60(actor))FUN_0203d200(actor,34);}}}
