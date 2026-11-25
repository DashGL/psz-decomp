// FUN_02059cac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02059cac @ 0x02059cac (inventory code 0x24, arm)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 156.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b156/02059cac.txt.
 */
extern char G_02112520[];
extern void FUN_0205a314(unsigned int);void FUN_02059cac(unsigned int value){if(*(unsigned int *)G_02112520)return;*(unsigned int *)G_02112520=1;FUN_0205a314(value);}
