// FUN_overlay_12__02133264 @ 0x02133264 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02133264 @ 0x02133264 (code 0x26, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily allocate and construct singleton with forwarded owner and configuration.
 * Field identities remain provisional.
 */
extern void *FUN_020ba918(unsigned int);
extern void *FUN_overlay_12__02133290(void *,void *,unsigned int);
void FUN_overlay_12__02133264(void *owner,unsigned int value) {void **slot=(void **)0x0213f2e0;if(!*slot) {void *p=FUN_020ba918(132);if(p)p=FUN_overlay_12__02133290(p,owner,value);*slot=p;}}
