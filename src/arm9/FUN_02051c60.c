// FUN_02051c60 @ 0x02051c60 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_02051c60 @ 0x02051c60 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Store all-ones sentinel in global word.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02051c60.txt.
 */
void FUN_02051c60(void) { *(unsigned int *)0x020f93d4=~0u; }
