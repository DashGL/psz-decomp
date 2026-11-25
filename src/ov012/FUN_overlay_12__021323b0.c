// FUN_overlay_12__021323b0 @ 0x021323b0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__021323b0 @ 0x021323b0 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Forward two values through optional global receiver.
 * Field identities remain provisional.
 */
extern int FUN_overlay_12__021323d0(void *,unsigned int,unsigned int);
int FUN_overlay_12__021323b0(unsigned int a,unsigned int b) {void *p=*(void **)0x0213f2dc;if(p)return FUN_overlay_12__021323d0(p,a,b);return 0;}
