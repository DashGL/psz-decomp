// FUN_overlay_16__0211f56c @ 0x0211f56c (0x38, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_16__0211f56c @ 0x0211f56c (code 0x38, pool extent 0x38, arm)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Attach source and compute two offset differences then clear state byte.
 * ARM mode confirmed from USA instruction stream.
 */
int FUN_overlay_16__0211f56c(unsigned int *p,unsigned int *source) {p[3]=(unsigned int)source;p[1]=source[10]-source[9];source=(unsigned int *)p[3];p[2]=source[11]-source[9];((unsigned char *)p)[16]=0;return 1;}
