// FUN_overlay_14__02120050 @ 0x02120050 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120050 @ 0x02120050 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy and free optional singleton receiver then clear its global pointer.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_14__02120108(void *);
extern void FUN_020ba8ac(void *);
void FUN_overlay_14__02120050(void) {void **g=(void **)0x02122184;void *p=*g;if(p){if(p){if(p){FUN_overlay_14__02120108(p);FUN_020ba8ac(p);}*g=0;}}}
