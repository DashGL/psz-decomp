// FUN_020b3d34 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020b3d34 @ 0x020b3d34 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy global child with nested null guards and clear slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3d34.txt.
 */
extern char G_0211AA74[];
void FUN_020b3d34(void) { void *p=((void **)G_0211AA74)[1]; if(p) { if(p) { if(p) { void (**table)(void *)=*(void (***)(void *))p; table[1](p); } ((void **)G_0211AA74)[1]=0; } } }
