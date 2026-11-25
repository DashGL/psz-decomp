// FUN_overlay_26__021985dc @ 0x021985dc (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_26__021985dc @ 0x021985dc (code 0x36, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 26 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve target vector or shared default, then start animation three.
 * Field identities remain provisional.
 */
typedef struct Vector {int x,y,z;} Vector;
extern int FUN_overlay_26__021982f4(void *,void *);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_26__021985dc(int *p) {if(!FUN_overlay_26__021982f4((void *)p[2],p+3))*(Vector *)(p+3)=*(const Vector *)0x020fc958;FUN_02040c0c((void *)p[1],0,3,4096,0);}
