// FUN_overlay_22__0219ae68 @ 0x0219ae68 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219ae68 @ 0x0219ae68 (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate child resource and copy supplied vector when handle resolves.
 * Field identities remain provisional.
 */
typedef struct Vector {int x,y,z;} Vector;
extern int FUN_02074e9c(void *,int,int,int);
extern char *FUN_02075040(void *,int);
int FUN_overlay_22__0219ae68(void **p,int id,int mode,const Vector *v) {int h=FUN_02074e9c(p[1],id,mode,0);if(h!=*(int *)0x020ed09c){char *r=FUN_02075040(p[1],h);if(r)*(Vector *)(r+92)=*v;}return h;}
