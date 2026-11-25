// FUN_020c1b14 @ 0x020c1b14 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// FUN_020c1b14 @ 0x020c1b14
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset default context then reload manager and clear stored minimum.
 * Evidence: scratch/coverage-root/batch3/020c1b14.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0200f0d0(void *);
void FUN_020c1b14(void) { FUN_0200f0d0((*(void ***)0x0211c85c)[2]);(*(unsigned int **)0x0211c85c)[6]=0; }
