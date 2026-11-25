// FUN_02031e4c @ 0x02031e4c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031e4c @ 0x02031e4c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Call optional child +4 helper then always clear word +8.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02031e4c.txt.
 */
extern void FUN_02079970(void *);
void FUN_02031e4c(void **self) { if(self[1]) FUN_02079970(self[1]); self[2]=0; }
