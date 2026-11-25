// FUN_020507e0 @ 0x020507e0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_020507e0 @ 0x020507e0 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Run base helper then cleanup embedded receiver +18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/020507e0.txt.
 */
extern void FUN_02095e44(void *),FUN_02050210(void *);
void FUN_020507e0(char *self) { FUN_02095e44(self); FUN_02050210(self+24); }
