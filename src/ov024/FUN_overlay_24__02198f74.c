// FUN_overlay_24__02198f74 @ 0x02198f74 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_24__02198f74 @ 0x02198f74 (code 0x26, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 24 reconstruction from extracted module bytes, 2026-11-04.
 * Construct base with both forwarded parameters, install table and initialize position.
 * Field identities remain provisional.
 */
typedef struct {int x,y,z;} Vector;
extern void *FUN_020352dc(void *,int,int);
void *FUN_overlay_24__02198f74(unsigned int *p,int id,int kind) {FUN_020352dc(p,id,kind);p[0]=0x0219c3e8;p[53]=0;*(Vector *)(p+54)=*(Vector *)0x020fc958;return p;}
