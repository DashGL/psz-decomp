// FUN_020bce64 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020bce64 @ 0x020bce64 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke optional global receiver virtual slot+c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bce64.txt.
 */
void FUN_020bce64(void) { void *p=*(void **)0x0211b3b8; if(p) { void (**table)(void *)=*(void (***)(void *))p; table[3](p); } }
