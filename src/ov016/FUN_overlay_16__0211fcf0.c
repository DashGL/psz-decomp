// FUN_overlay_16__0211fcf0 @ 0x0211fcf0 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211fcf0 @ 0x0211fcf0 (code 0x1c, pool extent 0x20, arm)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Set global buffer and aligned length, clear position.
 * ARM mode confirmed from USA instruction stream.
 */
void FUN_overlay_16__0211fcf0(unsigned int buffer,unsigned int length) {unsigned int *p=(unsigned int *)0x0212dfa0;length&=~3U;p[6]=buffer;p[5]=length;p[2]=0;}
