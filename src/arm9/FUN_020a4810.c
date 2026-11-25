// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_020a4810 @ 0x020a4810
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_020f4d34[];
/* USA ROM reconstruction, 2026-11-04.
 * Initialize vector from one of four constants and store negated angle.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4810.txt.
 */
extern int FUN_0205c9e4(int,int); void FUN_020a4810(void *unused,int *vector,unsigned short *angle,int index) { if(index>=0 && index<4) { vector[0]=D_020f4d34[index]; vector[1]=0; vector[2]=0; *angle=-FUN_0205c9e4(vector[0],18432); } }
