// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_020a5148 @ 0x020a5148
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set global request and transition state when receiver field +3c zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a5148.txt.
 */
extern unsigned int data_0211a664[];
extern int FUN_020c2d94(int,int,...); void FUN_020a5148(unsigned int *self,unsigned int request) { if(self[15]==0) { self[17]=0; data_0211a664[0]=request; FUN_020c2d94(2,2,0); data_0211a664[6]=1; } }
