// FUN_020414c0 @ 0x020414c0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_020414c0 @ 0x020414c0 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Lazily allocate and initialize 68-byte global object.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/020414c0.txt.
 */
extern void *DAT_02108d64;
extern void *FUN_020ba894(unsigned int),*FUN_0204152c(void *);
void FUN_020414c0(void) { if(!DAT_02108d64) { void *object=FUN_020ba894(68); if(object) object=FUN_0204152c(object); DAT_02108d64=object; } }
