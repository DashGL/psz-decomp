// FUN_overlay_28__0219999c @ 0x0219999c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219999c @ 0x0219999c (code 0x28, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * For valid event switch state and retain optional supplied target index.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,int);
void FUN_overlay_28__0219999c(int *p,unsigned int unused,const int *value,int event) {if(event!=-1) {FUN_02037910(p,p[18]);p[21]=2;if(*value!=-1) {p[23]=*value;p[22]=1;}}}
