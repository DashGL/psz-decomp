// FUN_0207975c @ 0x0207975c (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207975c @ 0x0207975c (inventory code 0x70, thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Blend three halfword channels and two word parameters over sixteen steps.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207975c.txt.
 */
void FUN_0207975c(void *unused,char *out,char *a,char *b,int fraction){int complement;if(fraction<0 || fraction>16)return;complement=16-fraction;*(unsigned short *)out=(*(unsigned short *)b*fraction+*(unsigned short *)a*complement)>>4;*(unsigned short *)(out+2)=(*(unsigned short *)(b+2)*fraction+*(unsigned short *)(a+2)*complement)>>4;*(unsigned short *)(out+4)=(*(unsigned short *)(b+4)*fraction+*(unsigned short *)(a+4)*complement)>>4;*(int *)(out+8)=(*(int *)(b+8)*fraction+*(int *)(a+8)*complement)>>4;*(int *)(out+12)=(*(int *)(b+12)*fraction+*(int *)(a+12)*complement)>>4;}
