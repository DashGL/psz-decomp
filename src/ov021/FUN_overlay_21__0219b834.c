// FUN_overlay_21__0219b834 @ 0x0219b834 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch8.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219b834 @ 0x0219b834 (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Reset timer and select child animation from parent kind.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_21__0219b834(int *p) {int *parent,*child,index,kind;p[3]=0;p[4]=60;parent=(int *)p[2];child=(int *)p[1];index=parent[10];kind=parent[4];p[6]=kind;if(kind==0)FUN_02040c0c(child,index,23,4096,0);else if(kind==1)FUN_02040c0c(child,index,44,4096,10);}
