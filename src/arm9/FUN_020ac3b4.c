// FUN_020ac3b4 @ 0x020ac3b4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020ac3b4 @ 0x020ac3b4 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read word +298 for signed index zero through three, otherwise zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ac3b4.txt.
 */
unsigned int FUN_020ac3b4(char *self,int index) { if(index>=0 && index<4) return ((unsigned int *)(self+664))[index]; return 0; }
