// FUN_overlay_15__02125638 @ 0x02125638 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02125638 @ 0x02125638 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Read state byte +f4 of embedded block, offset it and pass to module operation.
 * Field identities and high-level API contracts remain provisional.
 */
extern char *FUN_overlay_15__021318ac(void);
extern unsigned int FUN_overlay_15__021255f8(unsigned int);
unsigned int FUN_overlay_15__02125638(void) { char *block=FUN_overlay_15__021318ac(); return FUN_overlay_15__021255f8(*(unsigned char *)(block+0xf4)+5); }
