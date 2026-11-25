// FUN_overlay_28__0219aacc @ 0x0219aacc (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219aacc @ 0x0219aacc (code 0x34, pool extent 0x38, thumb)
// check: vers=2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize base object, three sentinel fields and zero vector.
 * Field identities remain provisional.
 */
extern void *FUN_020352dc(void *,int,int);
extern void FUN_02035408(void *,int,int,int);
int *FUN_overlay_28__0219aacc(int *p,int id,int kind) {FUN_020352dc(p,id,kind);p[0]=0x0219c32c;p[53]=-1;p[54]=-1;p[55]=-1;FUN_02035408(p+56,0,0,0);return p;}
