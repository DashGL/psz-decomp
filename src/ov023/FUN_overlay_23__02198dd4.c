// FUN_overlay_23__02198dd4 @ 0x02198dd4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198dd4 @ 0x02198dd4 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke owner transition when resident slot check succeeds.
 * Field identities remain provisional.
 */
extern int FUN_02040d2c(void *,unsigned int);
extern void FUN_overlay_23__02198af4(void *);
void FUN_overlay_23__02198dd4(void **p) { if(FUN_02040d2c(p[1],0))FUN_overlay_23__02198af4(p); }
