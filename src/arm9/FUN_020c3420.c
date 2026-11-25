// FUN_020c3420 @ 0x020c3420 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// FUN_020c3420 @ 0x020c3420
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward input after fixed global context.
 * Evidence: scratch/coverage-root/batch4/020c3420.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int FUN_02013024(void *,unsigned int);
unsigned int FUN_020c3420(unsigned int a) { return FUN_02013024((void *)0x0211c8f0,a); }
