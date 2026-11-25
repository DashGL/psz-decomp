// FUN_020b0410 @ 0x020b0410 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020b0410 @ 0x020b0410 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate bounded candidate index and optional minimum value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0410.txt.
 */
extern int FUN_0203a1fc(void *),FUN_020849d4(void *);int FUN_020b0410(char *self,int index,int minimum){if(index>=0 && index<*(short *)(self+8) && !FUN_0203a1fc(*(char **)(self+4)+16*index)){if(minimum<0)return index;if(FUN_020849d4(*(char **)(self+4)+16*index)>=minimum)return index;}return -1;}
