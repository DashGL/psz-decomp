// FUN_020c1884 @ 0x020c1884 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c1884 @ 0x020c1884
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query indexed global context via second helper; target supplies no index guard.
 * Evidence: scratch/coverage-root/batch3/020c1884.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_0200f1f4(void *);
int FUN_020c1884(unsigned int index) { char *manager=*(char **)0x0211c85c;return FUN_0200f1f4((*(void ***)(manager+20))[index]); }
