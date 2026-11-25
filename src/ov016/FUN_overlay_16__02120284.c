// FUN_overlay_16__02120284 @ 0x02120284 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_overlay_16__02120284 @ 0x02120284 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Clear two words and initialize third to sentinel.
 * Field identities remain provisional.
 */
void FUN_overlay_16__02120284(unsigned int *p) {p[0]=0;p[1]=0;p[2]=~0U;}
