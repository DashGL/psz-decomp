// FUN_02039068 @ 0x02039068 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02039068 @ 0x02039068 (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 43.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b43/02039068.txt.
 */
void FUN_02039068(char *s,int enabled){if(enabled){*(unsigned int *)(s+248)|=0x800000;*(unsigned int *)(s+248)|=1;*(unsigned int *)(s+248)|=2;}else{*(unsigned int *)(s+248)&=~0x800000u;*(unsigned int *)(s+248)&=~1u;*(unsigned int *)(s+248)&=~2u;}}
