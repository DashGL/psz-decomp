// FUN_overlay_15__021341dc @ 0x021341dc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__021341dc @ 0x021341dc (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Register operation callback; report status two as success and forward other status to error recorder.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02133d2c(unsigned int);
extern int FUN_020547b0(void *);
extern void FUN_overlay_15__02133d7c(int);
int FUN_overlay_15__021341dc(void) {int status;FUN_overlay_15__02133d2c(3);status=FUN_020547b0((void *)0x02134201);if(status!=2){FUN_overlay_15__02133d7c(status);return 0;}return 1;}
