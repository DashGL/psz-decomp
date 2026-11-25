// FUN_overlay_19__02197f80 @ 0x02197f80 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__02197f80 @ 0x02197f80 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate object and forward incoming owner to constructor.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_19__02197f98(void *,void *);
void *FUN_overlay_19__02197f80(void *owner) { void *p=FUN_020ba894(416); if(p)return FUN_overlay_19__02197f98(p,owner); return p; }
