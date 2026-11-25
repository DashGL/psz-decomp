// FUN_overlay_12__0213248c @ 0x0213248c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213248c @ 0x0213248c (code 0x36, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay12 ROM reconstruction, 2026-11-05.
 * Game state transition, singleton construction or cleanup.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch357.md.
 * Field identities remain provisional; all stack inputs are explicit.
 */
extern void *FUN_020ba918(unsigned int);extern void *FUN_overlay_12__02132500(void *,void *,void *,unsigned int,unsigned int,unsigned int);
void FUN_overlay_12__0213248c(void *a,void *b,unsigned int c,unsigned int d,unsigned int e) { void *p;if(!*(void **)0x0213f2dc){p=FUN_020ba918(0x3f74);if(p)p=FUN_overlay_12__02132500(p,a,b,c,d,e);*(void **)0x0213f2dc=p;} }
