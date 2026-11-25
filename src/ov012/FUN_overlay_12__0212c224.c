// FUN_overlay_12__0212c224 @ 0x0212c224 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212c224 @ 0x0212c224 (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate owner-linked object and return its handle or failure sentinel.
 * Field identities remain provisional.
 */
extern void *FUN_020ba918(unsigned int);
extern unsigned int *FUN_overlay_12__0212c27c(void *,void *,const void *);
int FUN_overlay_12__0212c224(void *owner,const void *config) {unsigned int *p=FUN_020ba918(368);if(p)p=FUN_overlay_12__0212c27c(p,owner,config);if(p)return p[2];return -1;}
