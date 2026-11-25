// FUN_overlay_30__02198f14 @ 0x02198f14 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_30__02198f14 @ 0x02198f14 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Run one-argument owner operation only for selected event code.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_30__02198f30(void *);
void FUN_overlay_30__02198f14(void *self,int event) { if(event==0) FUN_overlay_30__02198f30(self); }
