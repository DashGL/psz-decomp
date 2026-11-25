// FUN_020a7800 @ 0x020a7800 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020a7800 @ 0x020a7800 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct special item descriptor with bounded or random category.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a7800.txt.
 */
extern void FUN_0203955c(void *),FUN_020a7844(void *);extern int FUN_02035b60(int);int FUN_020a7800(unsigned char *s,int type,int category){FUN_0203955c(s);s[0]=0;s[1]=17;if(type>=0 && type<33)s[3]=type;else s[3]=0;if(category<0 || category>=5)s[2]=FUN_02035b60(5);else s[2]=category;FUN_020a7844(s);return 1;}
