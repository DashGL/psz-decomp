// FUN_020be3a8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020be3a8 @ 0x020be3a8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set optional global receiver word +30 to512.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be3a8.txt.
 */
extern char G_0211B3BC[];
void FUN_020be3a8(void) { unsigned int *p=((unsigned int **)G_0211B3BC)[2]; if(p) p[12]=512; }
