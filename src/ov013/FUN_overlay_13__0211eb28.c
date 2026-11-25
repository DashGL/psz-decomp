// FUN_overlay_13__0211eb28 @ 0x0211eb28 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211eb28 @ 0x0211eb28 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate optional receiver and forward constructor option (unused by overlay14 constructors).
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_13__0211e990(void *,int);
void *FUN_overlay_13__0211eb28(int option) {void *p=FUN_020ba894(16);if(p)p=FUN_overlay_13__0211e990(p,option);return p;}
