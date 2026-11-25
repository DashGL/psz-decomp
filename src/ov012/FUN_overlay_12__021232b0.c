// FUN_overlay_12__021232b0 @ 0x021232b0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__021232b0 @ 0x021232b0 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily create singleton using default two-word descriptor and return stored receiver.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__02122f88(const int *);
void *FUN_overlay_12__021232b0(void) {void **g=(void **)0x0213ecdc;if(!g[1]){int defaults[2];defaults[0]=0;defaults[1]=-1;FUN_overlay_12__02122f88(defaults);}return g[1];}
