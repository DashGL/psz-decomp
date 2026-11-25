// FUN_020b06d0 @ 0x020b06d0 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020b06d0 @ 0x020b06d0 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Assign valid category entry and set bounded player bit.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b06d0.txt.
 */
extern void FUN_020b0714(void *,unsigned int);int FUN_020b06d0(char *s,int index,unsigned int player){if(index>=0 && index<*(short *)(s+12) && (*(unsigned char **)(s+4))[16*index]==2){unsigned int *flags;FUN_020b0714(s,player);flags=*(unsigned int **)(s+8)+index;if(player<4)*flags|=1u<<(player+3);return 1;}return 0;}
