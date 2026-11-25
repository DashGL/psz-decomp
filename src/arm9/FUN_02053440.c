// FUN_02053440 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02053440 @ 0x02053440 (inventory code 0x20, arm)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 156.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b156/02053440.txt.
 */
extern char G_02110B00[];
extern int FUN_02052f80(void);unsigned int FUN_02053440(void){if(FUN_02052f80())return 0;return ((unsigned int *)((unsigned int *)G_02110B00)[1])[1];}
