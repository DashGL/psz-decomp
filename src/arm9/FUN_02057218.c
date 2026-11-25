// FUN_02057218 @ 0x02057218 (0x24, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02057218 @ 0x02057218 (inventory code 0x24, arm)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 156.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b156/02057218.txt.
 */
extern void FUN_020660f8(void *),FUN_020683e8(unsigned int);void FUN_02057218(void *lock,unsigned int *state){if(!state[0])FUN_020660f8(lock);FUN_020683e8(state[1]);}
