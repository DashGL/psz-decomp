// FUN_overlay_10__0211ec64 @ 0x0211ec64 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211ec64 @ 0x0211ec64 (code 0x22, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily initialize singleton with default descriptor and return stored receiver.
 * Field identities remain provisional.
 */
extern void FUN_overlay_10__0211e93c(const int *);
void *FUN_overlay_10__0211ec64(void) {void **g=(void **)0x02122d60;if(!g[1]){int defaults[2];defaults[0]=0;defaults[1]=-1;FUN_overlay_10__0211e93c(defaults);}return g[1];}
