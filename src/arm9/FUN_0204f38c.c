// FUN_0204f38c @ 0x0204f38c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f38c @ 0x0204f38c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Reset two global subsystems in call order; receiver getters feed their following helpers.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/0204f38c.txt.
 */
extern void *FUN_020b3d04(void),*FUN_020a9040(void);
extern void FUN_020b3e5c(void *),FUN_020b46f4(void),FUN_020a9004(void *);
void FUN_0204f38c(void) { FUN_020b3e5c(FUN_020b3d04()); FUN_020b46f4(); FUN_020a9004(FUN_020a9040()); }
