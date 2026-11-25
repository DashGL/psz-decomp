// FUN_overlay_12__021205ec @ 0x021205ec (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__021205ec @ 0x021205ec (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Select extended field for selectors 2/3, otherwise word +c.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__021205ec(char *self,unsigned int selector) { if(selector-2<=1) return *(unsigned int *)(self+0xbd4); return *(unsigned int *)(self+12); }
