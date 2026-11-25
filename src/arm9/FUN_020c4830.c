// FUN_020c4830 @ 0x020c4830 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch52-manifest.json; original draft retained for referenced provenance.
// FUN_020c4830 @ 0x020c4830
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch optional manager cleanup through slot +4; redundant null guards retained.
 * Evidence: scratch/coverage-root/batch5/020c4830.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
void FUN_020c4830(void) { void *object=*(void **)0x0211ceec;if(object) { if(object) { void (**table)(void *)=*(void (***)(void *))object;table[1](object); } } }
