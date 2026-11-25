// FUN_overlay_22__0219fec8 @ 0x0219fec8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219fec8 @ 0x0219fec8 (code 0x2a, pool extent 0x2a, thumb)
// check: vers=2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Release four receiver handles through supplied owner when available.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,int);
extern void FUN_02072724(void *,int);
void FUN_overlay_22__0219fec8(int *p,void *owner) {if(owner) {FUN_02075068(owner,p[16]);FUN_02075068(owner,p[15]);FUN_02075068(owner,p[17]);FUN_02072724(owner,p[18]);}}
