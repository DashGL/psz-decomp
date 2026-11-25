// FUN_overlay_4__0212be24 @ 0x0212be24 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212be24 @ 0x0212be24 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Destroy and free optional receiver then unconditionally clear global slot.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_4__0212bda8(void *);
extern void FUN_020ba8ac(void *);
void FUN_overlay_4__0212be24(void) {void **g=(void **)0x02197f44;void *p=g[1];if(p){if(p){FUN_overlay_4__0212bda8(p);FUN_020ba8ac(p);}}g[1]=0;}
