// FUN_02095508 @ 0x02095508 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_02095508 @ 0x02095508 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Emit adjusted effect value for eligible entity.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02095508.txt.
 */
extern int FUN_0203ae60(void *);extern void FUN_0208d7e4(void *,int,short,int,int);void FUN_02095508(char *s,int type){if(FUN_0203ae60(s)){int id=*(int *)(s+252),value=*(unsigned short *)(s+92);if(type==34)value/=2;else if(type==39)value=1;FUN_0208d7e4(s+588,id,(short)value,0,5);}}
