// FUN_overlay_17__02120e40 @ 0x02120e40 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_17__02120e40 @ 0x02120e40 (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Forward optional child call with every live incoming parameter confirmed in callee.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_17__0211ff2c(void *,int,int,int);
void FUN_overlay_17__02120e40(char *self,int a,int b,int c) { void *child=*(void **)(self+8); if(child) FUN_overlay_17__0211ff2c(child,a,b,c); }
