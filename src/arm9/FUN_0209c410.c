// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_0209c410 @ 0x0209c410 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return two global bytes through outputs if global flag set.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209c410.txt.
 */
extern char G_0211A500[]; extern char G_0211A501[]; extern char G_0211A502[];
int FUN_0209c410(unsigned int *a,unsigned int *b) { if(*(unsigned char *)G_0211A500) { *a=*(unsigned char *)G_0211A502; *b=*(unsigned char *)G_0211A501; return 1; } return 0; }
