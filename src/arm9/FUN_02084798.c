// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_02084798 @ 0x02084798 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve seven-byte table entry from category and variant.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084798.txt.
 */
extern char G_020F3250[]; extern char G_020F33A0[];
void *FUN_02084798(int category,int variant) { int index; if(category==0 || category==17) return (void *)G_020F33A0; index=(variant-1)+3*(category-1); if(index<0 || index>=50) index=0; return (char *)G_020F3250+7*index; }
