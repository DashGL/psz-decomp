// FUN_overlay_25__02199e58 @ 0x02199e58 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_25__02199e58 @ 0x02199e58 (code 0x64, pool extent 0x64, thumb)
// check: vers=2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Compute the unsigned shortest heading difference from a normalized direction vector.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_02036368(Vec *);extern unsigned short FUN_0205cc08(int);unsigned short FUN_overlay_25__02199e58(unsigned char *self,const Vec *direction){Vec a=*direction,b;unsigned short angle,difference;FUN_02036368(&a);angle=FUN_0205cc08(a.z);b=*direction;FUN_02036368(&b);if(b.x<0)angle=(unsigned short)(65536-angle);difference=(unsigned short)(angle-*(unsigned short *)(self+68));if(difference>=32768)difference=(unsigned short)(65536-difference);return difference;}
