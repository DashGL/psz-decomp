// FUN_0203a580 @ 0x0203a580 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_0203a580 @ 0x0203a580 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Read embedded receiver +158 through tail helper.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0203a580.txt.
 */
extern int FUN_0207f770(void *);
int FUN_0203a580(char *self) { return FUN_0207f770(self+0x158); }
