// FUN_0203324c @ 0x0203324c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_0203324c @ 0x0203324c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Lazily allocate and initialize 84-byte global object.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/0203324c.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020332a8(void *);
void FUN_0203324c(void) { if(!*(void **)0x02108c68) { void *object=FUN_020ba894(84); if(object) object=FUN_020332a8(object); *(void **)0x02108c68=object; } }
