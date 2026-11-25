// FUN_overlay_4__0212427c @ 0x0212427c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212427c @ 0x0212427c (code 0x3a, pool extent 0x40, thumb)
// check: vers=2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Draw descriptor at shared origin plus selected row offset.
 * Field identities remain provisional.
 */
typedef struct {short a,b,c,d;int x,y;} D;
extern void FUN_02071d0c(void *);
extern void FUN_0208971c(void *,void *);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_4__0212427c(int *p,int *index) {D d;int delta=*index-p[58];FUN_02071d0c(&d);d.a=0;FUN_0208971c(&d.x,(void *)0x0212d870);d.y+=(13*delta)<<12;FUN_020c32b4(&d,p[0]);}
