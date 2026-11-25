// FUN_overlay_12__0213129c @ 0x0213129c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213129c @ 0x0213129c (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Singleton construction or controller cleanup in observed order.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch353.md.
 * Field identities remain provisional.
 */
extern void *FUN_020ba918(unsigned int);extern int *FUN_overlay_12__021312d0(void *,void *);
int FUN_overlay_12__0213129c(void *owner) { int *p;if(!*(void **)0x0213f2d4){p=FUN_020ba918(508);if(p)p=FUN_overlay_12__021312d0(p,owner);*(int **)0x0213f2d4=p;if(p)return p[2];}return -1; }
