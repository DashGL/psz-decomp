// FUN_overlay_21__0219d3e0 @ 0x0219d3e0 (0x5e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219d3e0 @ 0x0219d3e0 (code 0x5e, pool extent 0x5e, thumb)
// check: vers=2.0/sp2p3 target=0x5e candidate=0x5e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Snapshot parent component indices, hide them and select animation by parent kind.
 * Field identities remain provisional.
 */
extern void FUN_02044570(void *,int,int);
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_21__0219d3e0(int *p) {int *parent=(int *)p[2],*child=(int *)p[1];p[3]=parent[10];p[4]=parent[11];p[5]=parent[12];FUN_02044570(child,p[4],0);FUN_02044570(child,p[5],0);if(parent[4]==0)FUN_02040c0c(child,p[3],24,4096,0);else if(parent[4]==1)FUN_02040c0c(child,p[3],46,4096,0);}
