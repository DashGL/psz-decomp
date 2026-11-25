// FUN_02034cdc @ 0x02034cdc (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034cdc @ 0x02034cdc (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Cleanup each of two optional owned objects through distinct helpers.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02034cdc.txt.
 */
extern void FUN_02037a84(void *),FUN_020350b0(void *);
void FUN_02034cdc(void **self) { if(self[0]) FUN_02037a84(self[0]); if(self[1]) FUN_020350b0(self[1]); }
