// FUN_02031c88 @ 0x02031c88 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031c88 @ 0x02031c88 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Read optional child +4 then word +c, or zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/02031c88.txt.
 */
void *FUN_02031c88(void **self) { void **child=self[1]; if(child) return child[3]; return 0; }
