// FUN_020c2c80 @ 0x020c2c80 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// FUN_020c2c80 @ 0x020c2c80
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query child readiness through helper.
 * Evidence: scratch/coverage-root/batch4/020c2c80.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_020c2d1c(void *);
int FUN_020c2c80(void **self) { return FUN_020c2d1c(*self); }
