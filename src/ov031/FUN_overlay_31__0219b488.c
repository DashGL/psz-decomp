// FUN_overlay_31__0219b488 @ 0x0219b488 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219b488 @ 0x0219b488 (code 0x78, pool extent 0x78, thumb)
// check: vers=2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Scale three vector components with independently rounded fixed-point multiplication.
 * Field identities remain provisional.
 */
extern void FUN_02035408(void *,int,int,int);
void FUN_overlay_31__0219b488(void *out,int *v,int *scale) {int s=*scale;long long x=(long long)v[0]*s,y=(long long)v[1]*s,z=(long long)v[2]*s;FUN_02035408(out,(int)((x+2048)>>12),(int)((y+2048)>>12),(int)((z+2048)>>12));}
