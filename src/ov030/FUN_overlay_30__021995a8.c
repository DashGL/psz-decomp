// FUN_overlay_30__021995a8 @ 0x021995a8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_30__021995a8 @ 0x021995a8 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * For selector two, exchange option values on slots two and one.
 * Field identities remain provisional.
 */
extern void FUN_02043ea4(void *,unsigned int,unsigned int);
void FUN_overlay_30__021995a8(void *p,int selector) { if(selector==2) { FUN_02043ea4(p,2,0); FUN_02043ea4(p,1,1); } }
