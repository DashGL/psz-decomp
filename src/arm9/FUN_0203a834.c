// FUN_0203a834 @ 0x0203a834 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_0203a834 @ 0x0203a834 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Fetch manager, destroy child +1b0 through helper and clear slot.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/0203a834.txt.
 */
extern void *FUN_0204f3b8(void);
extern void FUN_0204f458(void *,void *);
void FUN_0203a834(char *self) { void *manager=FUN_0204f3b8(); FUN_0204f458(manager,*(void **)(self+0x1b0)); *(void **)(self+0x1b0)=0; }
