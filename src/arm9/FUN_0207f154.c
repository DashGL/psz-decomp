// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_0207f154 @ 0x0207f154 (inventory code 0x24, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate bitset words and clear them if storage not yet allocated.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f154.txt.
 */
extern void *FUN_020ba8a0(unsigned int); extern void FUN_0207f178(void *); void FUN_0207f154(unsigned int *self,unsigned int bits) { if(!self[0]) { unsigned int words; self[1]=bits; words=((bits-1)>>5)+1; self[2]=words; self[0]=(unsigned int)FUN_020ba8a0(words*4); FUN_0207f178(self); } }
