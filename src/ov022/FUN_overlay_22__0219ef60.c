// FUN_overlay_22__0219ef60 @ 0x0219ef60 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ef60 @ 0x0219ef60 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch, unregister children, send mode, clean base then release receiver.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219f58c(void *),FUN_02035518(void *),FUN_020ba8ac(void *);
extern int FUN_overlay_22__0219f030(int);
void *FUN_overlay_22__0219ef60(unsigned int *p) { p[0]=0x021a1604; FUN_overlay_22__0219f58c(p); FUN_overlay_22__0219f030(3); FUN_02035518(p); FUN_020ba8ac(p); return p; }
