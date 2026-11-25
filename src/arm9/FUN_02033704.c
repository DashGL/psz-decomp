// FUN_02033704 @ 0x02033704 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033704 @ 0x02033704 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Test optional global object word +30 is below ten.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02033704.txt.
 */
int FUN_02033704(void) { unsigned int *object=*(unsigned int **)0x02108c58; if(object) { if(object[12]<10) return 1; return 0; } return 0; }
