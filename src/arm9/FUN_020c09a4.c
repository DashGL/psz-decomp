// FUN_020c09a4 @ 0x020c09a4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// FUN_020c09a4 @ 0x020c09a4
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return whether signed-byte vote sum is below -10.
 * Evidence: scratch/coverage-root/batch2/020c09a4.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_020c0978(void);
int FUN_020c09a4(void) { if(FUN_020c0978()<-10)return 1;return 0; }
