// FUN_overlay_21__021990dc @ 0x021990dc (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_21__021990dc @ 0x021990dc (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Apply incoming option to slot two and inverted option to slot zero.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,unsigned int,unsigned int);
void FUN_overlay_21__021990dc(void *p,unsigned int enabled) { FUN_02044570(p,2,enabled); FUN_02044570(p,0,enabled==0); }
