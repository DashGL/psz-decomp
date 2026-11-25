// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_020b5b4c @ 0x020b5b4c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Increment global counter if identifier category predicate true.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b5b4c.txt.
 */
extern unsigned int D_0211b274;
extern int FUN_0204dab0(int); void FUN_020b5b4c(int id) { if(FUN_0204dab0(id)) ++D_0211b274; }
