// FUN_020b9e9c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020b9e9c @ 0x020b9e9c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy first child repeatedly while receiver list nonempty.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b9e9c.txt.
 */
void FUN_020b9e9c(void **self) { void **node; while((node=self[7])!=0) { void *p=node[4]; if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } } }
