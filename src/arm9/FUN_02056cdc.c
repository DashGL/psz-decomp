// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_02056cdc @ 0x02056cdc
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 156.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b156/02056cdc.txt.
 */
extern unsigned int data_02111f00[];
extern void FUN_02068744(void),FUN_02068850(int,void *);void FUN_02056cdc(void){FUN_02068744();FUN_02068850(14,(void *)0x02056d08);data_02111f00[1]=0;}
