// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_02056fbc @ 0x02056fbc
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 169.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b169/02056fbc.txt.
 */
extern unsigned short data_02111f08[];
extern void FUN_02000740(void *,void *,unsigned int);extern unsigned int FUN_020661c4(void);void FUN_02056fbc(void){unsigned int value=0;FUN_02000740(&value,data_02111f08+2,0x05000001);data_02111f08[3]=FUN_020661c4();}
