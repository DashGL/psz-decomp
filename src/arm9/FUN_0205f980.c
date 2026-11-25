// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_0205f980 @ 0x0205f980
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 220.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b220/0205f980.txt.
 */
extern unsigned int data_020f96e4[];
extern unsigned int data_021125d4[];
extern void FUN_02065010(unsigned int),FUN_0205d620(unsigned int);void FUN_0205f980(void){unsigned int channel=*data_020f96e4;if(channel!=~0u)FUN_02065010(channel);FUN_0205d620(*(data_021125d4+5));*(data_021125d4+7)=0;*(data_021125d4+6)=0;*(data_021125d4+1)=0;*(data_021125d4+5)=0;}
