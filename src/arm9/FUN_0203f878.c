// FUN_0203f878 @ 0x0203f878 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203f878 @ 0x0203f878 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Allocate/initialize 40-byte global object; return one even on allocation failure.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/0203f878.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0203f8d8(void *);
int FUN_0203f878(void) { void *object=FUN_020ba894(40); if(object) object=FUN_0203f8d8(object); *(void **)0x02108d5c=object; return 1; }
