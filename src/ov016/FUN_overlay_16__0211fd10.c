// FUN_overlay_16__0211fd10 @ 0x0211fd10 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211fd10 @ 0x0211fd10 (code 0x24, pool extent 0x28, arm)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Set global buffer and aligned size, reset three state words.
 * ARM mode confirmed from USA instruction stream.
 */
void FUN_overlay_16__0211fd10(unsigned int buffer,unsigned int size) {unsigned int *p=(unsigned int *)0x0212dfa0;size&=~3U;p[4]=buffer;p[3]=size;p[1]=0;p[0]=0;p[8]=0;}
