// FUN_02099c4c @ 0x02099c4c (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_02099c4c @ 0x02099c4c (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear and copy bounded category descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099c4c.txt.
 */
extern void FUN_0203955c(void *),FUN_02045990(void *,void *);int FUN_02099c4c(char *s,void *out,int category,unsigned int index){if(!*(void **)(s+32))return 0;if(category>=0 && category<5 && index<4){FUN_0203955c(out);FUN_02045990(out,*(char **)(s+32)+4*(5*category+1+index));return 1;}return 0;}
