// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// FUN_02078d90 @ 0x02078d90 (inventory code 0x18, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear global slot only when it equals supplied pointer and signed index is valid.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078d90.txt.
 */
extern void * D_0211a418[];
void FUN_02078d90(void *self,int index) { if(index>=0 && index<4 && self==D_0211a418[index]) D_0211a418[index]=0; }
