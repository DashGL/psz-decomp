// FUN_overlay_15__02134224 @ 0x02134224 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02134224 @ 0x02134224 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Register operation callback, forwarding failure status into error state and fallback cleanup.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02133d2c(unsigned int);
extern int FUN_0205431c(void *,unsigned int);
extern void FUN_overlay_15__02133d7c(int);
extern void FUN_overlay_15__021347b0(void);
int FUN_overlay_15__02134224(void) {int status;FUN_overlay_15__02133d2c(3);status=FUN_0205431c((void *)0x0213424d,0);if(status!=2){FUN_overlay_15__02133d7c(status);FUN_overlay_15__021347b0();return 0;}return 1;}
