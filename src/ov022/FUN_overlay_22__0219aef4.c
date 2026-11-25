// FUN_overlay_22__0219aef4 @ 0x0219aef4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219aef4 @ 0x0219aef4 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve forwarded handle, store halfword and update optional child.
 * Field identities remain provisional.
 */
extern void *FUN_02075040(void *,unsigned int);
extern void FUN_0204bf88(void *);
void FUN_overlay_22__0219aef4(void **p,unsigned int handle,unsigned short value) { char *child=FUN_02075040(p[1],handle); if(child) { *(unsigned short *)(child+0x6a)=value; FUN_0204bf88(child); } }
