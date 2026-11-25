// FUN_overlay_20__02199030 @ 0x02199030 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_20__02199030 @ 0x02199030 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Set or clear extended flag four.
 * Field identities remain provisional.
 */
void FUN_overlay_20__02199030(unsigned int *p,int enabled) {if(enabled)p[59]|=4;else p[59]&=~4U;}
