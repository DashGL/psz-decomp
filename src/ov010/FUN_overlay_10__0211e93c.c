// FUN_overlay_10__0211e93c @ 0x0211e93c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211e93c @ 0x0211e93c (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate singleton and construct using supplied two-word descriptor.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_10__0211e9b4(void *,const void *);
void FUN_overlay_10__0211e93c(const void *descriptor) {void **g=(void **)0x02122d60;if(!g[1]){void *p=FUN_020ba894(260);if(p)p=FUN_overlay_10__0211e9b4(p,descriptor);g[1]=p;}}
