// FUN_0208f384 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0208f384 @ 0x0208f384 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke virtual slot +70 for nonnull receiver and return true, otherwise false.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208f384.txt.
 */
int FUN_0208f384(void *self) { if(self) { void (**table)(void *)=*(void (***)(void *))self; table[28](self); return 1; } return 0; }
