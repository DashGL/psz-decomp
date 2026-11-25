// FUN_overlay_22__0219addc @ 0x0219addc (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219addc @ 0x0219addc (code 0x54, pool extent 0x58, thumb)
// check: vers=2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Emit event at own position or shared manager position if present.
 * Field identities remain provisional.
 */
extern void FUN_02035408(void *,int,int,int);
extern void FUN_02037214(void *,int,int,void *,int);
void FUN_overlay_22__0219addc(int *p,int kind) {struct V {int x,y,z;} v=*(struct V *)(p+4),tmp;int *g=*(int **)0x02108d04;if(g){FUN_02035408(&tmp,g[45],g[46],g[47]);v=tmp;}FUN_02037214((void *)p[1],27,kind,&v,1);}
