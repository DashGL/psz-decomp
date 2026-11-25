// FUN_overlay_17__02120e30 @ 0x02120e30 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_17__02120e30 @ 0x02120e30 (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Forward optional child call with every live incoming parameter confirmed in callee.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_17__0211ff70(void *);
void FUN_overlay_17__02120e30(char *self) { void *child=*(void **)(self+8); if(child) FUN_overlay_17__0211ff70(child); }
