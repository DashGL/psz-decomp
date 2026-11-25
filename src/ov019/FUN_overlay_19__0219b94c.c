// FUN_overlay_19__0219b94c @ 0x0219b94c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch61.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219b94c @ 0x0219b94c (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Clear receiver counter, start child animation21 and clear child trailing state.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,int,int,int,int);
void FUN_overlay_19__0219b94c(unsigned int *p) {unsigned int *child=(unsigned int *)p[1];p[3]=0;FUN_02040c0c(child,0,21,4096,0);child[97]=0;}
