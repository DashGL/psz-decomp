// FUN_020c1654 @ 0x020c1654 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// FUN_020c1654 @ 0x020c1654
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Call cleanup helper on optional global manager.
 * Evidence: scratch/coverage-root/batch3/020c1654.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c1668(void *);
void FUN_020c1654(void) { void *object=*(void **)0x0211c85c;if(object)FUN_020c1668(object); }
