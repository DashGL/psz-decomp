// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020a521c @ 0x020a521c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Mark optional global receiver, emit transition, set global state three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a521c.txt.
 */
extern char G_0211A664[];
extern int FUN_020c2d94(int,int,...); void FUN_020a521c(void) { unsigned int *p=((unsigned int **)G_0211A664)[5]; if(p) p[17]=1; FUN_020c2d94(2,2,0); ((unsigned int *)G_0211A664)[6]=3; }
