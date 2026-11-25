// FUN_overlay_17__02122c0c @ 0x02122c0c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02122c0c @ 0x02122c0c (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Set byte cursor, copy leading signed byte and advance cursor.
 * Field identities remain provisional.
 */
void FUN_overlay_17__02122c0c(char *p,signed char *cursor) {*(signed char **)(p+0x9d18)=cursor;*(signed char *)(p+0x9d3d)=**(signed char **)(p+0x9d18);++*(signed char **)(p+0x9d18);}
