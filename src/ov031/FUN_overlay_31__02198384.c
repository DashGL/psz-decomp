// FUN_overlay_31__02198384 @ 0x02198384 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198384 @ 0x02198384 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Run base update and issue four-word operation for successful type-four receiver.
 * Field identities remain provisional.
 */
extern int FUN_02047440(void *);
extern int FUN_0204770c(void *);
extern void FUN_0204ac24(int,int,int,int);
int FUN_overlay_31__02198384(int *p) {int status=FUN_02047440(p);if(!status && FUN_0204770c(p))FUN_0204ac24(p[58],p[88],p[24],p[65]);return status;}
