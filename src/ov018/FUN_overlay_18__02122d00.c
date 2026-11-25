// FUN_overlay_18__02122d00 @ 0x02122d00 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__02122d00 @ 0x02122d00 (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and construct singleton only when absent.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_18__02122e44(void *);
void FUN_overlay_18__02122d00(void) {void **g=(void **)0x02156648;if(!g[0]){void *p=FUN_020ba894(56);if(p)p=FUN_overlay_18__02122e44(p);g[0]=p;}}
