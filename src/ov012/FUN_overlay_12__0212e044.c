// FUN_overlay_12__0212e044 @ 0x0212e044 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212e044 @ 0x0212e044 (code 0xe, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Set request word +6c of optional global object; return observed r0 value.
 * Field identities and high-level API contracts remain provisional.
 */
unsigned int FUN_overlay_12__0212e044(void) { unsigned int *object=*(unsigned int **)0x0213f2d0; if(object) { object[27]=1; return 1; } return 0x0213f2d0; }
