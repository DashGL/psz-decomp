// FUN_020c163c @ 0x020c163c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c163c @ 0x020c163c
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch optional global manager cleanup slot +4.
 * Evidence: scratch/coverage-root/batch3/020c163c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void FUN_020c163c(void) { void *object=*(void **)0x0211c85c;if(object) { void (**table)(void *)=*(void (***)(void *))object;table[1](object); } }
