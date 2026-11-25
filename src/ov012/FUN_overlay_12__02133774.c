// FUN_overlay_12__02133774 @ 0x02133774 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02133774 @ 0x02133774 (code 0x2a, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily construct singleton with owner, configuration and fixed mode.
 * Field identities remain provisional.
 */
extern void *FUN_020ba918(unsigned int);
extern void *FUN_overlay_12__0213381c(void *,void *,const void *,int);
void FUN_overlay_12__02133774(void *owner,const void *config) {void **slot=(void **)0x0213f2f4;if(!*slot) {void *p=FUN_020ba918(376);if(p)p=FUN_overlay_12__0213381c(p,owner,config,1);*slot=p;}}
