// FUN_overlay_19__0219a778 @ 0x0219a778 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219a778 @ 0x0219a778 (code 0x28, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base, install class table and copy vector with vertical reset.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vector;
extern void *FUN_overlay_19__02198c5c(void *);
void *FUN_overlay_19__0219a778(unsigned int *p,const Vector *vector) {FUN_overlay_19__02198c5c(p);p[0]=0x0219d240;p[12]=-1;*(Vector *)(p+3)=*vector;p[4]=0;return p;}
