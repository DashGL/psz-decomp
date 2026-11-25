// FUN_02031a2c @ 0x02031a2c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031a2c @ 0x02031a2c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Allocate/initialize 84-byte global object then initialize secondary singleton.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02031a2c.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_02031a80(void *);
extern void FUN_02030994(void);
void FUN_02031a2c(void) { void *object=FUN_020ba894(84); if(object) object=FUN_02031a80(object); *(void **)0x02108c60=object; FUN_02030994(); }
