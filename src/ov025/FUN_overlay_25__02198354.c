// FUN_overlay_25__02198354 @ 0x02198354 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198354 @ 0x02198354 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Fetch child transform records and write selected transform word when available.
 * Field identities remain provisional.
 */
extern void *FUN_02036c88(void *,int);
extern int FUN_0204260c(void *,int,void *,void *);
void FUN_overlay_25__02198354(void *p,unsigned int unused,unsigned int *out) {unsigned int transform[12];unsigned int rotation[9];void *child=FUN_02036c88(p,0);if(child&&FUN_0204260c(child,0,transform,rotation))*out=transform[10];}
