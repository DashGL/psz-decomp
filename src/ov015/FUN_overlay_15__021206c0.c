// FUN_overlay_15__021206c0 @ 0x021206c0 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_overlay_15__021206c0 @ 0x021206c0 (code 0xa, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy source into destination through resident byte-copy primitive.
 * Field identities remain provisional.
 */
extern void FUN_02065774(const void *,void *,unsigned int);
void FUN_overlay_15__021206c0(void *out,const void *input,unsigned int size) {FUN_02065774(input,out,size);}
