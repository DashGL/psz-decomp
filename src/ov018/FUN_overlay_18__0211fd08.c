// FUN_overlay_18__0211fd08 @ 0x0211fd08 (0x10a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch40.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211fd08 @ 0x0211fd08 (code 0x10a, pool extent 0x10a, thumb)
// check: vers=2.0/sp2p3 target=0x10a candidate=0x10a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Scale two groups of paired coordinates using signed fixed-point multiplication and rounding.
 * Field identities remain provisional.
 */
void FUN_overlay_18__0211fd08(unsigned char *p,int xScale,int yScale) {int *v=*(int **)(p+900);v[0]=(int)(((long long)xScale*v[0]+2048)>>12);v[1]=(int)(((long long)xScale*v[1]+2048)>>12);v[2]=(int)(((long long)yScale*v[2]+2048)>>12);v[3]=(int)(((long long)yScale*v[3]+2048)>>12);v[10]=(int)(((long long)xScale*v[10]+2048)>>12);v[11]=(int)(((long long)xScale*v[11]+2048)>>12);v[12]=(int)(((long long)yScale*v[12]+2048)>>12);v[13]=(int)(((long long)yScale*v[13]+2048)>>12);}
