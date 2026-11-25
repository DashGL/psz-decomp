// FUN_overlay_19__0219a5c8 @ 0x0219a5c8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219a5c8 @ 0x0219a5c8 (code 0x32, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize derived receiver with supplied vector and halfword parameter.
 * Field identities remain provisional.
 */
typedef struct Vector {int x,y,z;} Vector;
extern void *FUN_overlay_19__02198c5c(void *);
int *FUN_overlay_19__0219a5c8(int *p,const Vector *v,int value) {FUN_overlay_19__02198c5c(p);p[0]=0x0219d264;p[12]=-1;p[13]=0;p[2]=1;*(Vector *)(p+3)=*v;*(short *)(p+6)=value;p[9]=0;return p;}
