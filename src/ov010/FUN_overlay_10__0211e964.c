// FUN_overlay_10__0211e964 @ 0x0211e964 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211e964 @ 0x0211e964 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy and release optional singleton receiver then clear global slot.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_10__0211eb98(void *);
extern void FUN_020ba8ac(void *);
void FUN_overlay_10__0211e964(void) {void **g=(void **)0x02122d60;void *p=g[1];if(p){if(p){FUN_overlay_10__0211eb98(p);FUN_020ba8ac(p);}g[1]=0;}}
