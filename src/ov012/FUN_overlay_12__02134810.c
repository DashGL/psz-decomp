// FUN_overlay_12__02134810 @ 0x02134810 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134810 @ 0x02134810 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy and free optional global receiver then clear singleton slot.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_12__02134834(void *);
extern void FUN_020ba8ac(void *);
void FUN_overlay_12__02134810(void) {void **g=(void **)0x0213f2f8;void *p=g[0];if(p){if(p){FUN_overlay_12__02134834(p);FUN_020ba8ac(p);}g[0]=0;}}
