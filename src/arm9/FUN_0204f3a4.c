// FUN_0204f3a4 @ 0x0204f3a4 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204f3a4 @ 0x0204f3a4 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Set global request flag then run global reset helper; callees ignore incoming arguments.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0204f3a4.txt.
 */
extern void FUN_020b3e78(void),FUN_020b46f8(void);
void FUN_0204f3a4(void) { FUN_020b3e78(); FUN_020b46f8(); }
