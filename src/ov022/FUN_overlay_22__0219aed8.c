// FUN_overlay_22__0219aed8 @ 0x0219aed8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219aed8 @ 0x0219aed8 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve incoming handle and copy record to optional child field.
 * Field identities remain provisional.
 */
typedef struct Triple { unsigned int x,y,z; } Triple;
extern void *FUN_02075040(void *,unsigned int);
void FUN_overlay_22__0219aed8(void **p,unsigned int handle,const Triple *record) { char *child=FUN_02075040(p[1],handle); if(child)*(Triple *)(child+0x50)=*record; }
