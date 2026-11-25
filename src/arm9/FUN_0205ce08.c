// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_0205ce08 @ 0x0205ce08
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 209.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b209/0205ce08.txt.
 */
extern unsigned short data_020f96e0[];
extern unsigned short data_02112598[];
void FUN_0205ce08(void){unsigned int value=*(volatile unsigned int *)0x04000000;*data_020f96e0=0;*data_02112598=(value&0x30000)>>16;*(volatile unsigned int *)0x04000000=value&~0x30000u;}
