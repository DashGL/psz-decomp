// FUN_020334c8 @ 0x020334c8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_020334c8 @ 0x020334c8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Forward optional global object to update/reset helper; callee incoming receiver only.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020334c8.txt.
 */
extern void FUN_02050624(void *);
void FUN_020334c8(void) { void *object=((void **)0x0210e240)[0]; if(object) FUN_02050624(object); }
