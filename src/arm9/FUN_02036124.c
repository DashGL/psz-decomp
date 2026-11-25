// FUN_02036124 @ 0x02036124 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02036124 @ 0x02036124 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Resolve stored identifier through manager and filter helper, then apply original receiver if nonnull.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/02036124.txt.
 */
extern void *FUN_020352a4(void *,int),*FUN_020352c0(void *);
extern void FUN_02036148(void *,void *);
void FUN_02036124(int *self) { void *object=FUN_020352c0(FUN_020352a4(*(void **)0x02108cf4,self[1])); if(object) FUN_02036148(object,self); }
