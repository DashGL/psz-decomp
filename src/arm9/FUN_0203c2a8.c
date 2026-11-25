// FUN_0203c2a8 @ 0x0203c2a8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203c2a8 @ 0x0203c2a8 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Destroy optional global receiver through dispatch +4 and clear global, retaining nested guards.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/0203c2a8.txt.
 */
void FUN_0203c2a8(void) { void *object=*(void **)0x02108d04; if(object) { if(object) { if(object) { void (**table)(void *)=*(void (***)(void *))object; table[1](object); } *(void **)0x02108d04=0; } } }
