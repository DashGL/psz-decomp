// FUN_0203526c @ 0x0203526c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_0203526c @ 0x0203526c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Validate signed index and install supplied manager slot; return success.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203526c.txt.
 */
extern int FUN_020781c8(int);
int FUN_0203526c(void **self,int index,void *object) { if(FUN_020781c8(index)) { self[index]=object; return 1; } return 0; }
