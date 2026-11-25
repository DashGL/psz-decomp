// FUN_0205fed0 @ 0x0205fed0 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_0205fed0 @ 0x0205fed0 (inventory code 0x24, arm)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 169.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b169/0205fed0.txt.
 */
extern unsigned int FUN_020683d4(void);extern void FUN_020683e8(unsigned int);void FUN_0205fed0(unsigned int value){unsigned int saved=FUN_020683d4();*(unsigned int *)(*(char **)0x021180ac+5348)=value;FUN_020683e8(saved);}
