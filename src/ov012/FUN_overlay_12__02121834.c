// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__02121834 @ 0x02121834 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121834 @ 0x02121834 (code 0x2c, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Queue engine event eleven only when shared activity and current event are idle.
 * Field identities remain provisional.
 */
extern int FUN_020c2e38(void);
extern int *FUN_0200d16c(void);
extern int FUN_0200d3a4(void *,int,int);
int FUN_overlay_12__02121834(void *unused_receiver) {if(!FUN_020c2e38()&&FUN_0200d16c()[2]==-1) {FUN_0200d3a4(FUN_0200d16c(),11,1);return 1;}return 0;}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
