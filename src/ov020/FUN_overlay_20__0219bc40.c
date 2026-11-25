// FUN_overlay_20__0219bc40 @ 0x0219bc40 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch9.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219bc40 @ 0x0219bc40 (code 0x38, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and initialize an array of actor records using a concrete empty construction callback.
 * Field identities remain provisional.
 */
typedef void (*Callback)(void *);extern void *FUN_0200c2dc(unsigned int,unsigned int,unsigned int,Callback,Callback);extern void FUN_overlay_20__0219bc7c(void *);void FUN_overlay_20__0219bc40(unsigned char *p) {int i;*(void **)(p+216)=FUN_0200c2dc(6,72,0,(Callback)0x0219bcdd,0);for(i=0;i<6;i++)FUN_overlay_20__0219bc7c(*(unsigned char **)(p+216)+i*72);}
