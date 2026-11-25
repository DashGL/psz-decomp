// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_0205f9cc @ 0x0205f9cc
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 185.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b185/0205f9cc.txt.
 */
extern unsigned short data_020f1940[];
extern unsigned int data_021125d4[];
extern unsigned int FUN_0205dd88(void);void FUN_0205f9cc(void){unsigned int value=FUN_0205dd88();unsigned int table=data_020f1940[(int)value>>4];data_021125d4[3]=value;data_021125d4[2]=table<<12;}
