// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_02053464 @ 0x02053464
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 169.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b169/02053464.txt.
 */
extern char *data_02110b00[];
extern unsigned int FUN_020683d4(void);extern void FUN_020683e8(unsigned int);unsigned int FUN_02053464(void){unsigned int saved=FUN_020683d4(),result;char *p=data_02110b00[1];if(p)result=*(unsigned short *)(p+336);else result=0;FUN_020683e8(saved);return result;}
