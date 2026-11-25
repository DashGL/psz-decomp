// FUN_overlay_19__02198a5c @ 0x02198a5c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198a5c @ 0x02198a5c (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Write fixed-point default; for selector three through six copy optional child field.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_19__021985f8(void *,int);
void FUN_overlay_19__02198a5c(void *p,int selector,unsigned int *out) { *out=0x1000; if(selector>=3 && selector<=6) { unsigned int *child=FUN_overlay_19__021985f8(p,selector-3); if(child)*out=child[4]; } }
