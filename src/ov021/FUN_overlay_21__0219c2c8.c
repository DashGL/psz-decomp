// FUN_overlay_21__0219c2c8 @ 0x0219c2c8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219c2c8 @ 0x0219c2c8 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Release active handle and enable both parent-selected child components.
 * Field identities remain provisional.
 */
extern void FUN_02072724(void *,int);
extern void FUN_02044570(void *,int,int);
void FUN_overlay_21__0219c2c8(int *p) {void *c=(void *)p[1];int *parent=(int *)p[2];if(p[6]!=-1){FUN_02072724(c,p[6]);p[6]=-1;}FUN_02044570(c,parent[11],1);FUN_02044570(c,parent[12],1);}
