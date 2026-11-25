// FUN_overlay_15__0212564c @ 0x0212564c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch51.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212564c @ 0x0212564c (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read state byte +f4 of embedded block, offset it and pass to module operation.
 * Field identities and high-level API contracts remain provisional.
 */
extern char *FUN_overlay_15__021318ac(void);
extern void FUN_overlay_15__021255f8(unsigned int);
void FUN_overlay_15__0212564c(void) { char *block=FUN_overlay_15__021318ac(); FUN_overlay_15__021255f8(*(unsigned char *)(block+0xf4)+2); }
