// FUN_020c0790 @ 0x020c0790 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// FUN_020c0790 @ 0x020c0790
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward supplied record to global record helper and return one.
 * Evidence: scratch/coverage-root/batch2/020c0790.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_02074504(void *,void *);
int FUN_020c0790(void *record) { FUN_02074504((void *)0x0211b3f0,record);return 1; }
