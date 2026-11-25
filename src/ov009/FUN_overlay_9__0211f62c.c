// FUN_overlay_9__0211f62c @ 0x0211f62c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f62c @ 0x0211f62c (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate optional receiver and forward constructor option; ov9 ctor02120294 ignores this option.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_9__0211f968(void *,int);
void *FUN_overlay_9__0211f62c(int option) {void *p=FUN_020ba894(128);if(p)p=FUN_overlay_9__0211f968(p,option);return p;}
