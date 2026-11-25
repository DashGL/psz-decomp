// FUN_overlay_15__021206d0 @ 0x021206d0 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__021206d0 @ 0x021206d0 (code 0x8, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Truncate fill value to byte then invoke resident byte fill.
 * Field identities remain provisional.
 */
extern void FUN_020656b8(void *,unsigned int,unsigned int);
void FUN_overlay_15__021206d0(void *out,unsigned int value,unsigned int size) {FUN_020656b8(out,(unsigned char)value,size);}
