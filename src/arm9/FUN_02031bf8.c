// FUN_02031bf8 @ 0x02031bf8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031bf8 @ 0x02031bf8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Invoke cleanup helper on each of two optional child slots.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02031bf8.txt.
 */
extern void FUN_0207981c(void *);
void FUN_02031bf8(void **self) { int i; for(i=0;i<2;i++) if(self[i]) FUN_0207981c(self[i]); }
