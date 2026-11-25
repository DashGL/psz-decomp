// FUN_overlay_30__021984d8 @ 0x021984d8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_30__021984d8 @ 0x021984d8 (code and checked extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 30, 2026-11-04: allocate 0xd4 bytes and forward both
 * incoming parameters to constructor on success; return null on failure.
 * Constructor ABI checked through initial three-argument base 020352dc and
 * final saved-receiver return. Constructor disassembly retained as evidence.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_30__021984a4(void *,unsigned int,unsigned int);
void *FUN_overlay_30__021984d8(unsigned int a,unsigned int b) {
    void *object=FUN_020ba894(0xd4);
    if(object) return FUN_overlay_30__021984a4(object,a,b);
    return object;
}
