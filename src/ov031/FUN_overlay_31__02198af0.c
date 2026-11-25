// FUN_overlay_31__02198af0 @ 0x02198af0 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_31__02198af0 @ 0x02198af0 (code 0x30, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31 reconstruction from extracted module bytes, 2026-11-04.
 * Start indexed animation zero and reset vector and counters.
 * Field identities remain provisional.
 */
typedef struct Vector {int x,y,z;} Vector;
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_31__02198af0(int *p) {int *c=(int *)p[1];FUN_02040c0c(c,c[56],0,4096,0);p[3]=0;*(Vector *)(p+4)=*(const Vector *)0x020fc958;p[7]=0;p[8]=0;}
