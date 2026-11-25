// FUN_020571bc @ 0x020571bc (0x5c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_020571bc @ 0x020571bc (inventory code 0x54, arm)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 226.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b226/020571bc.txt.
 */
extern unsigned int FUN_020683d4(void),FUN_020683e8(unsigned int),FUN_020661bc(void *);extern int FUN_02066104(unsigned int);extern void FUN_020004fa(unsigned int);void FUN_020571bc(unsigned int id,unsigned int *state){for(;;){state[1]=FUN_020683d4();state[0]=FUN_020661bc((void *)0x027fffe8)&64;if(state[0])return;if(!FUN_02066104(id))return;FUN_020683e8(state[1]);FUN_020004fa(1);}}
