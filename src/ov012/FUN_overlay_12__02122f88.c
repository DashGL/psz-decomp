// FUN_overlay_12__02122f88 @ 0x02122f88 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__02122f88 @ 0x02122f88 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate absent singleton and construct it using two-word descriptor.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_12__02123000(void *,const void *);
void FUN_overlay_12__02122f88(const void *descriptor) {void **g=(void **)0x0213ecdc;if(!g[1]){void *p=FUN_020ba894(260);if(p)p=FUN_overlay_12__02123000(p,descriptor);g[1]=p;}}
