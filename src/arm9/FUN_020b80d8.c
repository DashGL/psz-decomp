// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_020b80d8 @ 0x020b80d8 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear four global table words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b80d8.txt.
 */
extern char G_020FC854[];
void FUN_020b80d8(void) { int i; for(i=0;i<4;i++) ((unsigned int *)G_020FC854)[i]=0; }
