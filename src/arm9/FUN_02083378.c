// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x32, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// FUN_02083378 @ 0x02083378 (inventory code 0x32, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate dimensions and initialize bounded interval.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083378.txt.
 */
void FUN_02083378(int *self,int size,int inset) { int count;if(size<2 || size>20) size=10;if(inset<0 || (size-1)/2<inset) inset=0;count=size-2*inset-1;if(count<0) count=0;self[1]=count;self[0]=inset;self[2]=0; }
