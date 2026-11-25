// FUN_overlay_4__0211ef24 @ 0x0211ef24 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0211ef24 @ 0x0211ef24 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate optional global receiver and construct with incoming owner value.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_4__0211ee2c(void *,unsigned int);
void FUN_overlay_4__0211ef24(unsigned int value) {void *p=FUN_020ba894(156);if(p)p=FUN_overlay_4__0211ee2c(p,value);*(void **)0x02192cd0=p;}
