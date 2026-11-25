// FUN_02031a4c @ 0x02031a4c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031a4c @ 0x02031a4c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02031a4c.txt.
 */
extern void FUN_020309bc(void); extern void FUN_02031b34(void *); extern void FUN_020ba8ac(void *);
void FUN_02031a4c(void) { void *p; FUN_020309bc(); p=*(void **)0x02108c60; if(p) { if(p) { FUN_02031b34(p); FUN_020ba8ac(p); } *(void **)0x02108c60=0; } }
