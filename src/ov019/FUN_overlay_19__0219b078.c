// FUN_overlay_19__0219b078 @ 0x0219b078 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219b078 @ 0x0219b078 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Copy incoming record into owner and run operation when copied active byte is nonzero.
 * Field identities remain provisional.
 */
extern void FUN_overlay_19__0219b094(void *,void *),FUN_overlay_19__0219b2c0(void *);
void FUN_overlay_19__0219b078(char *p,void *record) { FUN_overlay_19__0219b094(p+0x70,record); if(*(signed char *)(p+0x71))FUN_overlay_19__0219b2c0(p); }
