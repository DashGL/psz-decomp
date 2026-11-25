// FUN_overlay_14__02121234 @ 0x02121234 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02121234 @ 0x02121234 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate optional receiver and forward constructor option (unused by overlay14 constructors).
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_14__02120dc4(void *,int);
void *FUN_overlay_14__02121234(int option) {void *p=FUN_020ba894(236);if(p)p=FUN_overlay_14__02120dc4(p,option);return p;}
