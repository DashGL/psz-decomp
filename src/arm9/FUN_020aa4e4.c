// FUN_020aa4e4 @ 0x020aa4e4 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020aa4e4 @ 0x020aa4e4 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Activate output and copy two source halfword values.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aa4e4.txt.
 */
void FUN_020aa4e4(char *self,char *out){*(int *)out=1;*(unsigned int *)(out+180)|=1;*(unsigned int *)(out+168)=*(unsigned short *)(self+92);*(unsigned int *)(out+172)=*(unsigned short *)(self+94);*(unsigned int *)(out+176)|=1;}
