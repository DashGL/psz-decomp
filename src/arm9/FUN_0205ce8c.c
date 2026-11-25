// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// FUN_0205ce8c @ 0x0205ce8c
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
extern unsigned short D_020f96e0[];
extern unsigned short D_02112598[];
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 229.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b229/0205ce8c.txt.
 */
void FUN_0205ce8c(unsigned int mode,unsigned int first,unsigned int second){unsigned int enabled=*D_020f96e0,old=*(volatile unsigned int *)0x04000000;*D_02112598=mode;if(!enabled)mode=0;*(volatile unsigned int *)0x04000000=(old&0xfff0fff0)|(mode<<16)|first|(second<<3);if(!*D_02112598)*D_020f96e0=0;}
