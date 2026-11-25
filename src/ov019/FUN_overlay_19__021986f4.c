// FUN_overlay_19__021986f4 @ 0x021986f4 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_overlay_19__021986f4 @ 0x021986f4 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Walk forty optional children and release each by its stored handle.
 * Field identities remain provisional.
 */
extern void FUN_overlay_19__021984b4(void *,unsigned int);
void FUN_overlay_19__021986f4(unsigned int *p) { int i; for(i=0;i<40;i++) { unsigned int *child=(unsigned int *)p[54+i]; if(child)FUN_overlay_19__021984b4(p,child[1]); } }
