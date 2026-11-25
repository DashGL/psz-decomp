// FUN_overlay_19__02198f70 @ 0x02198f70 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198f70 @ 0x02198f70 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base receiver, install derived table and copy three-word position.
 * Field identities remain provisional.
 */
typedef struct {unsigned int x,y,z;} Triple;
extern void *FUN_overlay_19__02198c5c(void *);
void *FUN_overlay_19__02198f70(unsigned int *p,const Triple *position) {FUN_overlay_19__02198c5c(p);p[0]=0x0219d21c;p[12]=-1u;*(Triple *)(p+3)=*position;return p;}
