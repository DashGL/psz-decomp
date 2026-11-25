// FUN_0203b41c @ 0x0203b41c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b41c @ 0x0203b41c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Return logical OR of two receiver predicates, short-circuiting the second.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203b41c.txt.
 */
extern int FUN_0203b3f8(void *),FUN_0203b3e4(void *);
int FUN_0203b41c(void *self) { if(FUN_0203b3f8(self) || FUN_0203b3e4(self)) return 1; return 0; }
