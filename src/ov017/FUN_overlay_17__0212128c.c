// FUN_overlay_17__0212128c @ 0x0212128c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__0212128c @ 0x0212128c (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Release four nonmissing handles and replace each with negative one.
 * Field identities remain provisional.
 */
extern void FUN_overlay_17__0211e784(unsigned int);
void *FUN_overlay_17__0212128c(unsigned int *p) {int i;for(i=0;i<4;i++){if(p[i]!=-1u){FUN_overlay_17__0211e784(p[i]);p[i]=-1u;}}return p;}
