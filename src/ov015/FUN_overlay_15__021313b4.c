// FUN_overlay_15__021313b4 @ 0x021313b4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__021313b4 @ 0x021313b4 (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Write global mode byte and mode-dependent companion byte.
 * Field identities remain provisional.
 */
void FUN_overlay_15__021313b4(unsigned int mode) {unsigned char *p=*(unsigned char **)0x0213e8bc;p[28]=mode;(*(unsigned char **)0x0213e8bc)[29]=mode==2?4:6;}
