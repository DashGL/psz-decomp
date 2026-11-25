// FUN_overlay_12__02131b70 @ 0x02131b70 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131b70 @ 0x02131b70 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate absent singleton and construct receiver with supplied option.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_12__02131bbc(void *,unsigned int);
void FUN_overlay_12__02131b70(unsigned int value) {void **g=(void **)0x0213f2d8;if(!*g){void *p=FUN_020ba894(40);if(p)p=FUN_overlay_12__02131bbc(p,value);*g=p;}}
