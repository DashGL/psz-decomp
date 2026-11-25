// FUN_020b0a44 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020b0a44 @ 0x020b0a44 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke optional receiver virtual slot eight.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0a44.txt.
 */
void FUN_020b0a44(void *self) { if(self) { void (**table)(void *)=*(void (***)(void *))self; table[2](self); } }
