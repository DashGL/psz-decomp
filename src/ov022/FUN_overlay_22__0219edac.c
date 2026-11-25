// FUN_overlay_22__0219edac @ 0x0219edac (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219edac @ 0x0219edac (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Apply state to three linked actor components when parent exists.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219cb68(void *,int,int);
extern void FUN_overlay_22__0219b274(void *,int,int);
extern void FUN_overlay_22__021981cc(void *,int,int);
void FUN_overlay_22__0219edac(unsigned int *p) {void **child=(void **)p[2];if(child) {FUN_overlay_22__0219cb68(child[14],2,0);FUN_overlay_22__0219b274(child[13],2,0);FUN_overlay_22__021981cc(child[12],2,0);}}
