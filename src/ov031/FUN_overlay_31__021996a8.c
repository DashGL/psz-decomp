// FUN_overlay_31__021996a8 @ 0x021996a8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_31__021996a8 @ 0x021996a8 (code and checked extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 31, 2026-11-04: allocate 0x64 bytes, construct on success,
 * return pointer or null. Constructor saves receiver, calls receiver-only
 * resident base 02037760 before reading other argument registers, and returns
 * its saved receiver. Full constructor disassembly retained with evidence.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_31__0219a2b4(void *);
void *FUN_overlay_31__021996a8(void) {
    void *object=FUN_020ba894(0x64);
    if(object) return FUN_overlay_31__0219a2b4(object);
    return object;
}
