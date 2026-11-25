// FUN_020309bc @ 0x020309bc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020309bc @ 0x020309bc (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/020309bc.txt.
 */
extern void FUN_02030a20(void *); extern void FUN_020ba8ac(void *);
void FUN_020309bc(void) { void **base=(void **)0x02108c50; void *object=base[1]; if(object) { if(object) { FUN_02030a20(object); FUN_020ba8ac(object); } base[1]=0; } }
