// FUN_overlay_17__0211f748 @ 0x0211f748 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211f748 @ 0x0211f748 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Copy descriptor groups into consecutive output records, returning advanced output pointer.
 * Field identities remain provisional.
 */
extern char *FUN_overlay_17__0211f720(void *,char *,void *);
char *FUN_overlay_17__0211f748(void *self,char *out,unsigned int *desc) {void **p=(void **)desc[2];void **end=p+*(unsigned short *)desc;do {out=FUN_overlay_17__0211f720(self,out,*p);++p;}while(p<end);return out;}
