// FUN_overlay_20__0219cd84 @ 0x0219cd84 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219cd84 @ 0x0219cd84 (code 0x32, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Clear four child flags and initialize receiver timer and count.
 * Field identities remain provisional.
 */
extern void FUN_overlay_20__02198fc0(void *,int);
extern void FUN_overlay_20__02198ff0(void *,int);
extern void FUN_overlay_20__02199010(void *,int);
extern void FUN_overlay_20__02199030(void *,int);
void FUN_overlay_20__0219cd84(unsigned int *p) {void *c=(void *)p[1];FUN_overlay_20__02198fc0(c,0);FUN_overlay_20__02198ff0(c,0);FUN_overlay_20__02199010(c,0);FUN_overlay_20__02199030(c,0);p[4]=*(unsigned int *)0x020fc988;p[5]=0;}
