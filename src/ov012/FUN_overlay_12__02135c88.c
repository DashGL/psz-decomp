// FUN_overlay_12__02135c88 @ 0x02135c88 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02135c88 @ 0x02135c88 (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize optional global singleton by receiver construction.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_12__021358ec(void *);
void FUN_overlay_12__02135c88(void) {void **global=(void **)0x0213f320;if(!*global){void *p=FUN_020ba894(44);if(p)p=FUN_overlay_12__021358ec(p);*global=p;}}
