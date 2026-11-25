// FUN_overlay_30__02199cd8 @ 0x02199cd8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_30__02199cd8 @ 0x02199cd8 (code 0x26, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize sentinel, default vector and cleared trailing state.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Vec;
void FUN_overlay_30__02199cd8(unsigned int *p) {p[0]=~0U;p[1]=0;p[2]=0;*(Vec *)(p+3)=*(const Vec *)0x020fc958;((unsigned short *)p)[12]=0;((unsigned short *)p)[13]=0;p[7]=0;}
