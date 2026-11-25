// FUN_overlay_19__0219c7e0 @ 0x0219c7e0 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219c7e0 @ 0x0219c7e0 (code 0x56, pool extent 0x56, thumb)
// check: vers=2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Select child animation and optional child flag from parent mode.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_19__0219c7e0(int *p) {int *parent=(int *)p[2],*c=(int *)p[1];p[4]=!parent[36];if(((signed char *)parent)[100]==5){p[3]=0;FUN_02040c0c(c,0,2,4096,0);}else{p[3]=4;FUN_02040c0c(c,0,12,4096,0);}if(p[4]==1)c[101]=1;}
