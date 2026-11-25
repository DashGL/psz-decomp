// FUN_overlay_12__0213079c @ 0x0213079c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0213079c @ 0x0213079c (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate owner-linked child and return constructed handle or negative-one failure.
 * Field identities remain provisional.
 */
extern void *FUN_020ba918(unsigned int);
extern unsigned int *FUN_overlay_12__021307c0(void *,void *);
unsigned int FUN_overlay_12__0213079c(void *owner) {unsigned int *p=FUN_020ba918(152);if(p)p=FUN_overlay_12__021307c0(p,owner);if(p)return p[2];return -1u;}
