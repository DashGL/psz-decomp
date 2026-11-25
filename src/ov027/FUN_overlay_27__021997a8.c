// FUN_overlay_27__021997a8 @ 0x021997a8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_27__021997a8 @ 0x021997a8 (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Check owner handle against all-ones sentinel.
 * Field identities remain provisional.
 */
int FUN_overlay_27__021997a8(char *p) { return *(unsigned int *)(p+0xd4)!=~0U; }
