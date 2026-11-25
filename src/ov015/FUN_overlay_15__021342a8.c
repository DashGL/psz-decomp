// FUN_overlay_15__021342a8 @ 0x021342a8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__021342a8 @ 0x021342a8 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Select mode ten or zero from descriptor halfword.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02133d2c(unsigned int);
void FUN_overlay_15__021342a8(const unsigned short *p) {if(p[1])FUN_overlay_15__02133d2c(10);else FUN_overlay_15__02133d2c(0);}
