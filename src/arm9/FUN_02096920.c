// FUN_02096920 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02096920 @ 0x02096920 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set selected bit in both halfword masks.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096920.txt.
 */
void FUN_02096920(char *self,unsigned int index) { unsigned int mask=1u<<index; *(unsigned short *)(self+36)|=mask; *(unsigned short *)(self+38)|=mask; }
