// FUN_02042388 @ 0x02042388 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02042388 @ 0x02042388 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Apply receiver helper to all five slot indices.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02042388.txt.
 */
extern void FUN_02042358(void *,int);
void FUN_02042388(void *self) { int i; for(i=0;i<5;i++) FUN_02042358(self,i); }
