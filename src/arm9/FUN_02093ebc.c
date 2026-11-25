// FUN_02093ebc @ 0x02093ebc (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_02093ebc @ 0x02093ebc (inventory code 0x7c, thumb)
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume pending descriptor through preferred action or fallback queue.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093ebc.txt.
 */
extern int UNK_0211a3c0;extern void *FUN_02031a74(void),*FUN_020781fc(void *),*FUN_0200d16c(void);extern int FUN_02031c44(void *),FUN_020782b4(void *),FUN_02093fa4(int,int,void *,int,void *);extern void FUN_020328d8(void *),FUN_02078244(void *),FUN_0200d3a4(void *,int,int);void FUN_02093ebc(void){int d[7];void *p;if(!UNK_0211a3c0){if(FUN_02031c44(FUN_02031a74())){FUN_020328d8(d);if(FUN_020782b4(d)){p=FUN_020781fc(d);if(!FUN_02093fa4(6,((signed char *)d)[1],d,1,p) && !FUN_02093fa4(1,((signed char *)d)[1],d,1,p)){FUN_02078244(d);FUN_0200d3a4(FUN_0200d16c(),1,1);}}}}else FUN_0200d3a4(FUN_0200d16c(),1,1);}
