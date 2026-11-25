// FUN_overlay_4__0212c62c @ 0x0212c62c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212c62c @ 0x0212c62c (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy optional singleton receiver and release allocation before clearing global slot.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_4__0212c5ac(void *);
extern void FUN_020ba8ac(void *);
void FUN_overlay_4__0212c62c(void) {void **g=(void **)0x02197f70;void *p=g[0];if(p){if(p){FUN_overlay_4__0212c5ac(p);FUN_020ba8ac(p);}g[0]=0;}}
