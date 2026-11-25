// FUN_020c1f3c @ 0x020c1f3c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// FUN_020c1f3c @ 0x020c1f3c
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize base object then install dispatch table and return self.
 * Evidence: scratch/coverage-root/batch3/020c1f3c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020bcdb4(void *);
void *FUN_020c1f3c(unsigned int *self) { FUN_020bcdb4(self);self[0]=0x020fca7c;return self; }
