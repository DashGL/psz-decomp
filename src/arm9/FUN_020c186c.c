// FUN_020c186c @ 0x020c186c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// FUN_020c186c @ 0x020c186c
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query indexed global context; target supplies no index guard.
 * Evidence: scratch/coverage-root/batch3/020c186c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_0200f314(void *);
int FUN_020c186c(unsigned int index) { char *manager=*(char **)0x0211c85c;return FUN_0200f314((*(void ***)(manager+20))[index]); }
