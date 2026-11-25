// FUN_overlay_15__02134170 @ 0x02134170 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02134170 @ 0x02134170 (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Register operation callback; report status two as success and forward other status to error recorder.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02133d2c(unsigned int);
extern int FUN_02053f94(void *);
extern void FUN_overlay_15__02133d7c(int);
int FUN_overlay_15__02134170(void) {int status;status=FUN_02053f94((void *)0x0213418d);if(status!=2){FUN_overlay_15__02133d7c(status);return 0;}return 1;}
