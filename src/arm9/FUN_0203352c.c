// FUN_0203352c @ 0x0203352c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_0203352c @ 0x0203352c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Cleanup optional global object then clear global flags unconditionally.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0203352c.txt.
 */
extern void FUN_020507e0(void *);
void FUN_0203352c(void) { void *object=*(void **)0x0210e240; if(object) FUN_020507e0(object); *(unsigned int *)0x02108c6c=0; }
