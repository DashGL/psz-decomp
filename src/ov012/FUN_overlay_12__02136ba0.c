// FUN_overlay_12__02136ba0 @ 0x02136ba0 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch28.json; original draft retained for referenced provenance.
// FUN_overlay_12__02136ba0 @ 0x02136ba0 (code 0x4a, pool extent 0x4a, thumb)
// check: vers=2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Measure five-unit glyph widths and ten-unit line heights over at most256 bytes.
 * Field identities remain provisional.
 */
void FUN_overlay_12__02136ba0(int *width,int *height,const signed char *text) {int max=0,i;*width=0;*height=10;for(i=0;i<256;i++){if(text[i]==10){if(max<*width)max=*width;*width=0;*height+=10;}else if(text[i]==0){if(max<*width)max=*width;*width=max;return;}else *width+=5;}}
