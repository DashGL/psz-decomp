// FUN_overlay_10__02120188 @ 0x02120188 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120188 @ 0x02120188 (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize optional global singleton by allocation and receiver constructor.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_10__0212020c(void *);
void FUN_overlay_10__02120188(void) {void **global=(void **)0x02122d84;if(!*global){void *p=FUN_020ba894(152);if(p)p=FUN_overlay_10__0212020c(p);*global=p;}}
