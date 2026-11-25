// FUN_overlay_24__02198f44 @ 0x02198f44 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_24__02198f44 @ 0x02198f44 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate object and forward both incoming constructor parameters.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_24__02198f74(void *,unsigned int,unsigned int);
void *FUN_overlay_24__02198f44(unsigned int a,unsigned int b) { void *p=FUN_020ba894(228); if(p)return FUN_overlay_24__02198f74(p,a,b); return p; }
