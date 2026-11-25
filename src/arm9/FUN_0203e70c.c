// FUN_0203e70c @ 0x0203e70c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e70c @ 0x0203e70c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Destroy optional global receiver via dispatch slot +4 then clear global.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203e70c.txt.
 */
extern void *DAT_02108d08;
void FUN_0203e70c(void) { void *object=DAT_02108d08; if(object) { if(object) { void (**table)(void *)=*(void (***)(void *))object; table[1](object); } DAT_02108d08=0; } }
