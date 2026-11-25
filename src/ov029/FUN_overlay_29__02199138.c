// FUN_overlay_29__02199138 @ 0x02199138 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_29__02199138 @ 0x02199138 (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve target index and update matching manager record for mode one.
 * Field identities remain provisional.
 */
extern int FUN_02037294(void *,void *);
extern int *FUN_02072a14(void *,int,int);
void FUN_overlay_29__02199138(int *p) {int *child=(int *)p[1];p[20]=FUN_02037294(child,child+14);if(child[58]==1){int *r=FUN_02072a14(*(char **)0x0210e24c+116,child[3],0);if(r)r[3]=p[20];}}
