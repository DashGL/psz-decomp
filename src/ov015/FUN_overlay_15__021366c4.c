// FUN_overlay_15__021366c4 @ 0x021366c4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__021366c4 @ 0x021366c4 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate with alignment, zero requested size and return original pointer.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_15__02136694(unsigned int,int);
extern void FUN_020656b8(void *,unsigned int,unsigned int);
void *FUN_overlay_15__021366c4(unsigned int size,int alignment) {void *p=FUN_overlay_15__02136694(size,alignment);FUN_020656b8(p,0,size);return p;}
