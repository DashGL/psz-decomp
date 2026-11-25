// FUN_overlay_22__0219c404 @ 0x0219c404 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219c404 @ 0x0219c404 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Release handle stored at owner68, then release main slot.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219aea0(void *,void *),FUN_overlay_22__0219ad2c(void *);
void FUN_overlay_22__0219c404(char *p) { FUN_overlay_22__0219aea0(p,p+0x68); FUN_overlay_22__0219ad2c(p); }
