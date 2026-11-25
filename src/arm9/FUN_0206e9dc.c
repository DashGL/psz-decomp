// FUN_0206e9dc @ 0x0206e9dc (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206e9dc @ 0x0206e9dc
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch optional singleton destructor with observed nested guards and clear global slot.
 * Evidence: scratch/coverage-root/batch6/0206e9dc.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void FUN_0206e9dc(void) { void *object=*(void **)0x0211a1f4;if(object) { if(object) { if(object) { void (**table)(void *)=*(void (***)(void *))object;table[1](object); }*(void **)0x0211a1f4=0; } } }
