// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets; argument/return contract corrected.
// Return contract: notes/reference/near-return-low-20261113/FUN_0203c338-proof.json
// FUN_0203c338 @ 0x0203c338 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203c338 @ 0x0203c338 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Map second argument through helper, then apply to embedded receiver +20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0203c338.txt.
 */
extern int FUN_0203c2c8(void *,int);
extern int FUN_020b7030(void *,int);
int FUN_0203c338(char *self,int selector) { int mapped=FUN_0203c2c8(self,selector); return FUN_020b7030(self+32,mapped); }
