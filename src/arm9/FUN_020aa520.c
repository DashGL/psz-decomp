// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// Widen the halfword to unsigned int before shifting: ROM uses lsrs, not asrs.
// FUN_020aa520 @ 0x020aa520 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Activate output and set half-scaled source value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aa520.txt.
 */
void FUN_020aa520(char *self,char *out){*(int *)out=1;*(unsigned int *)(out+180)|=1;*(unsigned int *)(out+168)=((unsigned int)*(unsigned short *)(self+92))>>1;*(unsigned int *)(out+172)=0;*(unsigned int *)(out+176)|=1;}
