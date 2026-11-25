// FUN_overlay_25__021989f0 @ 0x021989f0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_25__021989f0 @ 0x021989f0 (code 0x36, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Replace child position height with shared value and enable component.
 * Field identities remain provisional.
 */
typedef struct Vector {int x,y,z;} Vector;
extern void FUN_020445a8(void *,int,int);
void FUN_overlay_25__021989f0(void **p) {int *c=p[1];Vector v=*(Vector *)(c+14);v.y=*(int *)0x020fc988;*(Vector *)(c+14)=v;FUN_020445a8(c,0,1);}
