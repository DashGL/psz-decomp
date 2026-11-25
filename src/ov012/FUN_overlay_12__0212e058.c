// FUN_overlay_12__0212e058 @ 0x0212e058 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212e058 @ 0x0212e058 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate and construct child receiver, returning its handle or negative-one failure.
 * Field identities remain provisional.
 */
extern void *FUN_020ba918(unsigned int);
extern unsigned int *FUN_overlay_12__0212e07c(void *,void *);
unsigned int FUN_overlay_12__0212e058(void *owner) {unsigned int *p=FUN_020ba918(188);if(p)p=FUN_overlay_12__0212e07c(p,owner);if(p)return p[2];return -1u;}
