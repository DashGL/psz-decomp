// FUN_overlay_23__0219a440 @ 0x0219a440 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch7.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219a440 @ 0x0219a440 (code 0x46, pool extent 0x4c, thumb)
// check: vers=2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and initialize an array of actor records using a concrete empty construction callback.
 * Field identities remain provisional.
 */
typedef void (*Callback)(void *);extern void *FUN_0200c2dc(unsigned int,unsigned int,unsigned int,Callback,Callback);extern void FUN_overlay_23__0219a48c(void *);void FUN_overlay_23__0219a440(unsigned char *p) {int i;*(int *)(p+220)=10;*(void **)(p+216)=FUN_0200c2dc(10,40,0,(Callback)0x0219a4d5,0);for(i=0;i<*(int *)(p+220);i++)FUN_overlay_23__0219a48c(*(unsigned char **)(p+216)+i*40);}
