// FUN_overlay_30__02199ec0 @ 0x02199ec0 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_30__02199ec0 @ 0x02199ec0 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30 reconstruction from extracted module bytes, 2026-11-04.
 * Allocate extended owner storage and initialize it after publication.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int);
extern void FUN_overlay_30__02199edc(void *);
void FUN_overlay_30__02199ec0(char *p) { *(void **)(p+0xd4)=FUN_020ba894(60); FUN_overlay_30__02199edc(*(void **)(p+0xd4)); }
